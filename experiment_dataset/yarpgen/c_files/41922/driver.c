#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-2771;
unsigned short var_3 = (unsigned short)23325;
long long int var_4 = 8136427479814873143LL;
unsigned short var_5 = (unsigned short)56994;
short var_8 = (short)23492;
unsigned short var_11 = (unsigned short)39656;
long long int var_14 = -353219281776419957LL;
short var_15 = (short)8979;
int zero = 0;
unsigned char var_16 = (unsigned char)141;
signed char var_17 = (signed char)33;
unsigned int var_18 = 1475480560U;
unsigned short var_19 = (unsigned short)35600;
unsigned char var_20 = (unsigned char)92;
long long int var_21 = 6103467911622344517LL;
unsigned char var_22 = (unsigned char)197;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
