#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned char var_2 = (unsigned char)66;
unsigned long long int var_12 = 11875298662119238972ULL;
int zero = 0;
unsigned long long int var_15 = 17638894755489806621ULL;
signed char var_16 = (signed char)124;
long long int var_17 = -420588102478321167LL;
int var_18 = 1529935166;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
