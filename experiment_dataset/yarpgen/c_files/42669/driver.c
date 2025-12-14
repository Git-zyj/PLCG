#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)236;
int var_3 = -1871918640;
int var_4 = 787297093;
unsigned short var_6 = (unsigned short)9658;
unsigned short var_17 = (unsigned short)9082;
unsigned short var_18 = (unsigned short)44254;
int zero = 0;
unsigned short var_19 = (unsigned short)18952;
unsigned short var_20 = (unsigned short)59073;
unsigned long long int var_21 = 8547555242357270213ULL;
unsigned long long int var_22 = 14853355611933980875ULL;
int var_23 = 965583502;
unsigned long long int var_24 = 14908843697363757167ULL;
signed char var_25 = (signed char)-45;
int var_26 = -1439795232;
int var_27 = -441637749;
unsigned short var_28 = (unsigned short)32959;
signed char var_29 = (signed char)-4;
int var_30 = 1488093045;
unsigned long long int arr_0 [25] [25] ;
unsigned long long int arr_1 [25] [25] ;
unsigned long long int arr_6 [14] [14] ;
int arr_9 [14] [14] [14] ;
int arr_11 [14] ;
int arr_12 [14] [14] [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = (i_1 % 2 == 0) ? 11204168609292689307ULL : 14257325258580866218ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_1 [i_0] [i_1] = (i_0 % 2 == 0) ? 14153700523384419286ULL : 11373729640073321332ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_6 [i_0] [i_1] = (i_0 % 2 == 0) ? 17787736027241077590ULL : 11585878034768374810ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? -482421872 : 1408840005;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_11 [i_0] = -1096590124;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? -792230012 : -929199745;
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
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    hash(&seed, arr_12 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
