#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2108039194U;
unsigned int var_1 = 1417262225U;
unsigned char var_4 = (unsigned char)150;
unsigned char var_6 = (unsigned char)186;
unsigned long long int var_7 = 14403495939662873801ULL;
short var_11 = (short)7055;
int var_13 = -2039891625;
int zero = 0;
unsigned int var_14 = 2273999706U;
unsigned char var_15 = (unsigned char)100;
signed char var_16 = (signed char)48;
unsigned char var_17 = (unsigned char)67;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
