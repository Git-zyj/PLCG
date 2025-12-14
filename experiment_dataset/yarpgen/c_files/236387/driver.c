#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)24793;
_Bool var_6 = (_Bool)1;
long long int var_8 = -4107518232097206861LL;
signed char var_12 = (signed char)113;
signed char var_14 = (signed char)-91;
int zero = 0;
_Bool var_16 = (_Bool)1;
signed char var_17 = (signed char)16;
_Bool var_18 = (_Bool)0;
unsigned int var_19 = 3006003428U;
unsigned short var_20 = (unsigned short)32372;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
