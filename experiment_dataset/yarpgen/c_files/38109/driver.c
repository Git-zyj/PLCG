#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
unsigned int var_9 = 1550972533U;
int zero = 0;
unsigned char var_13 = (unsigned char)200;
_Bool var_14 = (_Bool)0;
long long int var_15 = -1071588927525168262LL;
unsigned long long int var_16 = 17105595039579009367ULL;
unsigned long long int var_17 = 1467862815876494597ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
