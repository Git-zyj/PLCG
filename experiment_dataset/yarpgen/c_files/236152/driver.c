#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 185258882;
long long int var_7 = 5257774865872074820LL;
unsigned int var_9 = 1380215192U;
unsigned long long int var_11 = 2805291578293716625ULL;
int var_13 = -1356580393;
short var_15 = (short)3756;
short var_16 = (short)-12585;
unsigned char var_19 = (unsigned char)239;
int zero = 0;
_Bool var_20 = (_Bool)1;
unsigned short var_21 = (unsigned short)41501;
long long int var_22 = -3509793165508564799LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
