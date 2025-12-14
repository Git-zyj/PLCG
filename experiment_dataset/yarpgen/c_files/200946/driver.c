#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)7854;
unsigned char var_2 = (unsigned char)190;
unsigned short var_4 = (unsigned short)7493;
int var_5 = 1849187227;
unsigned int var_9 = 2190051881U;
unsigned short var_14 = (unsigned short)4980;
int zero = 0;
unsigned int var_19 = 766452051U;
unsigned short var_20 = (unsigned short)30913;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
