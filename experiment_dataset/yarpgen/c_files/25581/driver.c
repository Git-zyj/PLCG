#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)22867;
unsigned char var_1 = (unsigned char)120;
unsigned char var_4 = (unsigned char)172;
unsigned int var_5 = 557923958U;
unsigned char var_6 = (unsigned char)96;
unsigned char var_7 = (unsigned char)219;
unsigned short var_12 = (unsigned short)18556;
unsigned char var_13 = (unsigned char)10;
int zero = 0;
unsigned int var_20 = 1710225774U;
unsigned char var_21 = (unsigned char)140;
unsigned short var_22 = (unsigned short)48854;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
