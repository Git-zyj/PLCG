#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)139;
unsigned short var_4 = (unsigned short)8450;
long long int var_14 = 6941167280771411397LL;
int var_15 = 137877030;
int zero = 0;
int var_17 = 841636470;
unsigned int var_18 = 1267433203U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
