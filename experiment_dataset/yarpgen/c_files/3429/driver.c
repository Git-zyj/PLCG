#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)130;
unsigned short var_7 = (unsigned short)59246;
long long int var_8 = 7013704398059113485LL;
short var_11 = (short)27200;
short var_14 = (short)-5796;
int zero = 0;
unsigned int var_15 = 1798245604U;
signed char var_16 = (signed char)-40;
unsigned int var_17 = 1976217328U;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
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
