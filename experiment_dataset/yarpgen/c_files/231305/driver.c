#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)28093;
short var_1 = (short)29065;
unsigned char var_3 = (unsigned char)167;
short var_4 = (short)12078;
unsigned short var_6 = (unsigned short)40528;
unsigned int var_9 = 284210100U;
short var_11 = (short)-14182;
int zero = 0;
int var_13 = 976125951;
unsigned long long int var_14 = 996104686499051692ULL;
int var_15 = -2059806188;
unsigned char var_16 = (unsigned char)191;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
