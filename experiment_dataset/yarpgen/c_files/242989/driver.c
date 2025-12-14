#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2283749474U;
signed char var_4 = (signed char)-36;
unsigned int var_12 = 577954628U;
int zero = 0;
signed char var_20 = (signed char)99;
unsigned char var_21 = (unsigned char)42;
unsigned int var_22 = 2022105462U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
