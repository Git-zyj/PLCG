#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)29191;
unsigned char var_6 = (unsigned char)96;
signed char var_7 = (signed char)110;
unsigned char var_11 = (unsigned char)109;
unsigned char var_12 = (unsigned char)103;
signed char var_15 = (signed char)61;
int zero = 0;
unsigned char var_16 = (unsigned char)26;
short var_17 = (short)-18882;
short var_18 = (short)30804;
long long int var_19 = 1476581256106492726LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
