#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)32078;
int var_1 = 978540499;
unsigned long long int var_3 = 15343175498765837635ULL;
short var_4 = (short)21241;
short var_5 = (short)6211;
unsigned long long int var_6 = 13500382208237563546ULL;
int var_9 = -50305196;
int zero = 0;
long long int var_11 = -6843752231357418797LL;
unsigned int var_12 = 3131251146U;
short var_13 = (short)-18574;
unsigned long long int var_14 = 8985743667403979332ULL;
unsigned short var_15 = (unsigned short)7156;
short var_16 = (short)-16361;
unsigned long long int arr_0 [16] ;
unsigned long long int arr_1 [16] [16] ;
long long int arr_3 [16] ;
_Bool arr_4 [16] ;
long long int arr_5 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = 13920305171986918035ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_1 [i_0] [i_1] = 14955598591514727943ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = -4799857261254867944LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_5 [i_0] [i_1] = 4243512646005893247LL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
