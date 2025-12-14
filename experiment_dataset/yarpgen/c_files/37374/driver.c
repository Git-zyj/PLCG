#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)59263;
int var_2 = -1370733943;
short var_4 = (short)19133;
int var_6 = 898362652;
unsigned char var_8 = (unsigned char)203;
unsigned char var_10 = (unsigned char)6;
int zero = 0;
signed char var_11 = (signed char)114;
unsigned char var_12 = (unsigned char)136;
unsigned char var_13 = (unsigned char)10;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
