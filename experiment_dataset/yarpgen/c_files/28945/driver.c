#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned long long int var_6 = 16572372192301441343ULL;
long long int var_9 = 2877368620743503808LL;
int zero = 0;
unsigned short var_18 = (unsigned short)58193;
long long int var_19 = 828681241024666293LL;
unsigned long long int var_20 = 9683074810399488591ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
