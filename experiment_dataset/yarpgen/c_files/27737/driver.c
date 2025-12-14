#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 13328110759627408302ULL;
unsigned short var_4 = (unsigned short)58870;
_Bool var_6 = (_Bool)0;
int var_12 = 1578894681;
long long int var_15 = 2506833764684227369LL;
unsigned int var_16 = 2525648362U;
unsigned long long int var_17 = 18266016289159472767ULL;
signed char var_18 = (signed char)67;
int zero = 0;
unsigned long long int var_20 = 7971897741752453969ULL;
unsigned int var_21 = 1176022236U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
