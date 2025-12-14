#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3306602950552757903ULL;
unsigned short var_4 = (unsigned short)32559;
unsigned char var_9 = (unsigned char)14;
short var_11 = (short)20745;
short var_13 = (short)16901;
int zero = 0;
short var_14 = (short)13454;
unsigned int var_15 = 3060184900U;
int var_16 = 259249833;
short var_17 = (short)24787;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
