#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
signed char var_2 = (signed char)-39;
unsigned short var_4 = (unsigned short)37748;
unsigned char var_6 = (unsigned char)5;
_Bool var_8 = (_Bool)1;
_Bool var_11 = (_Bool)1;
_Bool var_12 = (_Bool)1;
short var_15 = (short)-9972;
int zero = 0;
unsigned char var_16 = (unsigned char)81;
signed char var_17 = (signed char)45;
unsigned short var_18 = (unsigned short)55095;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
