#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)125;
unsigned int var_5 = 2091576336U;
unsigned char var_7 = (unsigned char)173;
unsigned char var_9 = (unsigned char)120;
unsigned char var_12 = (unsigned char)244;
unsigned char var_14 = (unsigned char)191;
int zero = 0;
unsigned char var_18 = (unsigned char)203;
unsigned int var_19 = 68309573U;
int var_20 = -1688635938;
int var_21 = -1136214093;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
