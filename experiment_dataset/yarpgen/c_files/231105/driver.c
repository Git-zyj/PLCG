#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)541;
short var_2 = (short)-10969;
unsigned long long int var_3 = 525979852047107648ULL;
unsigned short var_7 = (unsigned short)30637;
short var_8 = (short)-6178;
int zero = 0;
long long int var_11 = -7869176311643039453LL;
unsigned long long int var_12 = 14060566318412427775ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
