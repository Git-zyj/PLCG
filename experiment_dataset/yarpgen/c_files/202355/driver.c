#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 1905658546U;
unsigned int var_6 = 1961366802U;
unsigned char var_8 = (unsigned char)242;
short var_13 = (short)12302;
int zero = 0;
unsigned long long int var_16 = 11751998619986471086ULL;
signed char var_17 = (signed char)52;
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
