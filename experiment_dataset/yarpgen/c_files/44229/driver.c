#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 668983540239554224LL;
int var_8 = 1006940527;
short var_10 = (short)3861;
int zero = 0;
unsigned char var_12 = (unsigned char)159;
unsigned short var_13 = (unsigned short)35419;
unsigned char var_14 = (unsigned char)176;
void init() {
}

void checksum() {
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
