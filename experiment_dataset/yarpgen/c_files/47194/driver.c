#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-88;
unsigned int var_10 = 542801653U;
unsigned short var_11 = (unsigned short)28283;
unsigned char var_14 = (unsigned char)230;
int zero = 0;
unsigned short var_16 = (unsigned short)65502;
unsigned short var_17 = (unsigned short)39797;
unsigned short var_18 = (unsigned short)51635;
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
