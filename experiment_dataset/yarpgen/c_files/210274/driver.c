#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)55066;
_Bool var_4 = (_Bool)1;
unsigned char var_5 = (unsigned char)70;
_Bool var_7 = (_Bool)1;
long long int var_8 = 3696684202655326711LL;
_Bool var_10 = (_Bool)1;
unsigned char var_13 = (unsigned char)91;
unsigned short var_14 = (unsigned short)41840;
long long int var_15 = 3116666544343076045LL;
int zero = 0;
unsigned short var_16 = (unsigned short)56599;
_Bool var_17 = (_Bool)1;
long long int var_18 = 8923898050972234377LL;
signed char var_19 = (signed char)124;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
