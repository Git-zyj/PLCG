#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)31327;
unsigned short var_3 = (unsigned short)10069;
_Bool var_7 = (_Bool)1;
unsigned long long int var_9 = 2071971647209868363ULL;
int zero = 0;
unsigned int var_10 = 3238619132U;
unsigned char var_11 = (unsigned char)173;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
