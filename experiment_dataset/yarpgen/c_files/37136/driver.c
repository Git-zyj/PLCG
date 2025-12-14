#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 18189614705230385579ULL;
unsigned int var_4 = 1247381242U;
signed char var_5 = (signed char)95;
int zero = 0;
unsigned int var_12 = 2526800376U;
unsigned long long int var_13 = 9685606264959450570ULL;
signed char var_14 = (signed char)-29;
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
