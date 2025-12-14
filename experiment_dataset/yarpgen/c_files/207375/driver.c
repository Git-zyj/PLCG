#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_10 = (_Bool)1;
long long int var_13 = 884382423146289926LL;
unsigned short var_14 = (unsigned short)21548;
long long int var_17 = 2710128687990400763LL;
unsigned int var_18 = 3155882866U;
int zero = 0;
long long int var_19 = -2380758060576320835LL;
unsigned short var_20 = (unsigned short)56440;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
