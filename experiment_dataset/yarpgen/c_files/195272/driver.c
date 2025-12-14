#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-31617;
unsigned long long int var_4 = 3451514712045795477ULL;
long long int var_6 = -7319810209935896849LL;
_Bool var_9 = (_Bool)0;
long long int var_11 = -7496728088377230970LL;
short var_12 = (short)-32230;
short var_13 = (short)21157;
unsigned int var_16 = 1843117162U;
int zero = 0;
_Bool var_17 = (_Bool)1;
unsigned int var_18 = 3947519223U;
unsigned char var_19 = (unsigned char)33;
long long int var_20 = 7848536895627560056LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
