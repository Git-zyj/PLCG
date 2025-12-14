#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)115;
unsigned int var_3 = 3502162618U;
unsigned short var_10 = (unsigned short)5229;
unsigned char var_13 = (unsigned char)56;
short var_14 = (short)-20169;
int zero = 0;
unsigned long long int var_15 = 2701080933865003636ULL;
unsigned char var_16 = (unsigned char)152;
short var_17 = (short)-20578;
void init() {
}

void checksum() {
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
