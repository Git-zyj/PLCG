#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -1190529348060224754LL;
_Bool var_3 = (_Bool)1;
unsigned int var_6 = 1298479871U;
signed char var_10 = (signed char)46;
long long int var_12 = 8714773262208967413LL;
short var_15 = (short)-30354;
long long int var_16 = -7719131475297604367LL;
long long int var_17 = 1243258836673815182LL;
int var_18 = 1623663228;
int zero = 0;
short var_19 = (short)29529;
unsigned long long int var_20 = 1137577986756917153ULL;
short var_21 = (short)-22531;
unsigned int var_22 = 2711214460U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
