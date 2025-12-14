#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)40737;
long long int var_2 = -2727981879095964505LL;
unsigned char var_4 = (unsigned char)16;
signed char var_10 = (signed char)-15;
unsigned int var_11 = 405589078U;
long long int var_13 = -8367729484299603409LL;
int zero = 0;
long long int var_15 = 9116444753391514261LL;
unsigned char var_16 = (unsigned char)76;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
