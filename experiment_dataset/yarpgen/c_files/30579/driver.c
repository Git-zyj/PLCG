#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)55298;
short var_3 = (short)-31535;
_Bool var_4 = (_Bool)0;
short var_5 = (short)10758;
signed char var_6 = (signed char)-82;
unsigned short var_8 = (unsigned short)22879;
int zero = 0;
unsigned int var_10 = 245204992U;
unsigned char var_11 = (unsigned char)8;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
