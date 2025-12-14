#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)3321;
unsigned short var_12 = (unsigned short)48476;
unsigned short var_14 = (unsigned short)65423;
int zero = 0;
long long int var_18 = 1176621329881561620LL;
unsigned short var_19 = (unsigned short)22013;
unsigned short var_20 = (unsigned short)16623;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
