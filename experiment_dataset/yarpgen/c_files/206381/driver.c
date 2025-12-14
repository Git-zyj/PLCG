#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
long long int var_9 = -8225775147034703674LL;
signed char var_10 = (signed char)7;
_Bool var_11 = (_Bool)0;
int var_12 = -117785552;
signed char var_14 = (signed char)21;
int zero = 0;
short var_15 = (short)22562;
short var_16 = (short)-25379;
signed char var_17 = (signed char)88;
unsigned int var_18 = 4078310984U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
