#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7263605316227233794LL;
unsigned int var_1 = 1509495824U;
_Bool var_2 = (_Bool)0;
short var_4 = (short)20769;
short var_5 = (short)-13332;
short var_7 = (short)12777;
unsigned long long int var_8 = 3120136886001707600ULL;
unsigned long long int var_10 = 491046176828876832ULL;
unsigned int var_11 = 1079733785U;
long long int var_12 = -5701586897359593577LL;
int zero = 0;
unsigned int var_13 = 2706588882U;
_Bool var_14 = (_Bool)0;
unsigned int var_15 = 2237136905U;
long long int var_16 = 8179746542886951251LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
