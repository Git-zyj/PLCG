#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)136;
_Bool var_4 = (_Bool)0;
long long int var_5 = -687988622990860644LL;
unsigned short var_7 = (unsigned short)38887;
int var_10 = -1529086636;
unsigned short var_11 = (unsigned short)29445;
long long int var_13 = -3878695469845292691LL;
int zero = 0;
short var_15 = (short)-7081;
unsigned long long int var_16 = 2784233531733207047ULL;
unsigned char var_17 = (unsigned char)145;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
