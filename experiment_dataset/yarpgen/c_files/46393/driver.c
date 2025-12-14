#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1014091485593349832ULL;
unsigned short var_2 = (unsigned short)55595;
signed char var_4 = (signed char)-31;
int var_5 = -893420978;
int zero = 0;
long long int var_15 = -165116682112958808LL;
short var_16 = (short)-18682;
void init() {
}

void checksum() {
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
