#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)11483;
unsigned char var_2 = (unsigned char)133;
unsigned char var_3 = (unsigned char)89;
unsigned short var_4 = (unsigned short)51598;
long long int var_5 = 2380104303006291136LL;
long long int var_7 = -582598850276646429LL;
int var_10 = -711753004;
int zero = 0;
unsigned short var_12 = (unsigned short)44904;
int var_13 = -1395370719;
short var_14 = (short)-3647;
unsigned int var_15 = 3099504241U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
