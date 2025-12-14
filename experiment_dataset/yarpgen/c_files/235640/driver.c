#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)17803;
unsigned short var_2 = (unsigned short)8590;
unsigned char var_3 = (unsigned char)100;
unsigned char var_9 = (unsigned char)9;
unsigned char var_10 = (unsigned char)220;
unsigned short var_13 = (unsigned short)46789;
unsigned short var_15 = (unsigned short)62664;
int zero = 0;
unsigned short var_16 = (unsigned short)17067;
unsigned char var_17 = (unsigned char)133;
unsigned char var_18 = (unsigned char)12;
unsigned short var_19 = (unsigned short)20973;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
