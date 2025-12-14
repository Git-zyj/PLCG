#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3289707294U;
_Bool var_4 = (_Bool)0;
int zero = 0;
_Bool var_13 = (_Bool)0;
signed char var_14 = (signed char)4;
_Bool var_15 = (_Bool)0;
short var_16 = (short)14503;
unsigned int var_17 = 3516140386U;
long long int var_18 = -5468409020028619415LL;
signed char arr_0 [24] ;
_Bool arr_1 [24] ;
unsigned long long int arr_2 [24] ;
unsigned char arr_5 [19] [19] ;
unsigned char arr_6 [19] ;
unsigned int arr_7 [23] ;
unsigned int arr_8 [23] ;
unsigned char arr_3 [24] [24] ;
short arr_4 [24] [24] ;
unsigned char arr_10 [23] ;
unsigned int arr_11 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (signed char)102;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = 7914243143566001699ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned char)235;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_6 [i_0] = (unsigned char)132;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_7 [i_0] = 2760483280U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_8 [i_0] = 817585390U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)183;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_4 [i_0] [i_1] = (short)6047;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_10 [i_0] = (unsigned char)39;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_11 [i_0] = 1945269913U;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
