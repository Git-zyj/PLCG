#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)90;
unsigned int var_1 = 3553810467U;
_Bool var_2 = (_Bool)0;
_Bool var_3 = (_Bool)1;
signed char var_4 = (signed char)104;
long long int var_5 = -5826217368757057414LL;
unsigned int var_9 = 1373857503U;
unsigned int var_13 = 3368214829U;
short var_14 = (short)-30268;
int zero = 0;
int var_15 = -496523989;
_Bool var_16 = (_Bool)0;
unsigned int var_17 = 96087857U;
unsigned int var_18 = 1703693627U;
signed char var_19 = (signed char)39;
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
