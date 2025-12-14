#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -261754401;
short var_2 = (short)2854;
unsigned char var_3 = (unsigned char)74;
int zero = 0;
unsigned long long int var_12 = 11455591047127351851ULL;
short var_13 = (short)3035;
unsigned short var_14 = (unsigned short)19156;
unsigned short var_15 = (unsigned short)11156;
int var_16 = 1587035271;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
