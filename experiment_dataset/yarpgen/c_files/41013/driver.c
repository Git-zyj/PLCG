#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -572104874;
unsigned long long int var_2 = 11917883170071036008ULL;
_Bool var_10 = (_Bool)0;
int zero = 0;
short var_18 = (short)17953;
int var_19 = -808550310;
short var_20 = (short)-28923;
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
