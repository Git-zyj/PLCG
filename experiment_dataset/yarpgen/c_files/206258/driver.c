#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 2727867100U;
long long int var_6 = -1553106477620029087LL;
unsigned int var_8 = 3684812145U;
unsigned char var_13 = (unsigned char)14;
int zero = 0;
short var_17 = (short)2643;
signed char var_18 = (signed char)56;
void init() {
}

void checksum() {
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
