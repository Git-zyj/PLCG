#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 4993122271997664268LL;
short var_2 = (short)5375;
unsigned int var_3 = 2017218406U;
int var_5 = 1654360179;
int var_6 = 910959795;
int var_7 = -1804585268;
unsigned char var_8 = (unsigned char)91;
unsigned char var_9 = (unsigned char)66;
int zero = 0;
unsigned short var_10 = (unsigned short)53120;
unsigned char var_11 = (unsigned char)225;
unsigned short var_12 = (unsigned short)33434;
short var_13 = (short)-20702;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
