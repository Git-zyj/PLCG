#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 758423120;
unsigned char var_3 = (unsigned char)42;
_Bool var_4 = (_Bool)0;
unsigned long long int var_5 = 14925041408993503618ULL;
long long int var_6 = -338262559566908453LL;
unsigned short var_7 = (unsigned short)22238;
_Bool var_9 = (_Bool)1;
short var_10 = (short)-10380;
int zero = 0;
unsigned char var_11 = (unsigned char)48;
unsigned long long int var_12 = 18023665214818563451ULL;
unsigned short var_13 = (unsigned short)48279;
_Bool var_14 = (_Bool)1;
void init() {
}

void checksum() {
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
