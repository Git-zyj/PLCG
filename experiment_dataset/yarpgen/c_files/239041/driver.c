#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)165;
unsigned char var_8 = (unsigned char)101;
long long int var_9 = 678181653740906527LL;
int zero = 0;
short var_11 = (short)14504;
unsigned short var_12 = (unsigned short)45462;
unsigned char var_13 = (unsigned char)9;
unsigned char var_14 = (unsigned char)215;
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
