#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-26052;
int var_6 = 1498540450;
unsigned char var_8 = (unsigned char)76;
int zero = 0;
long long int var_12 = -6954334609367481279LL;
short var_13 = (short)-15233;
unsigned short var_14 = (unsigned short)23719;
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
