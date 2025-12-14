#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -8598227315581841985LL;
unsigned char var_4 = (unsigned char)201;
unsigned short var_5 = (unsigned short)30860;
unsigned long long int var_8 = 9584003867733713348ULL;
short var_15 = (short)-531;
int zero = 0;
short var_20 = (short)19396;
_Bool var_21 = (_Bool)1;
unsigned char var_22 = (unsigned char)205;
unsigned short var_23 = (unsigned short)46262;
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
