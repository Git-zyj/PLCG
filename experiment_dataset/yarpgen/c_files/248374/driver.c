#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-99;
int var_4 = -1561286182;
int var_7 = 387721780;
unsigned int var_15 = 172137389U;
int zero = 0;
unsigned int var_16 = 2788354737U;
signed char var_17 = (signed char)59;
unsigned int var_18 = 2192121928U;
unsigned long long int var_19 = 16542588803145016033ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
