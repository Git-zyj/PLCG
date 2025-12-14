#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)224;
long long int var_7 = 7339202055783392528LL;
short var_8 = (short)28901;
unsigned char var_14 = (unsigned char)238;
int var_16 = 1652610141;
int zero = 0;
long long int var_17 = 993122081673699325LL;
unsigned char var_18 = (unsigned char)218;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
