#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 483028634U;
unsigned char var_1 = (unsigned char)248;
unsigned char var_4 = (unsigned char)18;
short var_7 = (short)17618;
short var_8 = (short)-30379;
int zero = 0;
unsigned int var_11 = 764710755U;
long long int var_12 = -5701172370041197517LL;
short var_13 = (short)-17620;
unsigned int var_14 = 21504074U;
unsigned long long int var_15 = 10816296150982981753ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
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
