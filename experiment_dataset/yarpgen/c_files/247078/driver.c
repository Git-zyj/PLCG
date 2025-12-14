#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2820458609U;
unsigned long long int var_1 = 4817210312325051166ULL;
unsigned int var_4 = 1881110021U;
unsigned short var_6 = (unsigned short)11071;
int var_11 = -841644161;
int zero = 0;
int var_12 = -857636722;
int var_13 = 1571653666;
signed char var_14 = (signed char)-120;
unsigned short var_15 = (unsigned short)9811;
unsigned short var_16 = (unsigned short)49378;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
