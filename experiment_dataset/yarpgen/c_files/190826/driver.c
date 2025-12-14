#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_5 = (_Bool)0;
long long int var_6 = 5708838991360454871LL;
unsigned int var_9 = 3703335149U;
signed char var_10 = (signed char)-114;
unsigned char var_12 = (unsigned char)35;
int zero = 0;
_Bool var_14 = (_Bool)1;
signed char var_15 = (signed char)106;
_Bool var_16 = (_Bool)0;
unsigned int var_17 = 2150223134U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
