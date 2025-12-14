#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)108;
unsigned long long int var_6 = 7297037330434320950ULL;
unsigned char var_8 = (unsigned char)175;
int zero = 0;
unsigned short var_11 = (unsigned short)34850;
int var_12 = 1438423132;
unsigned long long int var_13 = 2326916775809190024ULL;
short var_14 = (short)30133;
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
