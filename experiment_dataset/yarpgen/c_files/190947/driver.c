#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)23;
int var_9 = 1337961800;
long long int var_13 = 834133503265545420LL;
int zero = 0;
short var_14 = (short)10269;
long long int var_15 = -7056705106473415841LL;
int var_16 = -313643927;
int var_17 = -862544998;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
