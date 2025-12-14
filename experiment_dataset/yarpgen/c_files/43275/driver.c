#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)28473;
unsigned char var_5 = (unsigned char)212;
unsigned short var_7 = (unsigned short)22656;
unsigned char var_10 = (unsigned char)135;
unsigned short var_11 = (unsigned short)49305;
unsigned char var_13 = (unsigned char)58;
int zero = 0;
unsigned char var_14 = (unsigned char)213;
short var_15 = (short)-26903;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
