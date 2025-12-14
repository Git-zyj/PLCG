#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)0;
_Bool var_6 = (_Bool)0;
_Bool var_9 = (_Bool)1;
int var_10 = -988752959;
unsigned int var_11 = 655861842U;
unsigned int var_12 = 4141371905U;
_Bool var_13 = (_Bool)0;
int var_14 = 210176329;
int zero = 0;
unsigned long long int var_15 = 16658859892307032594ULL;
_Bool var_16 = (_Bool)0;
unsigned int var_17 = 366401916U;
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
