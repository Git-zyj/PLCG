#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 906426353854082600LL;
unsigned char var_8 = (unsigned char)157;
unsigned char var_12 = (unsigned char)175;
int zero = 0;
short var_13 = (short)16180;
unsigned char var_14 = (unsigned char)191;
unsigned int var_15 = 445162081U;
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
