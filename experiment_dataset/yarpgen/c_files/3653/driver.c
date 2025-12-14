#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)108;
unsigned char var_1 = (unsigned char)83;
short var_2 = (short)-22981;
short var_8 = (short)18315;
unsigned char var_13 = (unsigned char)0;
unsigned short var_14 = (unsigned short)59135;
int zero = 0;
unsigned int var_19 = 3887177298U;
long long int var_20 = -4431194447902053369LL;
unsigned int var_21 = 3510668396U;
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
