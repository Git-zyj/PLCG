#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 11345214086931404278ULL;
signed char var_10 = (signed char)114;
int zero = 0;
long long int var_18 = -2775621689340369362LL;
unsigned long long int var_19 = 3119499290623584002ULL;
int var_20 = -1574844772;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
