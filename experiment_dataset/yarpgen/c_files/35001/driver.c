#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)99;
unsigned int var_1 = 3728798121U;
unsigned int var_2 = 2726980533U;
unsigned short var_3 = (unsigned short)32060;
long long int var_4 = -906634975393889141LL;
unsigned int var_5 = 1681947896U;
long long int var_6 = 577232984270605439LL;
unsigned int var_9 = 2682915524U;
_Bool var_10 = (_Bool)1;
int zero = 0;
unsigned char var_11 = (unsigned char)35;
long long int var_12 = -916869517306480093LL;
unsigned int var_13 = 1202802985U;
unsigned int var_14 = 2746071866U;
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
