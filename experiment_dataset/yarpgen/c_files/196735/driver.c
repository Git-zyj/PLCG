#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 5665337596674809836ULL;
unsigned short var_6 = (unsigned short)43065;
unsigned long long int var_8 = 5296470574507755942ULL;
int zero = 0;
unsigned long long int var_12 = 10322628047102267807ULL;
long long int var_13 = -5517478608375710313LL;
unsigned int var_14 = 137229231U;
long long int var_15 = 5829204103911483364LL;
_Bool var_16 = (_Bool)1;
unsigned int arr_0 [11] ;
signed char arr_1 [11] ;
unsigned long long int arr_2 [23] ;
short arr_3 [23] ;
unsigned int arr_6 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = 1487255144U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (signed char)112 : (signed char)88;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = 10205331174099230955ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = (short)-28363;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_6 [i_0] [i_1] = 4117883484U;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
