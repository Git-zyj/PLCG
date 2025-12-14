#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1622778018U;
long long int var_2 = -1475600874100658313LL;
_Bool var_3 = (_Bool)1;
unsigned short var_8 = (unsigned short)51163;
long long int var_10 = -3482487979300415100LL;
int zero = 0;
int var_13 = -1201993687;
_Bool var_14 = (_Bool)0;
void init() {
}

void checksum() {
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
