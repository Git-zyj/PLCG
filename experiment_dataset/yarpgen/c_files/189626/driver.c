#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)48330;
unsigned short var_4 = (unsigned short)26256;
unsigned int var_5 = 1767895678U;
short var_6 = (short)-18745;
unsigned short var_7 = (unsigned short)14267;
signed char var_8 = (signed char)-76;
unsigned char var_9 = (unsigned char)162;
int zero = 0;
unsigned short var_12 = (unsigned short)65105;
long long int var_13 = -6330193898697549297LL;
signed char var_14 = (signed char)95;
unsigned short var_15 = (unsigned short)7740;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
