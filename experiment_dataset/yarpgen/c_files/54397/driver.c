#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 13380050271223743998ULL;
unsigned int var_5 = 3820134367U;
signed char var_6 = (signed char)64;
unsigned short var_9 = (unsigned short)21113;
long long int var_12 = -1619726257731841402LL;
unsigned int var_13 = 2690861907U;
long long int var_15 = -4633994920816546988LL;
int zero = 0;
signed char var_17 = (signed char)58;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
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
