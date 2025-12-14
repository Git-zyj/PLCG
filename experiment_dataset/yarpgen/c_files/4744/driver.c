#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1411497009;
short var_2 = (short)-7086;
unsigned short var_7 = (unsigned short)88;
unsigned long long int var_8 = 13802670266752080402ULL;
int zero = 0;
unsigned char var_10 = (unsigned char)134;
short var_11 = (short)-8966;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
