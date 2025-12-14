#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1541567161U;
unsigned long long int var_2 = 6568840282355585593ULL;
unsigned char var_4 = (unsigned char)32;
short var_5 = (short)-3215;
unsigned short var_13 = (unsigned short)55892;
int zero = 0;
short var_16 = (short)5386;
unsigned int var_17 = 2914732175U;
int var_18 = 34999764;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
