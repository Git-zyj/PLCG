#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
short var_1 = (short)7278;
unsigned int var_2 = 1082915355U;
unsigned short var_3 = (unsigned short)34284;
long long int var_7 = -6492471094303467220LL;
_Bool var_8 = (_Bool)0;
unsigned long long int var_10 = 11763996851105030507ULL;
_Bool var_11 = (_Bool)0;
int zero = 0;
unsigned char var_12 = (unsigned char)165;
int var_13 = 450878216;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
