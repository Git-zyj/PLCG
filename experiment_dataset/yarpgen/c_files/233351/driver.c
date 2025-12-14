#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-15464;
_Bool var_4 = (_Bool)0;
_Bool var_7 = (_Bool)0;
int zero = 0;
unsigned short var_12 = (unsigned short)11200;
unsigned short var_13 = (unsigned short)29762;
unsigned short var_14 = (unsigned short)52764;
_Bool var_15 = (_Bool)0;
unsigned char var_16 = (unsigned char)182;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
