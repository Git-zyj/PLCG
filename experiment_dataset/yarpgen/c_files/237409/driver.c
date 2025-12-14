#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)25327;
signed char var_3 = (signed char)48;
int var_5 = 394474076;
unsigned int var_6 = 1439851756U;
unsigned int var_8 = 1237570206U;
unsigned short var_10 = (unsigned short)64351;
unsigned short var_12 = (unsigned short)3019;
unsigned short var_13 = (unsigned short)25095;
unsigned int var_14 = 1406309057U;
int zero = 0;
int var_15 = -1674244318;
unsigned short var_16 = (unsigned short)37288;
_Bool var_17 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
