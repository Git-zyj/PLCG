#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-6454;
_Bool var_3 = (_Bool)1;
unsigned long long int var_4 = 11473388561392104189ULL;
long long int var_7 = 8730921035648892236LL;
int var_10 = 1644331245;
int zero = 0;
unsigned long long int var_12 = 15191275055962800907ULL;
signed char var_13 = (signed char)98;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
