#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_11 = (signed char)-109;
unsigned long long int var_13 = 6465536832659841175ULL;
unsigned char var_15 = (unsigned char)231;
unsigned char var_16 = (unsigned char)6;
int zero = 0;
short var_18 = (short)-12043;
unsigned int var_19 = 1848699079U;
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
