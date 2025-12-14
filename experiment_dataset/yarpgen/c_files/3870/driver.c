#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_5 = (_Bool)0;
_Bool var_8 = (_Bool)1;
unsigned int var_10 = 1431782824U;
short var_12 = (short)-29830;
int zero = 0;
long long int var_17 = 7380007412985358907LL;
short var_18 = (short)-7431;
unsigned short var_19 = (unsigned short)33082;
void init() {
}

void checksum() {
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
