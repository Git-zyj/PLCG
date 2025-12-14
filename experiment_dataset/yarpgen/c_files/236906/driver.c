#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 13398436796099503182ULL;
unsigned char var_3 = (unsigned char)121;
int var_6 = -998035210;
_Bool var_8 = (_Bool)0;
short var_10 = (short)18382;
unsigned char var_11 = (unsigned char)239;
unsigned char var_16 = (unsigned char)48;
int zero = 0;
long long int var_19 = -6315804698085990311LL;
unsigned long long int var_20 = 8764973396708328626ULL;
int var_21 = 1587720409;
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
