#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_1 = -3435176488387384546LL;
unsigned long long int var_2 = 9000711165219557114ULL;
unsigned long long int var_3 = 1198466224490310338ULL;
short var_4 = (short)-20497;
short var_5 = (short)854;
unsigned short var_6 = (unsigned short)7424;
_Bool var_9 = (_Bool)1;
short var_10 = (short)8281;
long long int var_11 = 6284573983074016590LL;
_Bool var_13 = (_Bool)0;
unsigned char var_14 = (unsigned char)201;
int zero = 0;
unsigned char var_15 = (unsigned char)192;
_Bool var_16 = (_Bool)1;
unsigned long long int var_17 = 15147699894420881603ULL;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
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
