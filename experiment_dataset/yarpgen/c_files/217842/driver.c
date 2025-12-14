#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)60735;
short var_2 = (short)1402;
int var_3 = -1214693897;
unsigned short var_4 = (unsigned short)1148;
int var_7 = 412906494;
int zero = 0;
unsigned char var_10 = (unsigned char)117;
unsigned char var_11 = (unsigned char)222;
unsigned short var_12 = (unsigned short)34653;
unsigned short var_13 = (unsigned short)42057;
unsigned short var_14 = (unsigned short)28980;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
