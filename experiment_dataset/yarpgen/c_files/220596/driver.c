#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-17780;
signed char var_4 = (signed char)93;
unsigned char var_5 = (unsigned char)124;
unsigned int var_7 = 2538618946U;
unsigned int var_11 = 1811335769U;
int var_13 = -670552025;
short var_14 = (short)-7636;
int zero = 0;
signed char var_15 = (signed char)12;
unsigned char var_16 = (unsigned char)176;
unsigned int var_17 = 3944611155U;
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
