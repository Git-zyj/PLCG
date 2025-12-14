#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -1649329394425667082LL;
_Bool var_4 = (_Bool)0;
unsigned long long int var_6 = 4784083237252287895ULL;
signed char var_8 = (signed char)124;
unsigned int var_11 = 2405454523U;
unsigned long long int var_12 = 478564400093825689ULL;
_Bool var_13 = (_Bool)1;
long long int var_14 = -7631227994624160798LL;
long long int var_15 = 8834801299258260214LL;
unsigned short var_17 = (unsigned short)58983;
int zero = 0;
int var_19 = 1819469257;
short var_20 = (short)6186;
long long int var_21 = 1006177641023807263LL;
short var_22 = (short)28700;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
