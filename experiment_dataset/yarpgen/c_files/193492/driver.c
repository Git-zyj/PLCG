#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)35513;
long long int var_3 = 5396405716231257684LL;
unsigned char var_6 = (unsigned char)83;
unsigned short var_7 = (unsigned short)33474;
_Bool var_13 = (_Bool)0;
int zero = 0;
long long int var_15 = -5837150515734987066LL;
unsigned short var_16 = (unsigned short)10472;
unsigned short var_17 = (unsigned short)8741;
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
