#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5667757969459522638LL;
_Bool var_3 = (_Bool)1;
long long int var_4 = 894735652870959438LL;
long long int var_8 = 7867265388631692445LL;
_Bool var_13 = (_Bool)0;
_Bool var_15 = (_Bool)0;
int zero = 0;
unsigned char var_16 = (unsigned char)226;
unsigned short var_17 = (unsigned short)356;
unsigned long long int var_18 = 4206533458293868816ULL;
unsigned long long int var_19 = 8434774458052201458ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
