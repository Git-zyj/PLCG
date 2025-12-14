#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3521095515U;
unsigned char var_3 = (unsigned char)239;
signed char var_6 = (signed char)14;
short var_9 = (short)14742;
int zero = 0;
unsigned int var_12 = 1791625040U;
unsigned int var_13 = 1953836152U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
