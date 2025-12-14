#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1122028013;
unsigned int var_5 = 2006527183U;
long long int var_6 = 8869690640424527352LL;
int var_9 = 1295240696;
int zero = 0;
long long int var_11 = -1675791376919166790LL;
long long int var_12 = 5730952085810890764LL;
short var_13 = (short)-4771;
unsigned int var_14 = 1841440790U;
long long int var_15 = -4849791262779402519LL;
unsigned int var_16 = 3833374560U;
unsigned int var_17 = 2684673978U;
unsigned int var_18 = 1134223769U;
unsigned short arr_0 [21] [21] ;
signed char arr_1 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)24282;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (signed char)64;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
