#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 6671761521349073185ULL;
unsigned short var_6 = (unsigned short)60098;
short var_8 = (short)-25651;
int zero = 0;
int var_12 = 659006188;
unsigned int var_13 = 3514113105U;
unsigned short var_14 = (unsigned short)56832;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
