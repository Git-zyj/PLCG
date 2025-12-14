#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4219497064178597231ULL;
short var_1 = (short)18067;
int var_8 = -948478612;
unsigned long long int var_9 = 18359703899132818434ULL;
unsigned int var_10 = 2378319605U;
_Bool var_12 = (_Bool)1;
int zero = 0;
unsigned int var_13 = 1303578252U;
_Bool var_14 = (_Bool)0;
signed char var_15 = (signed char)43;
unsigned long long int var_16 = 16967112449432551061ULL;
unsigned long long int var_17 = 16027570559052117233ULL;
unsigned int var_18 = 3655123302U;
unsigned long long int arr_1 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = 5604841941619346405ULL;
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
