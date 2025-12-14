#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1433896531U;
short var_7 = (short)-21732;
unsigned short var_9 = (unsigned short)42883;
int var_15 = 1205242820;
int zero = 0;
long long int var_19 = -6099721668907105412LL;
unsigned char var_20 = (unsigned char)24;
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
