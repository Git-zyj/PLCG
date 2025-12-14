#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1647814361;
unsigned long long int var_3 = 8007094125000044666ULL;
signed char var_7 = (signed char)-68;
short var_10 = (short)13030;
unsigned short var_11 = (unsigned short)16360;
_Bool var_15 = (_Bool)1;
int zero = 0;
unsigned int var_17 = 2936263704U;
signed char var_18 = (signed char)88;
unsigned long long int var_19 = 4015262461495147711ULL;
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
