#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = 374755486;
long long int var_9 = 856325778227936429LL;
int zero = 0;
int var_14 = -1181445284;
unsigned int var_15 = 3700412029U;
unsigned short var_16 = (unsigned short)36419;
unsigned char var_17 = (unsigned char)167;
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
