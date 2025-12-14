#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)155;
short var_4 = (short)19662;
unsigned short var_6 = (unsigned short)30786;
short var_8 = (short)19066;
unsigned char var_9 = (unsigned char)241;
unsigned long long int var_11 = 15412539377843038746ULL;
int zero = 0;
short var_13 = (short)10432;
unsigned short var_14 = (unsigned short)3255;
int var_15 = -1192940437;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
