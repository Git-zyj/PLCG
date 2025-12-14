#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_8 = -1019587828;
int var_12 = 1663263677;
unsigned short var_16 = (unsigned short)23775;
int zero = 0;
unsigned short var_20 = (unsigned short)30994;
unsigned short var_21 = (unsigned short)45354;
unsigned short var_22 = (unsigned short)21873;
unsigned short var_23 = (unsigned short)6843;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
