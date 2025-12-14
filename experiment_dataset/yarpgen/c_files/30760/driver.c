#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)48726;
unsigned long long int var_6 = 2291308783030704090ULL;
unsigned long long int var_10 = 3568053681783987754ULL;
unsigned long long int var_13 = 15206248653565232808ULL;
int zero = 0;
unsigned short var_20 = (unsigned short)30754;
unsigned int var_21 = 2389575165U;
unsigned short var_22 = (unsigned short)10417;
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
