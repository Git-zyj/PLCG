#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5550225805250262740ULL;
short var_6 = (short)32309;
_Bool var_8 = (_Bool)0;
int zero = 0;
unsigned long long int var_20 = 16290421962212638117ULL;
long long int var_21 = 6061316623133861534LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
