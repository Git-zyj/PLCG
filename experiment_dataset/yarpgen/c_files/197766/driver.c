#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned long long int var_2 = 2536510033261468233ULL;
unsigned int var_5 = 161482181U;
unsigned int var_6 = 1110688879U;
short var_8 = (short)-22832;
unsigned char var_11 = (unsigned char)51;
int var_12 = -926301796;
int zero = 0;
int var_13 = -985666092;
signed char var_14 = (signed char)-59;
long long int var_15 = -6472275147662052377LL;
unsigned int var_16 = 897241900U;
unsigned int var_17 = 3410428043U;
unsigned int arr_4 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = 2903090626U;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
