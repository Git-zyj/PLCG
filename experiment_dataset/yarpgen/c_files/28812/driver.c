#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5208839996081068221LL;
unsigned short var_5 = (unsigned short)12976;
signed char var_7 = (signed char)-71;
int zero = 0;
unsigned char var_16 = (unsigned char)65;
short var_17 = (short)-16762;
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
