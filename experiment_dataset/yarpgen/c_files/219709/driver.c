#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3331979064U;
unsigned int var_4 = 2576219768U;
unsigned int var_5 = 156363852U;
unsigned int var_6 = 1619241422U;
unsigned int var_10 = 2535675286U;
int zero = 0;
unsigned int var_12 = 625516417U;
unsigned int var_13 = 2581645221U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
