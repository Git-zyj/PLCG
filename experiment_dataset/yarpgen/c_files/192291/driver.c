#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)108;
unsigned short var_1 = (unsigned short)19206;
unsigned int var_2 = 2742897867U;
signed char var_10 = (signed char)-83;
short var_11 = (short)22615;
int zero = 0;
int var_15 = -2007950378;
signed char var_16 = (signed char)60;
long long int var_17 = -638014267219049709LL;
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
