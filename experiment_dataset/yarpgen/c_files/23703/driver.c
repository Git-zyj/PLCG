#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)21535;
long long int var_8 = 1749434918493436050LL;
_Bool var_9 = (_Bool)0;
short var_10 = (short)-2432;
unsigned short var_12 = (unsigned short)45019;
unsigned char var_13 = (unsigned char)213;
int zero = 0;
unsigned short var_20 = (unsigned short)1355;
unsigned char var_21 = (unsigned char)154;
unsigned short var_22 = (unsigned short)171;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
