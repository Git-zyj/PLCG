#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-7859;
int var_2 = 1528016804;
short var_3 = (short)18733;
int var_8 = -915678979;
int var_9 = 99203264;
short var_10 = (short)-31717;
int zero = 0;
short var_14 = (short)-2158;
short var_15 = (short)-159;
short var_16 = (short)24730;
short var_17 = (short)-16864;
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
