#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_8 = -7045111977585199600LL;
unsigned int var_14 = 2462663819U;
long long int var_15 = 1690195340246180663LL;
_Bool var_18 = (_Bool)0;
int zero = 0;
unsigned short var_19 = (unsigned short)38152;
unsigned int var_20 = 1454426589U;
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
