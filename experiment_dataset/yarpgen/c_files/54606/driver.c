#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1434386886U;
unsigned int var_3 = 1864003391U;
unsigned int var_4 = 3608810433U;
unsigned int var_11 = 103940410U;
int zero = 0;
unsigned int var_14 = 1807089795U;
unsigned int var_15 = 2791417712U;
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
