#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)15098;
unsigned short var_6 = (unsigned short)6434;
short var_7 = (short)-29660;
unsigned int var_11 = 3477512332U;
long long int var_12 = 1248819597513249069LL;
long long int var_14 = 5167575438493830153LL;
int zero = 0;
unsigned short var_16 = (unsigned short)62470;
unsigned short var_17 = (unsigned short)46315;
unsigned long long int var_18 = 574065013012755414ULL;
unsigned char var_19 = (unsigned char)1;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
