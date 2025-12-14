#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1596509627;
unsigned short var_5 = (unsigned short)47257;
unsigned char var_7 = (unsigned char)182;
unsigned char var_8 = (unsigned char)91;
int var_9 = -511969474;
short var_10 = (short)-21100;
unsigned int var_11 = 122156998U;
unsigned short var_12 = (unsigned short)21377;
int zero = 0;
unsigned char var_14 = (unsigned char)237;
unsigned char var_15 = (unsigned char)189;
unsigned int var_16 = 1860905865U;
void init() {
}

void checksum() {
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
