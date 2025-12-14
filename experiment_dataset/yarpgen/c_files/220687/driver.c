#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)217;
short var_2 = (short)31187;
unsigned char var_3 = (unsigned char)235;
short var_4 = (short)-6891;
unsigned char var_7 = (unsigned char)199;
unsigned char var_9 = (unsigned char)132;
unsigned char var_10 = (unsigned char)74;
short var_13 = (short)11840;
int zero = 0;
unsigned char var_14 = (unsigned char)30;
short var_15 = (short)-24683;
short var_16 = (short)-18209;
unsigned char var_17 = (unsigned char)65;
void init() {
}

void checksum() {
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
