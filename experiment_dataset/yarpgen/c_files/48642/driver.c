#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 876711654;
unsigned long long int var_4 = 10766495868050317916ULL;
_Bool var_8 = (_Bool)1;
unsigned short var_11 = (unsigned short)55396;
unsigned int var_14 = 2014068227U;
unsigned char var_15 = (unsigned char)187;
int zero = 0;
unsigned char var_16 = (unsigned char)107;
_Bool var_17 = (_Bool)1;
int var_18 = 14779097;
unsigned char arr_1 [10] ;
unsigned int arr_4 [10] ;
short arr_6 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (unsigned char)162;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = 1140791420U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_6 [i_0] = (short)20460;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
