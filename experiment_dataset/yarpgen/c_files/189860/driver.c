#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)248;
short var_5 = (short)-30652;
long long int var_14 = 6131879915850395631LL;
int zero = 0;
long long int var_16 = -4194553508549256370LL;
int var_17 = 355996046;
unsigned short var_18 = (unsigned short)16370;
long long int var_19 = -3247835765142831651LL;
unsigned char var_20 = (unsigned char)201;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
