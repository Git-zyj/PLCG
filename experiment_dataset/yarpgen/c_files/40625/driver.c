#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_9 = (short)-20343;
short var_11 = (short)21840;
short var_12 = (short)-23178;
signed char var_13 = (signed char)-92;
signed char var_17 = (signed char)-21;
int zero = 0;
short var_18 = (short)18801;
unsigned int var_19 = 2898020021U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
