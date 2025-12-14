#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)48304;
signed char var_7 = (signed char)-121;
int var_11 = 394577504;
short var_12 = (short)-6351;
int zero = 0;
unsigned int var_13 = 1365115353U;
signed char var_14 = (signed char)-108;
signed char var_15 = (signed char)-76;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
