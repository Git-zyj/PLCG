#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1273215341;
signed char var_5 = (signed char)-89;
long long int var_8 = -5049257735393347025LL;
int zero = 0;
long long int var_18 = 1642845088251722077LL;
int var_19 = -565109623;
signed char var_20 = (signed char)-32;
long long int var_21 = 8321506180465356558LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
