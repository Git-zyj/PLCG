#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-28707;
unsigned short var_1 = (unsigned short)23435;
unsigned short var_3 = (unsigned short)63402;
int var_11 = 823091899;
unsigned short var_14 = (unsigned short)59382;
int zero = 0;
unsigned char var_15 = (unsigned char)182;
unsigned long long int var_16 = 330580242264960007ULL;
unsigned char var_17 = (unsigned char)137;
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
