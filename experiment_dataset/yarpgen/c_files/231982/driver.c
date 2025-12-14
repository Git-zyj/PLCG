#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_10 = -2437326085214494530LL;
unsigned short var_12 = (unsigned short)44265;
short var_14 = (short)17684;
int zero = 0;
unsigned int var_16 = 4094516285U;
_Bool var_17 = (_Bool)1;
short var_18 = (short)5447;
void init() {
}

void checksum() {
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
