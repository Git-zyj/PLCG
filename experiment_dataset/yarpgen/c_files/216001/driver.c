#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 449965888;
unsigned int var_1 = 3899089844U;
int var_2 = 416982965;
short var_3 = (short)29317;
unsigned short var_5 = (unsigned short)49412;
unsigned short var_6 = (unsigned short)47281;
unsigned long long int var_8 = 14139401455190796192ULL;
unsigned int var_9 = 2582323908U;
int zero = 0;
unsigned short var_11 = (unsigned short)44559;
short var_12 = (short)11932;
unsigned int var_13 = 1833763816U;
unsigned short var_14 = (unsigned short)37016;
short var_15 = (short)4816;
unsigned short var_16 = (unsigned short)21405;
int var_17 = 600690299;
short var_18 = (short)-22536;
unsigned short var_19 = (unsigned short)11459;
unsigned long long int var_20 = 8961378857223780984ULL;
unsigned long long int var_21 = 4464151269935831004ULL;
short var_22 = (short)14205;
int arr_2 [11] [11] ;
unsigned int arr_3 [11] ;
unsigned int arr_5 [11] ;
unsigned long long int arr_7 [13] [13] ;
unsigned short arr_8 [13] ;
unsigned int arr_10 [20] [20] ;
int arr_11 [20] [20] ;
unsigned short arr_9 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_2 [i_0] [i_1] = 253342957;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 2623193639U : 1541244971U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = 2213626609U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_7 [i_0] [i_1] = 14384639080818129156ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_8 [i_0] = (unsigned short)10474;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_10 [i_0] [i_1] = (i_0 % 2 == 0) ? 3555515044U : 3033429009U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_11 [i_0] [i_1] = 2146815113;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? (unsigned short)44278 : (unsigned short)57504;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
