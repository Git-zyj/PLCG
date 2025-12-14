#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_1 = (_Bool)0;
_Bool var_4 = (_Bool)1;
int var_5 = -564967498;
int var_6 = -1323660893;
int var_7 = 1138020852;
int var_11 = 1107357473;
short var_15 = (short)4859;
short var_18 = (short)642;
int zero = 0;
short var_19 = (short)-18223;
long long int var_20 = 5360113637588659691LL;
long long int var_21 = 6496016281170897618LL;
_Bool var_22 = (_Bool)0;
_Bool var_23 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
