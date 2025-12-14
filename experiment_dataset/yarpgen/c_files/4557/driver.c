#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -544378213633895418LL;
_Bool var_7 = (_Bool)0;
short var_10 = (short)12596;
unsigned long long int var_14 = 16615564621826530843ULL;
short var_17 = (short)-9751;
long long int var_19 = 9018651434866438213LL;
int zero = 0;
unsigned long long int var_20 = 7406467513063239033ULL;
unsigned int var_21 = 630998902U;
void init() {
}

void checksum() {
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
