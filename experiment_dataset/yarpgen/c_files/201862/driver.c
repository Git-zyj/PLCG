#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1146459603;
unsigned short var_1 = (unsigned short)11653;
unsigned char var_4 = (unsigned char)223;
long long int var_5 = 3161516630368627849LL;
_Bool var_7 = (_Bool)1;
_Bool var_8 = (_Bool)1;
int var_9 = 1476488271;
int zero = 0;
short var_11 = (short)-25849;
long long int var_12 = 2896708329686895021LL;
int var_13 = 612781759;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
