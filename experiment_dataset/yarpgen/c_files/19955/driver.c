#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 14307905295951735063ULL;
int var_13 = 57744359;
unsigned int var_16 = 2572908591U;
int zero = 0;
long long int var_17 = -6493048514814122443LL;
short var_18 = (short)-12256;
int var_19 = -2079069608;
void init() {
}

void checksum() {
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
