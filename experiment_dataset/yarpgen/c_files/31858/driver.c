#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
int var_2 = -775296256;
short var_7 = (short)-2199;
short var_9 = (short)-12115;
short var_10 = (short)1203;
int zero = 0;
signed char var_17 = (signed char)-2;
unsigned int var_18 = 1348495819U;
short var_19 = (short)-16843;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
