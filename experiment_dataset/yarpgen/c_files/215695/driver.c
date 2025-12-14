#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)20541;
signed char var_10 = (signed char)-31;
_Bool var_14 = (_Bool)0;
int zero = 0;
long long int var_15 = 3269309729264022629LL;
unsigned short var_16 = (unsigned short)60475;
unsigned long long int var_17 = 14640427886509243012ULL;
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
