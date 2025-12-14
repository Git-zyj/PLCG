#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
short var_1 = (short)6147;
long long int var_2 = -8331569913366143283LL;
_Bool var_4 = (_Bool)1;
_Bool var_10 = (_Bool)1;
unsigned long long int var_11 = 10725212992997478780ULL;
_Bool var_13 = (_Bool)0;
int var_14 = 1901625027;
int zero = 0;
long long int var_15 = 4283454719554850176LL;
int var_16 = 1367121468;
short var_17 = (short)12061;
unsigned int var_18 = 3763912536U;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
