#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = -749021814;
_Bool var_8 = (_Bool)0;
unsigned char var_9 = (unsigned char)132;
signed char var_12 = (signed char)33;
int var_16 = -948210661;
int zero = 0;
_Bool var_18 = (_Bool)0;
unsigned int var_19 = 919642790U;
short var_20 = (short)26547;
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
