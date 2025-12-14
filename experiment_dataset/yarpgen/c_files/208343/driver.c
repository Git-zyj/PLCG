#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
short var_5 = (short)-6545;
int var_9 = 1551834744;
unsigned char var_11 = (unsigned char)75;
long long int var_16 = -4809486214866236516LL;
int zero = 0;
int var_17 = 1837394007;
short var_18 = (short)9410;
void init() {
}

void checksum() {
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
