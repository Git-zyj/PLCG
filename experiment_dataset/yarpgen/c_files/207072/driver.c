#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -1308206558725478326LL;
unsigned short var_9 = (unsigned short)45998;
unsigned short var_10 = (unsigned short)48549;
short var_12 = (short)-15575;
unsigned char var_16 = (unsigned char)10;
int zero = 0;
unsigned int var_17 = 1118003067U;
_Bool var_18 = (_Bool)1;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
