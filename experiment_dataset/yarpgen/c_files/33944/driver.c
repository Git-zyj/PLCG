#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4031255439201010338LL;
long long int var_2 = -3073326176339264884LL;
unsigned char var_4 = (unsigned char)8;
_Bool var_7 = (_Bool)1;
unsigned int var_9 = 4167037133U;
_Bool var_10 = (_Bool)0;
int zero = 0;
_Bool var_11 = (_Bool)0;
signed char var_12 = (signed char)13;
unsigned int var_13 = 3367373241U;
signed char var_14 = (signed char)80;
signed char var_15 = (signed char)121;
signed char var_16 = (signed char)62;
unsigned char var_17 = (unsigned char)213;
unsigned long long int var_18 = 1386340288118709572ULL;
int var_19 = -646227317;
_Bool arr_0 [11] [11] ;
signed char arr_1 [11] ;
signed char arr_2 [11] ;
signed char arr_3 [11] [11] [11] ;
int arr_4 [11] ;
long long int arr_8 [11] [11] [11] ;
short arr_13 [14] [14] [14] ;
unsigned char arr_18 [18] ;
_Bool arr_21 [18] [18] ;
int arr_22 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (signed char)55;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (signed char)45;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (signed char)111;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = -790422759;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = -8215946761458785991LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (short)-5090;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_18 [i_0] = (unsigned char)173;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_21 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_22 [i_0] = -1031645098;
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
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_22 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
