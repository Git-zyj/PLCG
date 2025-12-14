#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
long long int var_5 = 861796232312184617LL;
signed char var_8 = (signed char)64;
int var_9 = 1678025475;
unsigned int var_10 = 60952923U;
int var_11 = -1077659387;
long long int var_12 = -2277479350528486763LL;
int zero = 0;
unsigned char var_13 = (unsigned char)101;
_Bool var_14 = (_Bool)1;
int var_15 = -1942755588;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
