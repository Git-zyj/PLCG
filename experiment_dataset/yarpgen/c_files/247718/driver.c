#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-51;
unsigned short var_5 = (unsigned short)32634;
unsigned short var_10 = (unsigned short)10970;
unsigned short var_11 = (unsigned short)36073;
unsigned char var_17 = (unsigned char)122;
int zero = 0;
_Bool var_19 = (_Bool)1;
unsigned long long int var_20 = 14568757596201022236ULL;
unsigned long long int var_21 = 10362822397425434256ULL;
_Bool var_22 = (_Bool)1;
short var_23 = (short)-32590;
int arr_0 [22] ;
unsigned int arr_1 [22] [22] ;
unsigned short arr_2 [22] ;
unsigned short arr_3 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = -708897181;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_1 [i_0] [i_1] = 1945156783U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (unsigned short)26554;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)25312;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
