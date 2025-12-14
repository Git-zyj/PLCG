#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-20421;
unsigned int var_4 = 3536486924U;
unsigned short var_11 = (unsigned short)31466;
short var_12 = (short)32403;
unsigned int var_13 = 1425303160U;
int zero = 0;
unsigned short var_15 = (unsigned short)37193;
unsigned int var_16 = 1949544426U;
long long int var_17 = -5309611219090075340LL;
unsigned long long int var_18 = 9871643502673048006ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
