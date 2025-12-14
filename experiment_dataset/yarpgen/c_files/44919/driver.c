#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11364860737711545003ULL;
_Bool var_2 = (_Bool)1;
long long int var_3 = -3043326135160862845LL;
unsigned short var_5 = (unsigned short)17916;
short var_7 = (short)410;
int zero = 0;
long long int var_15 = -1907131409623291323LL;
signed char var_16 = (signed char)-14;
void init() {
}

void checksum() {
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
