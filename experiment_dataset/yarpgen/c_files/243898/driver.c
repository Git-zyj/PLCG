#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17699366774851102151ULL;
short var_2 = (short)-28175;
_Bool var_3 = (_Bool)0;
unsigned short var_4 = (unsigned short)59702;
long long int var_5 = -8087473870868680418LL;
unsigned short var_6 = (unsigned short)29205;
signed char var_8 = (signed char)-99;
int var_11 = -1510811233;
unsigned char var_12 = (unsigned char)197;
long long int var_13 = -328839940305883791LL;
int zero = 0;
short var_14 = (short)26880;
unsigned char var_15 = (unsigned char)191;
long long int var_16 = -3480641692573027124LL;
unsigned char var_17 = (unsigned char)175;
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
