#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)31470;
long long int var_5 = -9143290354993115318LL;
short var_6 = (short)6062;
unsigned char var_7 = (unsigned char)206;
unsigned char var_10 = (unsigned char)179;
int zero = 0;
long long int var_11 = -7382413004068129221LL;
unsigned char var_12 = (unsigned char)53;
long long int var_13 = -7109581495020055300LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
