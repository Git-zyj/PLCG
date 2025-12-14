#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 4282779202U;
_Bool var_5 = (_Bool)0;
unsigned char var_8 = (unsigned char)91;
int zero = 0;
unsigned short var_14 = (unsigned short)19707;
short var_15 = (short)-30466;
unsigned char var_16 = (unsigned char)126;
void init() {
}

void checksum() {
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
