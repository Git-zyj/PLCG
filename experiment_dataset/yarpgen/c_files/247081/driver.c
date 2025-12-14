#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4150766535U;
long long int var_1 = 8458829854457374460LL;
short var_6 = (short)-31185;
long long int var_7 = 6300861426926876158LL;
unsigned int var_12 = 3546318187U;
int zero = 0;
unsigned long long int var_16 = 12557883052191299682ULL;
_Bool var_17 = (_Bool)1;
unsigned short var_18 = (unsigned short)29896;
int var_19 = 578410923;
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
