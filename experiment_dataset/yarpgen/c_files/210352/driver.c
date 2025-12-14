#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)13703;
unsigned int var_10 = 3470590831U;
int var_11 = 333101008;
short var_16 = (short)31814;
int zero = 0;
unsigned char var_17 = (unsigned char)12;
long long int var_18 = -5202731789230209728LL;
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
