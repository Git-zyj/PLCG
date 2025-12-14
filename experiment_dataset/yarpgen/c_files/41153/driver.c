#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)14;
unsigned short var_4 = (unsigned short)33568;
int var_12 = -1414260807;
int zero = 0;
int var_13 = -970664594;
unsigned short var_14 = (unsigned short)21400;
unsigned char var_15 = (unsigned char)101;
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
