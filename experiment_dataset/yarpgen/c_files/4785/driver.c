#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -144262805;
short var_3 = (short)24884;
unsigned short var_6 = (unsigned short)11359;
unsigned int var_8 = 4044160678U;
unsigned int var_12 = 3784588337U;
unsigned short var_14 = (unsigned short)28948;
unsigned char var_18 = (unsigned char)251;
int zero = 0;
signed char var_20 = (signed char)16;
long long int var_21 = -5765532713974933529LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
