#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 494278800;
short var_4 = (short)29011;
unsigned char var_8 = (unsigned char)95;
int var_10 = 1390565301;
unsigned int var_12 = 2601255741U;
unsigned int var_13 = 2565848735U;
int zero = 0;
short var_15 = (short)-20381;
unsigned short var_16 = (unsigned short)18545;
void init() {
}

void checksum() {
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
