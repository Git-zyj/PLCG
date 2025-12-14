#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)149;
short var_6 = (short)-17114;
long long int var_10 = 8191402835361764862LL;
unsigned int var_11 = 3838798145U;
int var_12 = -1868166769;
unsigned char var_13 = (unsigned char)166;
int zero = 0;
unsigned char var_16 = (unsigned char)37;
unsigned long long int var_17 = 906274434518096587ULL;
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
