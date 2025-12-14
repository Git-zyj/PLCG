#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned short var_4 = (unsigned short)46835;
unsigned char var_7 = (unsigned char)148;
short var_8 = (short)29532;
long long int var_13 = 485817641132722000LL;
int zero = 0;
unsigned int var_16 = 336637696U;
unsigned long long int var_17 = 4659444986494650900ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
