#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = -834999919;
signed char var_9 = (signed char)29;
long long int var_10 = -3356302154267989229LL;
unsigned char var_13 = (unsigned char)144;
int var_14 = 254187236;
int var_17 = 975686506;
int zero = 0;
short var_18 = (short)-7731;
unsigned char var_19 = (unsigned char)70;
_Bool var_20 = (_Bool)0;
unsigned int var_21 = 1528828542U;
unsigned int var_22 = 2278136950U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
