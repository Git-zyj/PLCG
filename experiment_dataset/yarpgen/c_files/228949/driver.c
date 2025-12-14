#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 3398560424937584740LL;
unsigned int var_2 = 2184813357U;
unsigned short var_3 = (unsigned short)2413;
_Bool var_5 = (_Bool)0;
unsigned char var_6 = (unsigned char)125;
int var_7 = 1607499899;
signed char var_8 = (signed char)-74;
short var_10 = (short)21960;
unsigned int var_11 = 1047392308U;
signed char var_12 = (signed char)92;
signed char var_15 = (signed char)14;
unsigned short var_16 = (unsigned short)21910;
unsigned int var_17 = 2949824940U;
int zero = 0;
unsigned long long int var_19 = 18353555311245968405ULL;
unsigned int var_20 = 1165783366U;
unsigned short var_21 = (unsigned short)50313;
signed char var_22 = (signed char)-43;
_Bool var_23 = (_Bool)1;
long long int var_24 = 1255501967333727082LL;
short var_25 = (short)-15246;
unsigned short var_26 = (unsigned short)55158;
unsigned char arr_0 [25] ;
signed char arr_1 [25] ;
unsigned long long int arr_2 [25] ;
_Bool arr_3 [25] [25] [25] ;
long long int arr_4 [25] ;
_Bool arr_8 [19] ;
unsigned short arr_12 [18] ;
unsigned int arr_5 [25] ;
_Bool arr_9 [19] [19] ;
long long int arr_10 [19] ;
long long int arr_11 [19] [19] ;
unsigned short arr_14 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (unsigned char)204;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (signed char)-53;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = 5190036561750411822ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = 1089288068849093529LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_8 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_12 [i_0] = (unsigned short)39989;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 727939599U : 214734256U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_9 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_10 [i_0] = -4006270077372725831LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_11 [i_0] [i_1] = -6160904151589621002LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_14 [i_0] = (unsigned short)649;
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
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_14 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
