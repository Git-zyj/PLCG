#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 2053694359027794711LL;
long long int var_6 = -7052242299106481126LL;
signed char var_17 = (signed char)71;
int zero = 0;
unsigned char var_18 = (unsigned char)210;
short var_19 = (short)-24307;
int var_20 = -346910319;
long long int var_21 = 5879269524059172255LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
