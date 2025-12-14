#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)9188;
unsigned short var_4 = (unsigned short)43509;
int var_6 = 825296523;
int var_10 = 1091462258;
int zero = 0;
unsigned char var_12 = (unsigned char)90;
long long int var_13 = -6355918742871605164LL;
int var_14 = -773051999;
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
