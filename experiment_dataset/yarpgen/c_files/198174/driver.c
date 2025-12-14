#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)36;
unsigned char var_4 = (unsigned char)72;
short var_5 = (short)-13031;
short var_7 = (short)-23419;
unsigned char var_8 = (unsigned char)63;
unsigned char var_9 = (unsigned char)189;
long long int var_11 = -7689093381245613663LL;
int zero = 0;
unsigned char var_13 = (unsigned char)227;
long long int var_14 = -1158344494094487428LL;
void init() {
}

void checksum() {
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
