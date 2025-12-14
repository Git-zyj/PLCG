#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)103;
unsigned short var_3 = (unsigned short)14818;
signed char var_4 = (signed char)(-127 - 1);
unsigned char var_8 = (unsigned char)147;
short var_10 = (short)23611;
long long int var_12 = 9008248660360948169LL;
short var_13 = (short)6016;
int zero = 0;
short var_15 = (short)18843;
short var_16 = (short)-23404;
int var_17 = -134787070;
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
