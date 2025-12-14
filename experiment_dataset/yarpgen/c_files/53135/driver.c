#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-2611;
unsigned int var_3 = 2704116793U;
int var_4 = 886907441;
unsigned int var_9 = 2318637824U;
int zero = 0;
short var_14 = (short)29315;
short var_15 = (short)21018;
short var_16 = (short)26154;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
