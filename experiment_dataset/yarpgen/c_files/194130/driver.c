#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 5124337715504552253LL;
short var_2 = (short)-24624;
unsigned char var_10 = (unsigned char)243;
short var_11 = (short)-28320;
int zero = 0;
unsigned char var_12 = (unsigned char)253;
unsigned int var_13 = 3156088889U;
void init() {
}

void checksum() {
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
