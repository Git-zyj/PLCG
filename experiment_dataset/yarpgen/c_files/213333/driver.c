#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)109;
int var_6 = 1625712846;
unsigned int var_10 = 3052369424U;
int zero = 0;
_Bool var_13 = (_Bool)0;
signed char var_14 = (signed char)40;
_Bool var_15 = (_Bool)1;
unsigned int var_16 = 1346803751U;
unsigned char var_17 = (unsigned char)63;
unsigned int var_18 = 1678303774U;
unsigned int arr_0 [23] ;
signed char arr_1 [23] ;
short arr_2 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = 2542425091U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (signed char)30;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (short)13500 : (short)-23439;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
