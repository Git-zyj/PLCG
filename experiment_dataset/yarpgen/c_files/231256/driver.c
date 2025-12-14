#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8223594542674204881LL;
unsigned int var_2 = 4204315992U;
unsigned long long int var_3 = 16631311342870494629ULL;
unsigned long long int var_6 = 11992537795403114345ULL;
unsigned short var_14 = (unsigned short)9568;
int var_16 = -2094774859;
unsigned long long int var_17 = 14788208334268558666ULL;
int zero = 0;
unsigned int var_19 = 3067849004U;
signed char var_20 = (signed char)-100;
void init() {
}

void checksum() {
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
