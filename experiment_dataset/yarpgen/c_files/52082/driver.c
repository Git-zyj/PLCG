#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
signed char var_3 = (signed char)-63;
unsigned short var_8 = (unsigned short)45531;
unsigned char var_9 = (unsigned char)164;
int var_10 = -567888689;
int zero = 0;
unsigned int var_12 = 1653789838U;
long long int var_13 = 5315677363703233752LL;
long long int var_14 = -7813166912768494946LL;
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
