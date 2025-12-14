#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-26189;
unsigned int var_2 = 1602487564U;
signed char var_3 = (signed char)64;
int var_4 = -1731258015;
short var_5 = (short)-9843;
int var_6 = -1921421337;
unsigned short var_9 = (unsigned short)49269;
_Bool var_10 = (_Bool)1;
_Bool var_12 = (_Bool)0;
short var_15 = (short)-12523;
short var_16 = (short)12706;
int zero = 0;
short var_18 = (short)28736;
unsigned int var_19 = 2823573850U;
int var_20 = 1180949074;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
