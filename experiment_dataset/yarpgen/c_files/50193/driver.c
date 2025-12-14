#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 7970690271373695257LL;
long long int var_9 = -2608921850576689719LL;
int var_10 = -777056855;
short var_13 = (short)30207;
unsigned char var_14 = (unsigned char)37;
unsigned long long int var_15 = 18205945211748126852ULL;
int zero = 0;
unsigned char var_19 = (unsigned char)31;
signed char var_20 = (signed char)86;
unsigned long long int var_21 = 8503347827289801783ULL;
void init() {
}

void checksum() {
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
