#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4738339034857992015LL;
short var_3 = (short)3839;
_Bool var_7 = (_Bool)0;
int zero = 0;
short var_14 = (short)-3647;
long long int var_15 = -4008444821922907681LL;
unsigned short var_16 = (unsigned short)44620;
short var_17 = (short)-17999;
unsigned int var_18 = 2795618209U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
