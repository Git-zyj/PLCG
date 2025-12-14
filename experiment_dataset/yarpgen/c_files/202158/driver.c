#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)20;
signed char var_1 = (signed char)65;
long long int var_3 = -5669223805697442419LL;
unsigned int var_4 = 2265131000U;
unsigned char var_7 = (unsigned char)77;
int var_8 = 130629067;
_Bool var_9 = (_Bool)1;
signed char var_10 = (signed char)47;
short var_11 = (short)-12603;
long long int var_12 = -8274954042668039315LL;
_Bool var_13 = (_Bool)1;
int zero = 0;
unsigned int var_14 = 1824116246U;
unsigned char var_15 = (unsigned char)44;
unsigned long long int var_16 = 12800450502568321255ULL;
unsigned char var_17 = (unsigned char)130;
short var_18 = (short)6462;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
