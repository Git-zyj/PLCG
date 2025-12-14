#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -5894660635843326732LL;
long long int var_4 = 223836149295494649LL;
unsigned short var_15 = (unsigned short)48284;
int zero = 0;
unsigned short var_16 = (unsigned short)61773;
short var_17 = (short)-3928;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
