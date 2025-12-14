#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 8690912765024276604LL;
unsigned short var_2 = (unsigned short)4914;
unsigned int var_3 = 132312681U;
unsigned short var_4 = (unsigned short)54802;
unsigned int var_5 = 1168363492U;
unsigned char var_6 = (unsigned char)73;
unsigned int var_8 = 2784444878U;
unsigned int var_9 = 3528184529U;
unsigned char var_11 = (unsigned char)7;
unsigned short var_15 = (unsigned short)24005;
int zero = 0;
unsigned char var_17 = (unsigned char)182;
short var_18 = (short)27965;
void init() {
}

void checksum() {
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
