#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned long long int var_5 = 1314221060109871215ULL;
signed char var_7 = (signed char)68;
_Bool var_8 = (_Bool)0;
short var_12 = (short)-230;
int var_13 = 1261084798;
short var_14 = (short)32296;
int zero = 0;
int var_17 = -154512625;
short var_18 = (short)-30658;
void init() {
}

void checksum() {
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
