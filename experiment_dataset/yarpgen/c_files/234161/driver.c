#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 2530013405U;
unsigned int var_7 = 845433284U;
signed char var_8 = (signed char)-112;
long long int var_11 = 4091270631514769478LL;
int zero = 0;
long long int var_14 = -6091349800592897485LL;
_Bool var_15 = (_Bool)0;
long long int var_16 = -1495702268897288611LL;
short var_17 = (short)27101;
unsigned short var_18 = (unsigned short)27506;
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
