#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-7562;
unsigned long long int var_5 = 10608907136119973785ULL;
short var_10 = (short)-31620;
int var_14 = 178874048;
int zero = 0;
long long int var_16 = -920689152228915387LL;
short var_17 = (short)24040;
void init() {
}

void checksum() {
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
