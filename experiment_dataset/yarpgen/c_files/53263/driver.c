#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3583956017145877960LL;
long long int var_1 = 2844036946399434739LL;
_Bool var_5 = (_Bool)0;
_Bool var_10 = (_Bool)1;
int zero = 0;
_Bool var_17 = (_Bool)0;
unsigned int var_18 = 3945626548U;
unsigned int var_19 = 2034013028U;
long long int var_20 = -3333610206887092032LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
