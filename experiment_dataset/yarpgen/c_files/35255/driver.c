#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)52572;
unsigned char var_1 = (unsigned char)233;
unsigned int var_3 = 154420074U;
unsigned int var_4 = 4058381592U;
int var_5 = -1524537659;
int var_6 = -1467012014;
unsigned long long int var_10 = 3077302441570027601ULL;
long long int var_11 = 1501571779168497108LL;
int zero = 0;
int var_12 = -1212179817;
int var_13 = 1436107473;
unsigned short var_14 = (unsigned short)42267;
unsigned int var_15 = 1162095079U;
long long int var_16 = 2012340056765344023LL;
unsigned int var_17 = 4288947396U;
unsigned short var_18 = (unsigned short)17145;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
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
