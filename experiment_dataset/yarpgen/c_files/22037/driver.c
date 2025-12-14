#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1512628268U;
short var_1 = (short)-30823;
_Bool var_4 = (_Bool)0;
unsigned char var_5 = (unsigned char)95;
_Bool var_6 = (_Bool)0;
int zero = 0;
unsigned char var_15 = (unsigned char)219;
unsigned int var_16 = 1499108243U;
unsigned short var_17 = (unsigned short)50792;
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
