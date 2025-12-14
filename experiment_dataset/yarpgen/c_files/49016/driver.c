#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1377075597U;
unsigned short var_6 = (unsigned short)46171;
unsigned int var_9 = 3378295939U;
int zero = 0;
unsigned int var_15 = 1572675924U;
unsigned int var_16 = 787503197U;
_Bool var_17 = (_Bool)1;
int var_18 = 1532125941;
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
