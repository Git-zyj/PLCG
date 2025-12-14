#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)29721;
short var_3 = (short)10241;
short var_4 = (short)13903;
unsigned char var_5 = (unsigned char)235;
unsigned char var_6 = (unsigned char)200;
short var_8 = (short)-17901;
unsigned int var_9 = 1280474216U;
int var_10 = -215234587;
int zero = 0;
short var_11 = (short)-15990;
long long int var_12 = -6259658665670949596LL;
int var_13 = 1218609943;
unsigned char var_14 = (unsigned char)139;
void init() {
}

void checksum() {
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
