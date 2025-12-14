#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1452566246;
unsigned int var_6 = 1418977384U;
int var_10 = 283319670;
unsigned short var_11 = (unsigned short)15262;
int zero = 0;
short var_16 = (short)21386;
unsigned char var_17 = (unsigned char)143;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
