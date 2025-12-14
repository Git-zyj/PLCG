#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2385337311192673244LL;
short var_6 = (short)-8368;
signed char var_12 = (signed char)-49;
unsigned char var_14 = (unsigned char)112;
int zero = 0;
unsigned short var_16 = (unsigned short)61365;
signed char var_17 = (signed char)35;
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
