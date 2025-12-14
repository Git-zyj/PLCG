#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 549593642U;
long long int var_7 = -8658217972098719658LL;
unsigned int var_8 = 964570265U;
unsigned int var_10 = 4272955658U;
unsigned int var_12 = 3835186770U;
int zero = 0;
long long int var_18 = 1870340977231326533LL;
long long int var_19 = 8239499039983818962LL;
unsigned int var_20 = 2139892434U;
long long int var_21 = -1358474614455770646LL;
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
