#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 1391098714309314536LL;
unsigned short var_5 = (unsigned short)16398;
signed char var_7 = (signed char)27;
long long int var_10 = -8087358711621261236LL;
int zero = 0;
signed char var_12 = (signed char)-50;
short var_13 = (short)24594;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
