#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 4060086039064107492ULL;
unsigned int var_3 = 3574109759U;
unsigned int var_7 = 1382985336U;
unsigned int var_10 = 3857578840U;
unsigned int var_13 = 3108788867U;
int zero = 0;
unsigned short var_14 = (unsigned short)23908;
unsigned int var_15 = 3921175263U;
int var_16 = 1880987181;
unsigned short var_17 = (unsigned short)45503;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
