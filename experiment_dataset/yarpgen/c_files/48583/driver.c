#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
int var_1 = 1780094296;
_Bool var_2 = (_Bool)0;
short var_3 = (short)-28926;
unsigned long long int var_4 = 4735868603829204901ULL;
short var_7 = (short)3841;
_Bool var_8 = (_Bool)1;
long long int var_9 = -8203388302746112083LL;
int zero = 0;
unsigned int var_10 = 3818673806U;
signed char var_11 = (signed char)108;
unsigned int var_12 = 133081617U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
