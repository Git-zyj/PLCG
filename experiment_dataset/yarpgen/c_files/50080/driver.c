#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)2;
unsigned char var_2 = (unsigned char)94;
unsigned short var_3 = (unsigned short)50890;
_Bool var_6 = (_Bool)0;
unsigned char var_7 = (unsigned char)96;
long long int var_8 = -6299800371919410640LL;
unsigned char var_9 = (unsigned char)231;
int var_10 = -686970303;
long long int var_11 = -3095804335574393827LL;
unsigned int var_12 = 292548745U;
int var_15 = 1355809795;
short var_17 = (short)-27028;
unsigned short var_19 = (unsigned short)10000;
int zero = 0;
short var_20 = (short)25370;
unsigned char var_21 = (unsigned char)214;
int var_22 = -1239080158;
int var_23 = -542157635;
int var_24 = 1664873785;
short var_25 = (short)-860;
int var_26 = -1253368460;
unsigned char var_27 = (unsigned char)15;
unsigned short var_28 = (unsigned short)50291;
int var_29 = -626932601;
long long int var_30 = -3643227496565141300LL;
unsigned short var_31 = (unsigned short)31481;
int var_32 = 1953780397;
int var_33 = 1517957671;
unsigned short var_34 = (unsigned short)15120;
unsigned short var_35 = (unsigned short)51298;
unsigned char var_36 = (unsigned char)226;
unsigned short var_37 = (unsigned short)62280;
int var_38 = -1365699443;
long long int var_39 = -2388662549376641873LL;
unsigned char var_40 = (unsigned char)207;
unsigned short arr_2 [21] ;
unsigned char arr_6 [21] ;
_Bool arr_13 [24] ;
int arr_14 [24] ;
unsigned short arr_18 [24] [24] [24] ;
int arr_19 [24] [24] [24] [24] [24] ;
int arr_21 [23] ;
unsigned char arr_22 [23] ;
long long int arr_23 [23] ;
unsigned short arr_28 [19] [19] ;
int arr_7 [21] [21] ;
int arr_10 [20] [20] ;
unsigned char arr_24 [23] ;
long long int arr_34 [19] [19] [19] ;
int arr_35 [19] [19] [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (unsigned short)19;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_6 [i_0] = (unsigned char)105;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_13 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_14 [i_0] = -617829049;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = (unsigned short)65471;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        arr_19 [i_0] [i_1] [i_2] [i_3] [i_4] = -1916181928;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_21 [i_0] = 735906289;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_22 [i_0] = (i_0 % 2 == 0) ? (unsigned char)100 : (unsigned char)98;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_23 [i_0] = -9070877215287905767LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_28 [i_0] [i_1] = (unsigned short)58441;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_7 [i_0] [i_1] = -1290056858;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_10 [i_0] [i_1] = -2054893728;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_24 [i_0] = (i_0 % 2 == 0) ? (unsigned char)116 : (unsigned char)101;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_34 [i_0] [i_1] [i_2] = -6289095816336631536LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_35 [i_0] [i_1] [i_2] [i_3] = 1280375882;
}

void checksum() {
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
    hash(&seed, var_38);
    hash(&seed, var_39);
    hash(&seed, var_40);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_24 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                hash(&seed, arr_34 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    hash(&seed, arr_35 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
