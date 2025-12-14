#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1600121551;
long long int var_6 = -8773819591045670006LL;
short var_12 = (short)9778;
signed char var_13 = (signed char)107;
unsigned int var_17 = 2579927199U;
int zero = 0;
short var_18 = (short)21603;
int var_19 = 1956385026;
void init() {
}

void checksum() {
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
