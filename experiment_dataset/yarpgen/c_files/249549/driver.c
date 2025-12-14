#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)-20776;
short var_10 = (short)-299;
unsigned long long int var_12 = 5257943210959309490ULL;
signed char var_14 = (signed char)-99;
int zero = 0;
short var_15 = (short)18829;
short var_16 = (short)5391;
short var_17 = (short)3432;
short var_18 = (short)-15230;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
