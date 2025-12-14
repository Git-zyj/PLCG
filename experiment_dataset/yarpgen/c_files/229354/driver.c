#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-63;
unsigned short var_1 = (unsigned short)23125;
unsigned char var_7 = (unsigned char)64;
int var_8 = 1374412666;
unsigned int var_12 = 2452912539U;
long long int var_13 = -2881029982378025286LL;
signed char var_15 = (signed char)73;
int zero = 0;
unsigned int var_16 = 68354127U;
short var_17 = (short)-3970;
short var_18 = (short)-20192;
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
