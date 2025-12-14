#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)54;
short var_4 = (short)-9597;
short var_5 = (short)4482;
unsigned long long int var_6 = 7329325343805759891ULL;
short var_7 = (short)-27666;
int var_8 = -1658999049;
long long int var_10 = -1627007037444287241LL;
int zero = 0;
int var_13 = 2070381071;
_Bool var_14 = (_Bool)1;
_Bool var_15 = (_Bool)0;
_Bool var_16 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
