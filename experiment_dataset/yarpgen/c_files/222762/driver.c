#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-32745;
short var_2 = (short)493;
short var_3 = (short)16649;
long long int var_13 = -4905090002981772131LL;
int zero = 0;
int var_15 = -918025702;
unsigned char var_16 = (unsigned char)189;
void init() {
}

void checksum() {
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
