#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_8 = 15613903097115640597ULL;
short var_12 = (short)21510;
unsigned long long int var_16 = 1226421908699009277ULL;
int zero = 0;
unsigned int var_20 = 3078594039U;
unsigned int var_21 = 2348727494U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
