#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)124;
_Bool var_10 = (_Bool)0;
unsigned int var_12 = 2021952868U;
_Bool var_14 = (_Bool)1;
long long int var_15 = -5915849291607978562LL;
int var_16 = 1963735956;
int zero = 0;
_Bool var_17 = (_Bool)0;
short var_18 = (short)-21881;
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
