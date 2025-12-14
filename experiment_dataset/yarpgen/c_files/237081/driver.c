#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)61196;
signed char var_10 = (signed char)-68;
int var_13 = 1315440016;
unsigned char var_14 = (unsigned char)243;
int zero = 0;
signed char var_15 = (signed char)-55;
long long int var_16 = 1154457051409123676LL;
short var_17 = (short)-14887;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
