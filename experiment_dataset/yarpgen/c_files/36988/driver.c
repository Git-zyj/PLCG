#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
long long int var_5 = -4532917390991356403LL;
int var_7 = 1250173882;
signed char var_8 = (signed char)42;
long long int var_11 = 1361997548476669059LL;
_Bool var_13 = (_Bool)0;
int zero = 0;
long long int var_15 = -5102699049200718457LL;
unsigned int var_16 = 3746164988U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
