#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
_Bool var_4 = (_Bool)0;
signed char var_6 = (signed char)-26;
int var_7 = 1339374345;
unsigned short var_11 = (unsigned short)26434;
unsigned char var_12 = (unsigned char)130;
unsigned char var_13 = (unsigned char)44;
int zero = 0;
int var_14 = -344706568;
unsigned int var_15 = 1847506014U;
unsigned short var_16 = (unsigned short)46759;
unsigned int var_17 = 1089897466U;
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
