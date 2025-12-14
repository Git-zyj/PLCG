#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)9759;
unsigned char var_4 = (unsigned char)42;
unsigned short var_7 = (unsigned short)45072;
unsigned char var_8 = (unsigned char)48;
signed char var_10 = (signed char)-103;
int zero = 0;
unsigned char var_13 = (unsigned char)149;
int var_14 = 1699215141;
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
