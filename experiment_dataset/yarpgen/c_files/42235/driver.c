#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 628756745U;
short var_9 = (short)-17955;
int var_11 = 411074573;
_Bool var_12 = (_Bool)0;
int zero = 0;
unsigned long long int var_17 = 11912531709725100409ULL;
long long int var_18 = 8703959117003039813LL;
short var_19 = (short)17188;
short var_20 = (short)4805;
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
