#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3856656543U;
long long int var_12 = 8624995160525848153LL;
unsigned short var_13 = (unsigned short)49166;
short var_14 = (short)-31337;
_Bool var_15 = (_Bool)1;
unsigned short var_16 = (unsigned short)38103;
int zero = 0;
unsigned short var_17 = (unsigned short)44425;
unsigned int var_18 = 2262651964U;
short var_19 = (short)-26497;
unsigned char var_20 = (unsigned char)38;
unsigned short var_21 = (unsigned short)57867;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
