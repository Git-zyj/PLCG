#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_4 = 722748738U;
unsigned int var_5 = 2990036232U;
unsigned int var_7 = 133958364U;
long long int var_8 = 523417729210583288LL;
short var_9 = (short)2780;
unsigned char var_10 = (unsigned char)5;
unsigned char var_11 = (unsigned char)144;
unsigned long long int var_12 = 2331508042016101005ULL;
short var_13 = (short)-9042;
int var_16 = -1925533691;
int zero = 0;
unsigned char var_17 = (unsigned char)169;
int var_18 = 165350991;
int var_19 = -1423666683;
unsigned char var_20 = (unsigned char)239;
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
