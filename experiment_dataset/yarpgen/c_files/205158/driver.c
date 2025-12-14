#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2652202693U;
long long int var_4 = -6177178913500863549LL;
_Bool var_6 = (_Bool)0;
unsigned char var_7 = (unsigned char)137;
unsigned short var_8 = (unsigned short)64211;
unsigned int var_9 = 2669230870U;
int zero = 0;
_Bool var_10 = (_Bool)0;
unsigned int var_11 = 2782186112U;
unsigned short var_12 = (unsigned short)31277;
unsigned char var_13 = (unsigned char)140;
_Bool var_14 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
