#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2136854457U;
signed char var_8 = (signed char)0;
unsigned long long int var_9 = 16901548323326264656ULL;
int zero = 0;
long long int var_15 = 7604144814023613408LL;
long long int var_16 = -331182376481774975LL;
signed char var_17 = (signed char)14;
unsigned int var_18 = 1660797152U;
short arr_0 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (short)-28063;
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
