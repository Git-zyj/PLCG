#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = -1209100643452418921LL;
_Bool var_7 = (_Bool)0;
unsigned int var_8 = 2998497067U;
unsigned int var_11 = 2421179972U;
unsigned int var_12 = 2592800715U;
long long int var_14 = -2300190716892632650LL;
unsigned int var_15 = 109308685U;
int zero = 0;
unsigned int var_17 = 241824944U;
_Bool var_18 = (_Bool)1;
unsigned int var_19 = 2944478790U;
_Bool var_20 = (_Bool)0;
unsigned int arr_1 [13] [13] ;
unsigned int arr_3 [13] ;
unsigned int arr_4 [13] [13] ;
unsigned int arr_5 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = 112674142U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = 274345881U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_4 [i_0] [i_1] = 1601475074U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 399638307U : 2164453673U;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
