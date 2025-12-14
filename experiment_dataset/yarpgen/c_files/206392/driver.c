#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10613055176635694405ULL;
int var_4 = 1061283788;
int zero = 0;
unsigned int var_15 = 1148016059U;
long long int var_16 = -761415832723721303LL;
_Bool var_17 = (_Bool)1;
unsigned int var_18 = 3213448267U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
