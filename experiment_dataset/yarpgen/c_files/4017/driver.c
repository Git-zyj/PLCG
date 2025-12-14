#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1915862346U;
unsigned int var_1 = 1953013396U;
unsigned int var_7 = 258712225U;
unsigned int var_9 = 4236059620U;
long long int var_13 = 2504438744137297485LL;
int zero = 0;
short var_14 = (short)6194;
int var_15 = 790856505;
long long int var_16 = -273816773970056710LL;
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
