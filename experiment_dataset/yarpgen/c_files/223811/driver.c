#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 1503678245U;
unsigned int var_9 = 3230245009U;
_Bool var_13 = (_Bool)0;
_Bool var_15 = (_Bool)0;
int zero = 0;
signed char var_18 = (signed char)19;
unsigned int var_19 = 3772898713U;
unsigned char var_20 = (unsigned char)59;
void init() {
}

void checksum() {
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
