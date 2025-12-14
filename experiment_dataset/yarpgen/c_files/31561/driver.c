#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6510143634079522372LL;
unsigned int var_1 = 2038325868U;
_Bool var_3 = (_Bool)1;
unsigned short var_4 = (unsigned short)30416;
long long int var_5 = -7341301129433054008LL;
long long int var_6 = -6807992148418499115LL;
long long int var_7 = -5776336662684135782LL;
int var_8 = -347326030;
unsigned char var_9 = (unsigned char)194;
long long int var_10 = -101504591755301611LL;
int zero = 0;
long long int var_13 = -3071177049326112141LL;
unsigned long long int var_14 = 16909995569930966036ULL;
signed char var_15 = (signed char)-7;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
