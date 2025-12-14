#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -45600433;
unsigned short var_1 = (unsigned short)43465;
unsigned short var_4 = (unsigned short)52914;
unsigned int var_12 = 3546316037U;
int zero = 0;
int var_16 = -1475875576;
short var_17 = (short)-28259;
unsigned short var_18 = (unsigned short)37359;
short var_19 = (short)8766;
int var_20 = -2056154029;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
