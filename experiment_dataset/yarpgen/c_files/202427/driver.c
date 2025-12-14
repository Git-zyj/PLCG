#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5416640825461089627LL;
signed char var_3 = (signed char)39;
long long int var_4 = -4340931520408783753LL;
short var_5 = (short)-19981;
short var_6 = (short)4693;
_Bool var_8 = (_Bool)1;
signed char var_11 = (signed char)64;
signed char var_13 = (signed char)-113;
int zero = 0;
short var_14 = (short)10843;
long long int var_15 = 8933493111992509863LL;
signed char var_16 = (signed char)-48;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
