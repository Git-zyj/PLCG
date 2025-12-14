#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
_Bool var_3 = (_Bool)0;
unsigned int var_6 = 1992865176U;
long long int var_8 = -6881094741480423529LL;
unsigned int var_9 = 1120711771U;
unsigned int var_10 = 1825757810U;
int zero = 0;
long long int var_12 = -6219071530277739653LL;
unsigned int var_13 = 2432583795U;
long long int var_14 = -4286679539182252566LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
