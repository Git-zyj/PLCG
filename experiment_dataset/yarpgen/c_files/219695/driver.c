#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)143;
unsigned short var_8 = (unsigned short)9858;
unsigned int var_16 = 530607636U;
int zero = 0;
unsigned int var_19 = 219134787U;
unsigned char var_20 = (unsigned char)69;
short var_21 = (short)24065;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
