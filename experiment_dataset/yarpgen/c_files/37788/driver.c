#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-19465;
unsigned char var_6 = (unsigned char)216;
unsigned int var_13 = 2984789685U;
short var_14 = (short)-7227;
int zero = 0;
unsigned char var_20 = (unsigned char)62;
short var_21 = (short)10926;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
