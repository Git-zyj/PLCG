#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
short var_6 = (short)-14359;
short var_9 = (short)-13584;
unsigned int var_14 = 4030634537U;
int zero = 0;
int var_15 = 137620256;
unsigned char var_16 = (unsigned char)208;
short var_17 = (short)8533;
void init() {
}

void checksum() {
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
