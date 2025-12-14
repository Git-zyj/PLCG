#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)8265;
_Bool var_7 = (_Bool)1;
int var_8 = -890700477;
unsigned int var_9 = 2657491540U;
int zero = 0;
int var_10 = 1238466584;
unsigned short var_11 = (unsigned short)22815;
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
