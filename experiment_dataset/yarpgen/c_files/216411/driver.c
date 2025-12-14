#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 4008113437U;
unsigned int var_2 = 3950516172U;
_Bool var_4 = (_Bool)1;
unsigned long long int var_8 = 12909933865845508114ULL;
unsigned int var_11 = 3512157171U;
long long int var_12 = -1434313821554694657LL;
int zero = 0;
unsigned int var_13 = 1662169353U;
short var_14 = (short)24309;
short var_15 = (short)9309;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
