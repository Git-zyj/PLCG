#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_7 = 2526499236U;
unsigned int var_10 = 553283445U;
signed char var_12 = (signed char)-61;
unsigned char var_13 = (unsigned char)100;
int zero = 0;
unsigned long long int var_14 = 12616177080998581838ULL;
unsigned short var_15 = (unsigned short)598;
unsigned short var_16 = (unsigned short)4353;
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
