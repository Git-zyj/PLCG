#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2970976651538001715LL;
unsigned long long int var_3 = 7282625865861585689ULL;
short var_10 = (short)27634;
long long int var_11 = -7079255723813777534LL;
unsigned short var_14 = (unsigned short)32569;
int zero = 0;
unsigned int var_15 = 142682412U;
short var_16 = (short)11431;
signed char var_17 = (signed char)102;
long long int var_18 = 2671587919099773155LL;
unsigned short arr_4 [10] [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned short)39298;
}

void checksum() {
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
