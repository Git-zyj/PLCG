#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned short var_4 = (unsigned short)36329;
unsigned int var_6 = 3609132882U;
unsigned int var_7 = 1127794757U;
unsigned int var_8 = 1847297205U;
unsigned short var_9 = (unsigned short)16956;
int zero = 0;
unsigned short var_15 = (unsigned short)32519;
unsigned short var_16 = (unsigned short)59763;
_Bool var_17 = (_Bool)1;
void init() {
}

void checksum() {
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
