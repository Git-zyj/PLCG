#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
signed char var_9 = (signed char)-18;
_Bool var_10 = (_Bool)1;
unsigned int var_12 = 4026343921U;
_Bool var_15 = (_Bool)0;
int zero = 0;
unsigned long long int var_16 = 2279087937945445061ULL;
_Bool var_17 = (_Bool)1;
short var_18 = (short)10310;
void init() {
}

void checksum() {
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
