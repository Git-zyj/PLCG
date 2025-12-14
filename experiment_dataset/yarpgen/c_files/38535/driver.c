#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)-107;
int zero = 0;
unsigned long long int var_11 = 6843791215846064610ULL;
short var_12 = (short)2224;
short var_13 = (short)-7704;
int var_14 = 1064762002;
unsigned int var_15 = 2008502619U;
unsigned int var_16 = 3192437942U;
short var_17 = (short)-7183;
unsigned int arr_2 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = 3266968761U;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
