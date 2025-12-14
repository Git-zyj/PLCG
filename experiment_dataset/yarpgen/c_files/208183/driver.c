#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)19571;
short var_2 = (short)7499;
unsigned char var_3 = (unsigned char)133;
unsigned int var_6 = 1815920203U;
int var_8 = -1066750861;
int zero = 0;
_Bool var_10 = (_Bool)1;
unsigned int var_11 = 1245737225U;
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
