#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)36020;
unsigned short var_3 = (unsigned short)55924;
unsigned char var_4 = (unsigned char)168;
unsigned char var_8 = (unsigned char)232;
unsigned char var_9 = (unsigned char)12;
unsigned short var_10 = (unsigned short)29073;
_Bool var_14 = (_Bool)0;
unsigned long long int var_19 = 2863448310800037564ULL;
int zero = 0;
long long int var_20 = 1543185252120271674LL;
int var_21 = -1681763785;
_Bool var_22 = (_Bool)1;
unsigned short var_23 = (unsigned short)22303;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
