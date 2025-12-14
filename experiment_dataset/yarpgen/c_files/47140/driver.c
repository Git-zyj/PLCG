#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1363846570;
unsigned char var_2 = (unsigned char)251;
short var_3 = (short)-4519;
int var_4 = 1036495623;
short var_7 = (short)13223;
unsigned short var_8 = (unsigned short)63423;
unsigned int var_10 = 731210828U;
int zero = 0;
unsigned char var_11 = (unsigned char)21;
unsigned short var_12 = (unsigned short)62050;
short var_13 = (short)-11365;
void init() {
}

void checksum() {
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
