#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned char var_2 = (unsigned char)209;
short var_3 = (short)-6560;
unsigned char var_6 = (unsigned char)53;
_Bool var_7 = (_Bool)1;
unsigned char var_8 = (unsigned char)253;
int zero = 0;
unsigned char var_11 = (unsigned char)252;
short var_12 = (short)-8307;
unsigned char var_13 = (unsigned char)205;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
