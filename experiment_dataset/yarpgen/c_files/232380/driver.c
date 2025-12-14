#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 1526690400U;
short var_12 = (short)-210;
int zero = 0;
unsigned short var_15 = (unsigned short)50849;
unsigned long long int var_16 = 3813003032915126962ULL;
unsigned int var_17 = 2268130286U;
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
