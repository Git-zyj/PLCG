#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 816255159U;
unsigned char var_4 = (unsigned char)36;
unsigned int var_7 = 48050214U;
int zero = 0;
unsigned long long int var_14 = 7328516339256236127ULL;
unsigned short var_15 = (unsigned short)55756;
short var_16 = (short)-29023;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
