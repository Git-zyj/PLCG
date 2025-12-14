#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 5235894167078226351ULL;
unsigned int var_3 = 2518323262U;
int var_12 = 58672437;
short var_19 = (short)-23423;
int zero = 0;
int var_20 = 1792860862;
unsigned long long int var_21 = 11634171819531637877ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
