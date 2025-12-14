#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14248672426751659295ULL;
unsigned char var_1 = (unsigned char)96;
unsigned long long int var_2 = 7272505966234932803ULL;
int var_4 = 1134850862;
unsigned int var_5 = 2730618173U;
int var_6 = 409893545;
unsigned int var_8 = 3658926286U;
_Bool var_9 = (_Bool)0;
unsigned int var_10 = 2640185630U;
int var_11 = -1634025786;
int var_13 = -652672207;
unsigned char var_14 = (unsigned char)43;
long long int var_15 = 7530822029318215795LL;
long long int var_16 = 7609930822800669201LL;
_Bool var_17 = (_Bool)1;
int zero = 0;
int var_18 = 1003652961;
unsigned long long int var_19 = 9314870912584324468ULL;
unsigned long long int var_20 = 18432653342324958884ULL;
unsigned char var_21 = (unsigned char)67;
unsigned long long int var_22 = 16590669526966713330ULL;
unsigned int var_23 = 480506447U;
short var_24 = (short)3586;
unsigned int var_25 = 3650182040U;
unsigned long long int arr_0 [21] ;
short arr_4 [21] [21] ;
unsigned long long int arr_5 [21] [21] ;
short arr_9 [21] [21] ;
short arr_11 [21] [21] [21] [21] [21] [21] ;
unsigned int arr_12 [21] ;
short arr_13 [21] [21] [21] [21] [21] ;
unsigned long long int arr_16 [16] [16] ;
unsigned long long int arr_17 [16] [16] ;
unsigned long long int arr_18 [16] [16] ;
unsigned int arr_8 [21] ;
int arr_14 [21] ;
long long int arr_15 [21] ;
long long int arr_20 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = 7835333140842621004ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_4 [i_0] [i_1] = (short)-20488;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? 8624358933461898061ULL : 9655645217503638483ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_9 [i_0] [i_1] = (short)7293;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 21; ++i_5) 
                            arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_4 % 2 == 0) ? (short)-28746 : (short)8705;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_12 [i_0] = 1116497752U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? (short)11378 : (short)18820;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_16 [i_0] [i_1] = 544155700480313912ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_17 [i_0] [i_1] = 5159541155847344099ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_18 [i_0] [i_1] = 14174658825642602532ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? 981811410U : 1304196677U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? 1407408524 : 1027002025;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_15 [i_0] = (i_0 % 2 == 0) ? 5966417173468087794LL : -1668520220625311354LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_20 [i_0] = 3252630713918057715LL;
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
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_20 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
