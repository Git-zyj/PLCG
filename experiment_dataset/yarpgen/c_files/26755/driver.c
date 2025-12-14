#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_2 = (_Bool)0;
int var_5 = 1750762014;
signed char var_7 = (signed char)102;
long long int var_11 = -2257520024482490584LL;
unsigned short var_15 = (unsigned short)49990;
int zero = 0;
int var_20 = -1919004117;
long long int var_21 = -8417713457558026989LL;
int var_22 = 32226582;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
