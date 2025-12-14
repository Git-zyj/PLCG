#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned short var_9 = (unsigned short)49614;
unsigned int var_10 = 343041313U;
int zero = 0;
unsigned short var_13 = (unsigned short)30056;
unsigned short var_14 = (unsigned short)40884;
unsigned short var_15 = (unsigned short)18468;
unsigned int var_16 = 1388449163U;
unsigned short var_17 = (unsigned short)24784;
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
