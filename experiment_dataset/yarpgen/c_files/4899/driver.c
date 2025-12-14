#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
_Bool var_5 = (_Bool)0;
unsigned short var_9 = (unsigned short)48054;
unsigned short var_11 = (unsigned short)39329;
int zero = 0;
long long int var_14 = -2545509431962032400LL;
short var_15 = (short)-5633;
unsigned int var_16 = 2317301323U;
unsigned int var_17 = 1495787436U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
