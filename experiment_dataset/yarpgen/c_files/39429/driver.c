#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -637087196;
long long int var_4 = -9089541019550146175LL;
int var_6 = 587238533;
_Bool var_7 = (_Bool)0;
long long int var_10 = -2275155145913897084LL;
short var_13 = (short)-32766;
_Bool var_14 = (_Bool)1;
int zero = 0;
_Bool var_17 = (_Bool)1;
unsigned short var_18 = (unsigned short)29472;
unsigned short var_19 = (unsigned short)57627;
void init() {
}

void checksum() {
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
