#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)92;
unsigned long long int var_1 = 4014809985477141171ULL;
unsigned short var_3 = (unsigned short)53165;
short var_7 = (short)-19591;
int zero = 0;
int var_12 = -1211032674;
unsigned char var_13 = (unsigned char)223;
unsigned char var_14 = (unsigned char)165;
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
