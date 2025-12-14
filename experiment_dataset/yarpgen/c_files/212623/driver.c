#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned char var_1 = (unsigned char)95;
unsigned char var_4 = (unsigned char)218;
signed char var_8 = (signed char)36;
_Bool var_9 = (_Bool)0;
long long int var_10 = -1546266080378690945LL;
short var_13 = (short)19455;
long long int var_14 = 8111053338363917164LL;
int zero = 0;
_Bool var_15 = (_Bool)0;
long long int var_16 = 6812980891696930800LL;
long long int var_17 = 1949334461507738074LL;
unsigned short var_18 = (unsigned short)44795;
short var_19 = (short)22670;
_Bool arr_0 [19] [19] ;
signed char arr_1 [19] [19] ;
unsigned char arr_2 [19] ;
_Bool arr_5 [19] [19] ;
short arr_3 [19] ;
long long int arr_4 [19] ;
signed char arr_7 [19] ;
_Bool arr_8 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)11;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (unsigned char)95;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_5 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = (short)-1985;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = -1981244847093841997LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_7 [i_0] = (signed char)99;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_8 [i_0] [i_1] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
