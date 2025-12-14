#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-14730;
_Bool var_3 = (_Bool)0;
_Bool var_5 = (_Bool)1;
unsigned int var_7 = 2566854131U;
_Bool var_8 = (_Bool)0;
long long int var_10 = 1320828889308756557LL;
int zero = 0;
unsigned short var_12 = (unsigned short)32153;
_Bool var_13 = (_Bool)0;
unsigned long long int var_14 = 8727115562440575190ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
