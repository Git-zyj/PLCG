#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned short var_2 = (unsigned short)54119;
short var_3 = (short)-2824;
short var_12 = (short)-8443;
_Bool var_13 = (_Bool)1;
signed char var_14 = (signed char)-10;
int zero = 0;
short var_16 = (short)-5490;
signed char var_17 = (signed char)20;
unsigned short var_18 = (unsigned short)9862;
void init() {
}

void checksum() {
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
