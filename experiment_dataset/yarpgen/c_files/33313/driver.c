#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)30;
unsigned int var_1 = 1531931331U;
unsigned char var_3 = (unsigned char)140;
unsigned char var_5 = (unsigned char)233;
unsigned char var_6 = (unsigned char)156;
unsigned int var_8 = 130282345U;
unsigned int var_9 = 92288758U;
unsigned char var_10 = (unsigned char)201;
unsigned char var_11 = (unsigned char)36;
unsigned char var_12 = (unsigned char)230;
int zero = 0;
unsigned int var_13 = 464077619U;
unsigned char var_14 = (unsigned char)231;
unsigned int var_15 = 2573031674U;
unsigned int var_16 = 1398552655U;
unsigned char var_17 = (unsigned char)130;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
