#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)1;
unsigned short var_5 = (unsigned short)51185;
_Bool var_15 = (_Bool)1;
unsigned long long int var_16 = 1457547513733919738ULL;
signed char var_18 = (signed char)79;
int zero = 0;
short var_20 = (short)29701;
long long int var_21 = 2232957397239709110LL;
unsigned int var_22 = 3614197424U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
