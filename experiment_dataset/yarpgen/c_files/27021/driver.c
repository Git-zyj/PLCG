#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned char var_1 = (unsigned char)5;
_Bool var_2 = (_Bool)1;
long long int var_3 = -8545219156368871611LL;
unsigned char var_6 = (unsigned char)2;
unsigned long long int var_7 = 12577341033366476163ULL;
short var_11 = (short)-26280;
int zero = 0;
unsigned long long int var_12 = 6252196205932774550ULL;
_Bool var_13 = (_Bool)1;
short var_14 = (short)1781;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
