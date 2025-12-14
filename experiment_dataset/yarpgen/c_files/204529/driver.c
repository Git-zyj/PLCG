#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = 6594855229867809249LL;
unsigned long long int var_9 = 14877566058462671456ULL;
signed char var_10 = (signed char)-103;
signed char var_11 = (signed char)-123;
int zero = 0;
unsigned char var_12 = (unsigned char)251;
long long int var_13 = -6261527020354042453LL;
signed char var_14 = (signed char)-66;
unsigned long long int var_15 = 3960670615213490922ULL;
int var_16 = -1766136826;
unsigned long long int var_17 = 18385719452899775833ULL;
unsigned long long int var_18 = 9683398081332176060ULL;
long long int var_19 = 1077562159309125079LL;
unsigned int arr_1 [23] [23] ;
_Bool arr_2 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_1 [i_0] [i_1] = 569178902U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
