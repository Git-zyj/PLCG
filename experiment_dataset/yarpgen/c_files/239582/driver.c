#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_5 = (_Bool)1;
int var_6 = 2102900286;
signed char var_9 = (signed char)23;
unsigned int var_12 = 464996336U;
signed char var_13 = (signed char)61;
unsigned char var_14 = (unsigned char)206;
short var_16 = (short)-22414;
int zero = 0;
unsigned long long int var_17 = 684808229394263235ULL;
long long int var_18 = 9149620564546250677LL;
short var_19 = (short)31982;
unsigned short var_20 = (unsigned short)13873;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
