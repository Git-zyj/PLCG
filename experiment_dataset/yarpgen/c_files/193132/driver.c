#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 829122098;
short var_1 = (short)-31793;
short var_4 = (short)-14201;
unsigned short var_6 = (unsigned short)6005;
unsigned short var_8 = (unsigned short)12420;
_Bool var_12 = (_Bool)0;
long long int var_14 = 2846444249703600319LL;
int zero = 0;
signed char var_16 = (signed char)82;
_Bool var_17 = (_Bool)0;
long long int var_18 = 6529979225925868558LL;
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
