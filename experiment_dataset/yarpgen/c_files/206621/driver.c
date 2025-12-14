#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)120;
unsigned int var_10 = 3117688726U;
short var_11 = (short)-30892;
unsigned char var_15 = (unsigned char)231;
int zero = 0;
unsigned short var_16 = (unsigned short)52696;
unsigned short var_17 = (unsigned short)50350;
void init() {
}

void checksum() {
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
