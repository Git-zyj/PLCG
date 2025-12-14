#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2777793367U;
unsigned int var_2 = 2868780692U;
unsigned int var_10 = 1853563060U;
unsigned int var_12 = 1431265467U;
unsigned int var_14 = 3736224030U;
int zero = 0;
unsigned int var_15 = 3725821751U;
unsigned int var_16 = 3061733796U;
unsigned int var_17 = 2034935438U;
void init() {
}

void checksum() {
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
