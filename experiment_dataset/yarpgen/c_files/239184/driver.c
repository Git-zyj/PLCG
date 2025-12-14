#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)38782;
signed char var_5 = (signed char)32;
unsigned short var_10 = (unsigned short)5612;
unsigned short var_11 = (unsigned short)1457;
unsigned char var_12 = (unsigned char)158;
int zero = 0;
short var_13 = (short)-2081;
_Bool var_14 = (_Bool)1;
unsigned short var_15 = (unsigned short)12111;
_Bool var_16 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
