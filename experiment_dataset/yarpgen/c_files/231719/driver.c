#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)218;
unsigned int var_10 = 3105076258U;
signed char var_11 = (signed char)45;
unsigned int var_13 = 1745174680U;
int zero = 0;
unsigned long long int var_14 = 6032848637832366399ULL;
unsigned int var_15 = 2256979780U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
