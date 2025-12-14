#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 7895314256845534707LL;
unsigned char var_6 = (unsigned char)18;
short var_7 = (short)-14450;
signed char var_8 = (signed char)-88;
unsigned int var_10 = 3195453181U;
unsigned short var_11 = (unsigned short)56623;
int zero = 0;
int var_12 = -2043977646;
unsigned short var_13 = (unsigned short)49208;
int var_14 = -1538899642;
void init() {
}

void checksum() {
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
