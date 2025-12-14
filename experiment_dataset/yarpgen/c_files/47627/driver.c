#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 776796072U;
long long int var_2 = -8150650488632473413LL;
signed char var_3 = (signed char)56;
int var_7 = -1865113017;
int zero = 0;
int var_17 = -767371790;
int var_18 = 1608319537;
void init() {
}

void checksum() {
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
