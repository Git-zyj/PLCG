#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-20;
unsigned short var_7 = (unsigned short)4159;
short var_11 = (short)-7011;
int var_14 = -1030179271;
_Bool var_15 = (_Bool)0;
signed char var_16 = (signed char)90;
int zero = 0;
long long int var_17 = 1178124959212500575LL;
signed char var_18 = (signed char)76;
_Bool var_19 = (_Bool)0;
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
