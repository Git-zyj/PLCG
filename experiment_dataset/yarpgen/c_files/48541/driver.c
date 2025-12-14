#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
long long int var_3 = -8796637217851300097LL;
_Bool var_5 = (_Bool)1;
_Bool var_6 = (_Bool)1;
int var_9 = -2026295949;
unsigned long long int var_11 = 39723242740380893ULL;
long long int var_13 = -3854251675414236955LL;
unsigned long long int var_16 = 1244814317130406016ULL;
int var_17 = 1982094499;
short var_18 = (short)-7567;
int zero = 0;
short var_20 = (short)-16657;
long long int var_21 = 7520947781871947149LL;
unsigned long long int var_22 = 14855503056761356062ULL;
short var_23 = (short)7910;
unsigned int var_24 = 1775914188U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
