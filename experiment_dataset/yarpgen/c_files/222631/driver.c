#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)2906;
unsigned int var_5 = 759749983U;
unsigned char var_6 = (unsigned char)26;
unsigned char var_8 = (unsigned char)35;
unsigned short var_10 = (unsigned short)33670;
int zero = 0;
signed char var_13 = (signed char)83;
short var_14 = (short)-6237;
short var_15 = (short)7084;
signed char var_16 = (signed char)37;
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
