#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-71;
unsigned int var_4 = 2178135355U;
_Bool var_6 = (_Bool)1;
unsigned int var_7 = 1330833920U;
unsigned short var_9 = (unsigned short)51518;
_Bool var_10 = (_Bool)0;
long long int var_11 = 1622204285281291360LL;
_Bool var_13 = (_Bool)0;
int zero = 0;
unsigned short var_15 = (unsigned short)18273;
signed char var_16 = (signed char)6;
int var_17 = -1222864565;
signed char var_18 = (signed char)86;
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
