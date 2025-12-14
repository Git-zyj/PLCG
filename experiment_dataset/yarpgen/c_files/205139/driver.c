#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1430159422U;
int var_3 = 1140493118;
unsigned int var_8 = 1053240011U;
long long int var_13 = -3644412969825458950LL;
unsigned char var_17 = (unsigned char)134;
int zero = 0;
unsigned short var_18 = (unsigned short)43722;
int var_19 = 784932642;
short var_20 = (short)-4499;
_Bool var_21 = (_Bool)0;
unsigned short var_22 = (unsigned short)28414;
long long int var_23 = -1013607182067491663LL;
long long int var_24 = 1050875296773607162LL;
unsigned int var_25 = 3964410787U;
long long int var_26 = -6341860818457821764LL;
signed char var_27 = (signed char)42;
long long int var_28 = -5009623031880862776LL;
unsigned short var_29 = (unsigned short)37522;
unsigned short var_30 = (unsigned short)23704;
unsigned long long int var_31 = 3536480619332521841ULL;
unsigned int arr_0 [23] ;
unsigned long long int arr_1 [23] [23] ;
unsigned int arr_3 [24] ;
long long int arr_4 [24] [24] ;
signed char arr_5 [24] ;
unsigned short arr_8 [15] [15] ;
signed char arr_11 [15] [15] [15] ;
unsigned char arr_12 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = 2153505079U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_1 [i_0] [i_1] = 12158439787199633740ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = 2356995975U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_4 [i_0] [i_1] = 1181145409021042807LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = (signed char)40;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_8 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)23927 : (unsigned short)17169;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (signed char)67;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_12 [i_0] = (unsigned char)209;
}

void checksum() {
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
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
