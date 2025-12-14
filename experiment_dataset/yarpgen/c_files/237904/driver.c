#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_6 = (_Bool)1;
unsigned int var_7 = 31039803U;
unsigned int var_8 = 1668076701U;
int zero = 0;
long long int var_15 = 897491433905868401LL;
long long int var_16 = -3255802246648779301LL;
short var_17 = (short)31222;
short var_18 = (short)28521;
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
