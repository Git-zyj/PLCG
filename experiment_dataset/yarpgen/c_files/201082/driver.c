#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_1 = 14527099330821538883ULL;
unsigned int var_2 = 3602453948U;
int var_3 = -273625276;
short var_6 = (short)-30695;
_Bool var_10 = (_Bool)1;
unsigned long long int var_11 = 6802993846331672829ULL;
signed char var_14 = (signed char)120;
int zero = 0;
unsigned int var_15 = 2075805612U;
unsigned int var_16 = 2237304451U;
unsigned char var_17 = (unsigned char)110;
_Bool var_18 = (_Bool)0;
int var_19 = -1906579682;
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
