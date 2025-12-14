#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)15;
unsigned char var_4 = (unsigned char)63;
signed char var_5 = (signed char)-87;
unsigned char var_6 = (unsigned char)230;
short var_8 = (short)-20523;
unsigned char var_9 = (unsigned char)226;
short var_10 = (short)10851;
unsigned char var_11 = (unsigned char)120;
short var_12 = (short)-6623;
int zero = 0;
unsigned char var_13 = (unsigned char)99;
unsigned short var_14 = (unsigned short)26836;
short var_15 = (short)-21523;
unsigned char var_16 = (unsigned char)108;
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
