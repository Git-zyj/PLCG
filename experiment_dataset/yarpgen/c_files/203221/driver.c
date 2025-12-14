#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)45;
int var_1 = -734703154;
unsigned char var_4 = (unsigned char)125;
unsigned short var_10 = (unsigned short)49368;
short var_12 = (short)-15583;
int zero = 0;
int var_13 = -988286256;
unsigned char var_14 = (unsigned char)98;
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
