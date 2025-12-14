#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1994090769;
_Bool var_2 = (_Bool)1;
int var_3 = 251074533;
_Bool var_6 = (_Bool)1;
_Bool var_9 = (_Bool)1;
long long int var_14 = -2635044041685342534LL;
int zero = 0;
_Bool var_15 = (_Bool)0;
_Bool var_16 = (_Bool)1;
int var_17 = 1175644317;
int var_18 = -602573488;
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
