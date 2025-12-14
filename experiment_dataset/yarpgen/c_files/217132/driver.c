#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16363589771852778290ULL;
_Bool var_4 = (_Bool)0;
unsigned int var_6 = 3735362585U;
unsigned int var_9 = 4011043042U;
unsigned int var_10 = 3897277077U;
int zero = 0;
unsigned int var_15 = 3770340362U;
_Bool var_16 = (_Bool)1;
unsigned int var_17 = 3307396220U;
unsigned int var_18 = 1415351888U;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
