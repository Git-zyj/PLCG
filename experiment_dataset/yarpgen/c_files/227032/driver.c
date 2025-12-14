#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5616861594905982922LL;
short var_1 = (short)-10163;
int var_2 = 1183810208;
int var_3 = 1255056503;
unsigned char var_4 = (unsigned char)115;
int var_5 = 286103320;
int var_6 = 125390740;
long long int var_7 = -8116508204548458753LL;
unsigned short var_8 = (unsigned short)54570;
int var_9 = 1051139247;
unsigned short var_11 = (unsigned short)62593;
unsigned long long int var_16 = 7162814183072927605ULL;
unsigned long long int var_17 = 2039799612260484939ULL;
int zero = 0;
int var_19 = -1829549669;
unsigned long long int var_20 = 7083722259182733360ULL;
long long int var_21 = -1424982429694565022LL;
long long int var_22 = 5596490985047212750LL;
unsigned char var_23 = (unsigned char)153;
unsigned short var_24 = (unsigned short)10038;
int var_25 = -920454008;
long long int var_26 = -2762665215893405065LL;
int var_27 = 1799399513;
unsigned long long int var_28 = 4484346716466041202ULL;
unsigned char var_29 = (unsigned char)243;
unsigned short var_30 = (unsigned short)60866;
short var_31 = (short)-14450;
unsigned long long int var_32 = 6351690019563370115ULL;
long long int var_33 = 2648327736133045325LL;
short var_34 = (short)-8263;
long long int var_35 = -5475082766630755975LL;
long long int var_36 = -7697286816746149457LL;
unsigned short var_37 = (unsigned short)37062;
unsigned char arr_0 [15] ;
unsigned char arr_1 [15] ;
int arr_3 [11] [11] ;
unsigned short arr_4 [11] [11] ;
unsigned char arr_6 [11] [11] ;
unsigned long long int arr_8 [11] ;
short arr_9 [11] [11] [11] ;
long long int arr_10 [11] [11] ;
unsigned short arr_11 [11] [11] ;
unsigned short arr_17 [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (unsigned char)224;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (unsigned char)147;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_3 [i_0] [i_1] = 720499408;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)22856;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned char)181;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_8 [i_0] = 13115922219159283331ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (short)-32506;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_10 [i_0] [i_1] = -8816345452299406598LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_11 [i_0] [i_1] = (unsigned short)28884;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = (unsigned short)12041;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    hash(&seed, var_37);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
