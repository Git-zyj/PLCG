#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_1 = 3211010010U;
int var_3 = -1879035200;
signed char var_4 = (signed char)58;
long long int var_5 = -4723483715528429652LL;
short var_14 = (short)-18998;
int zero = 0;
unsigned int var_15 = 2521263072U;
long long int var_16 = -8198016951454610717LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
