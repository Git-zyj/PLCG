#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -2056361717;
_Bool var_2 = (_Bool)1;
long long int var_4 = 6058334736743993107LL;
unsigned int var_6 = 2681508320U;
int var_7 = 1036330003;
unsigned short var_9 = (unsigned short)57242;
unsigned long long int var_11 = 50424085097750513ULL;
int var_13 = 1357085493;
int zero = 0;
unsigned int var_14 = 2005669084U;
signed char var_15 = (signed char)47;
short var_16 = (short)8033;
int var_17 = 654917459;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
