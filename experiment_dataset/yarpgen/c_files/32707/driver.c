#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned long long int var_2 = 1224375084954675754ULL;
unsigned int var_3 = 2629557696U;
unsigned int var_4 = 2131134412U;
unsigned long long int var_12 = 2164948620905974017ULL;
unsigned short var_13 = (unsigned short)22558;
unsigned short var_15 = (unsigned short)11480;
int zero = 0;
unsigned short var_17 = (unsigned short)13653;
signed char var_18 = (signed char)47;
unsigned long long int var_19 = 12722461522559545124ULL;
unsigned long long int var_20 = 8937181295935966861ULL;
unsigned long long int var_21 = 11717083349072182358ULL;
signed char var_22 = (signed char)-41;
_Bool var_23 = (_Bool)1;
int var_24 = -312239790;
unsigned short var_25 = (unsigned short)51358;
signed char var_26 = (signed char)5;
short var_27 = (short)17438;
unsigned char var_28 = (unsigned char)130;
unsigned int arr_0 [20] ;
unsigned short arr_1 [20] ;
unsigned short arr_3 [23] ;
int arr_4 [23] [23] ;
_Bool arr_5 [23] ;
_Bool arr_7 [14] ;
signed char arr_8 [14] [14] ;
_Bool arr_2 [20] ;
_Bool arr_6 [23] [23] ;
signed char arr_9 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = 1945983181U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (unsigned short)6798;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = (unsigned short)6883;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_4 [i_0] [i_1] = 1046403020;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_7 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_8 [i_0] [i_1] = (signed char)21;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_6 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_9 [i_0] = (signed char)-26;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
