#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 579559545U;
unsigned long long int var_1 = 10213718351132228565ULL;
int var_9 = -267197506;
unsigned int var_10 = 2071533322U;
unsigned short var_12 = (unsigned short)15775;
int zero = 0;
int var_17 = 1275927763;
unsigned int var_18 = 1446712498U;
unsigned int var_19 = 3997337246U;
_Bool var_20 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
