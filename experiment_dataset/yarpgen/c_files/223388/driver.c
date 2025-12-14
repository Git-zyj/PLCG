#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7062313878019419075ULL;
short var_1 = (short)-21990;
long long int var_2 = 146937448448409869LL;
unsigned char var_3 = (unsigned char)157;
long long int var_4 = 8668066000911665279LL;
long long int var_5 = -2833313034698534871LL;
_Bool var_6 = (_Bool)1;
unsigned long long int var_7 = 16287017288553783574ULL;
unsigned char var_8 = (unsigned char)141;
_Bool var_9 = (_Bool)1;
_Bool var_10 = (_Bool)1;
_Bool var_11 = (_Bool)0;
unsigned char var_12 = (unsigned char)185;
unsigned short var_13 = (unsigned short)39178;
unsigned char var_15 = (unsigned char)38;
unsigned short var_16 = (unsigned short)378;
unsigned short var_17 = (unsigned short)26040;
long long int var_18 = -8853566520363743501LL;
unsigned short var_19 = (unsigned short)40070;
int zero = 0;
unsigned int var_20 = 978394707U;
unsigned int var_21 = 2084701909U;
long long int var_22 = -4667090074042323679LL;
unsigned long long int var_23 = 4446103685564523137ULL;
unsigned short var_24 = (unsigned short)7231;
int var_25 = 875758658;
long long int var_26 = 4823859010980991805LL;
_Bool var_27 = (_Bool)0;
_Bool var_28 = (_Bool)1;
unsigned short var_29 = (unsigned short)38771;
_Bool arr_0 [15] [15] ;
long long int arr_1 [15] ;
unsigned int arr_2 [15] ;
long long int arr_4 [25] ;
unsigned short arr_5 [25] [25] ;
unsigned int arr_7 [14] [14] ;
short arr_8 [14] ;
_Bool arr_9 [14] [14] ;
_Bool arr_10 [14] ;
unsigned char arr_11 [14] [14] ;
unsigned char arr_13 [14] [14] [14] [14] ;
_Bool arr_14 [14] [14] [14] [14] ;
unsigned short arr_16 [14] [14] ;
unsigned short arr_19 [11] [11] ;
int arr_3 [15] ;
unsigned int arr_6 [25] [25] ;
short arr_17 [14] [14] ;
_Bool arr_21 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = -681556624882644374LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 3523821286U : 4237033809U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = -5005159685563932187LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)49002 : (unsigned short)33343;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_7 [i_0] [i_1] = 1831957359U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_8 [i_0] = (short)14571;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_9 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_11 [i_0] [i_1] = (unsigned char)82;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (unsigned char)95 : (unsigned char)238;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_14 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_16 [i_0] [i_1] = (unsigned short)62384;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_19 [i_0] [i_1] = (unsigned short)44746;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 772366628 : 1159829106;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_6 [i_0] [i_1] = (i_1 % 2 == 0) ? 641676368U : 70977662U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_17 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)6312 : (short)-23856;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_21 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
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
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_17 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_21 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
