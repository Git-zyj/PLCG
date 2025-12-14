#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17800754013408827614ULL;
_Bool var_2 = (_Bool)0;
short var_14 = (short)-22964;
int zero = 0;
long long int var_19 = 4497941698934967807LL;
long long int var_20 = 425569591005452407LL;
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
