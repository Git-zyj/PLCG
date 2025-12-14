#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1067809470;
unsigned char var_6 = (unsigned char)237;
unsigned int var_7 = 501930066U;
short var_9 = (short)-7210;
int zero = 0;
int var_10 = -610686006;
unsigned short var_11 = (unsigned short)64789;
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
