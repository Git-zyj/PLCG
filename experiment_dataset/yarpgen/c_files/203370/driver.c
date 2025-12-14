#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)22801;
unsigned long long int var_6 = 18221873103773007410ULL;
short var_10 = (short)14505;
signed char var_11 = (signed char)3;
int zero = 0;
short var_14 = (short)19771;
unsigned int var_15 = 75401258U;
unsigned int var_16 = 2683811286U;
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
