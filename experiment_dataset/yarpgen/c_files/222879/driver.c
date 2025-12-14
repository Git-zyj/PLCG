#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned int var_3 = 1783988531U;
_Bool var_4 = (_Bool)0;
unsigned int var_5 = 938587997U;
_Bool var_7 = (_Bool)0;
unsigned int var_9 = 736449891U;
_Bool var_13 = (_Bool)0;
_Bool var_15 = (_Bool)1;
int zero = 0;
_Bool var_16 = (_Bool)0;
_Bool var_17 = (_Bool)0;
unsigned int var_18 = 4223119761U;
unsigned int var_19 = 2859529857U;
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
