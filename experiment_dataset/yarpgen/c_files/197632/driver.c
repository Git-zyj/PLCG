#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)12776;
signed char var_4 = (signed char)35;
unsigned char var_7 = (unsigned char)140;
unsigned int var_11 = 3541577156U;
int zero = 0;
int var_14 = -2049395829;
int var_15 = -37302271;
void init() {
}

void checksum() {
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
