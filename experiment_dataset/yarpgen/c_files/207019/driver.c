#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1392290248;
int var_1 = 1318745704;
unsigned int var_2 = 620736336U;
unsigned char var_10 = (unsigned char)138;
int zero = 0;
int var_11 = 1962125078;
short var_12 = (short)-24789;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
