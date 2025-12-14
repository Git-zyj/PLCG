#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_6 = (_Bool)1;
signed char var_10 = (signed char)-46;
short var_14 = (short)7690;
unsigned char var_15 = (unsigned char)215;
short var_16 = (short)-11798;
signed char var_17 = (signed char)92;
int zero = 0;
unsigned int var_19 = 3332503228U;
unsigned char var_20 = (unsigned char)176;
long long int var_21 = -4301897308302532008LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
