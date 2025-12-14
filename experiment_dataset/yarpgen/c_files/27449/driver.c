#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1092964025U;
unsigned int var_2 = 2070880106U;
unsigned short var_5 = (unsigned short)12454;
short var_7 = (short)23548;
unsigned short var_9 = (unsigned short)5562;
int zero = 0;
unsigned char var_12 = (unsigned char)202;
unsigned int var_13 = 498716590U;
int var_14 = -1405868596;
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
