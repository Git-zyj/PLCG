#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
unsigned int var_5 = 1595472593U;
long long int var_7 = -123587172122473503LL;
unsigned int var_13 = 57317045U;
signed char var_14 = (signed char)63;
int var_15 = 55942209;
int zero = 0;
signed char var_16 = (signed char)-82;
unsigned long long int var_17 = 5231411132034482549ULL;
_Bool var_18 = (_Bool)1;
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
