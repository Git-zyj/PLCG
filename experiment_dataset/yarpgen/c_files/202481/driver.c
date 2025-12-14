#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)48607;
unsigned short var_4 = (unsigned short)45564;
unsigned int var_7 = 2864861559U;
unsigned short var_9 = (unsigned short)22400;
unsigned char var_10 = (unsigned char)86;
unsigned int var_13 = 1812945263U;
unsigned int var_14 = 1091093665U;
int zero = 0;
unsigned short var_15 = (unsigned short)5542;
_Bool var_16 = (_Bool)0;
short var_17 = (short)-31579;
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
