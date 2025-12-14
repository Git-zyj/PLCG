#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)15243;
unsigned short var_4 = (unsigned short)40160;
int var_5 = -1955309235;
unsigned short var_7 = (unsigned short)39675;
unsigned char var_10 = (unsigned char)207;
unsigned char var_12 = (unsigned char)65;
int zero = 0;
unsigned char var_13 = (unsigned char)49;
unsigned short var_14 = (unsigned short)11883;
unsigned char var_15 = (unsigned char)228;
unsigned char var_16 = (unsigned char)238;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
