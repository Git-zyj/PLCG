#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)25173;
unsigned int var_7 = 53773705U;
short var_8 = (short)-14344;
_Bool var_14 = (_Bool)1;
int zero = 0;
signed char var_18 = (signed char)-22;
short var_19 = (short)-15024;
int var_20 = 739570062;
unsigned short var_21 = (unsigned short)22327;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
