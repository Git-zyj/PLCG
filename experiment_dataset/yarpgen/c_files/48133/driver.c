#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)31233;
short var_3 = (short)-1265;
int var_4 = -1243535678;
unsigned short var_10 = (unsigned short)46129;
unsigned short var_11 = (unsigned short)50990;
int zero = 0;
unsigned char var_13 = (unsigned char)210;
signed char var_14 = (signed char)92;
int var_15 = -117300151;
unsigned char var_16 = (unsigned char)11;
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
