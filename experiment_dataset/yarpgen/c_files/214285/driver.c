#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-9514;
long long int var_4 = -1710626218367900599LL;
unsigned char var_5 = (unsigned char)21;
short var_7 = (short)13315;
unsigned char var_8 = (unsigned char)25;
unsigned short var_12 = (unsigned short)57580;
int zero = 0;
int var_18 = -1804283097;
unsigned char var_19 = (unsigned char)171;
unsigned int var_20 = 572043933U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
