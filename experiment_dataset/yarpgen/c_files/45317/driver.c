#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)8869;
short var_6 = (short)-26427;
short var_7 = (short)50;
short var_10 = (short)28317;
unsigned char var_12 = (unsigned char)242;
unsigned char var_13 = (unsigned char)131;
unsigned short var_15 = (unsigned short)10725;
unsigned char var_17 = (unsigned char)27;
int zero = 0;
unsigned short var_18 = (unsigned short)29071;
unsigned char var_19 = (unsigned char)4;
unsigned short var_20 = (unsigned short)4116;
unsigned short var_21 = (unsigned short)40058;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
