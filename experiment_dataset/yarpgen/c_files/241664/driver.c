#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)44817;
unsigned int var_5 = 3013189853U;
unsigned int var_6 = 1275896370U;
unsigned short var_8 = (unsigned short)5689;
unsigned long long int var_10 = 9771524802812196449ULL;
unsigned short var_11 = (unsigned short)3413;
int zero = 0;
unsigned long long int var_12 = 12361498595199626807ULL;
_Bool var_13 = (_Bool)0;
unsigned char var_14 = (unsigned char)17;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
