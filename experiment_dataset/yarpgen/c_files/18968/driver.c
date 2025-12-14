#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-29646;
unsigned long long int var_2 = 2769138573908917095ULL;
int var_3 = -1748855333;
int var_4 = 862501988;
_Bool var_6 = (_Bool)0;
unsigned int var_7 = 2792952942U;
unsigned short var_8 = (unsigned short)45859;
unsigned int var_9 = 3302310953U;
short var_10 = (short)31739;
int zero = 0;
int var_13 = 160277362;
unsigned char var_14 = (unsigned char)222;
unsigned char var_15 = (unsigned char)226;
unsigned short var_16 = (unsigned short)42897;
short var_17 = (short)-13258;
unsigned short var_18 = (unsigned short)31502;
int var_19 = 1771412332;
short var_20 = (short)-32641;
short var_21 = (short)-17568;
unsigned short var_22 = (unsigned short)36496;
int arr_0 [23] ;
short arr_1 [23] ;
_Bool arr_2 [23] [23] ;
short arr_3 [23] [23] [23] ;
long long int arr_4 [23] ;
int arr_5 [23] [23] [23] ;
unsigned short arr_9 [11] ;
int arr_6 [23] ;
_Bool arr_7 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = 1016952395;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (short)2876;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (short)14801;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = 663665525105723280LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = -1776851714;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_9 [i_0] = (unsigned short)59389;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = 1020710441;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_7 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
