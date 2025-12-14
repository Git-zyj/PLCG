#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = 1759022843;
unsigned short var_6 = (unsigned short)10141;
int var_8 = 749732229;
_Bool var_9 = (_Bool)1;
unsigned short var_10 = (unsigned short)56051;
unsigned short var_11 = (unsigned short)15721;
_Bool var_12 = (_Bool)1;
int zero = 0;
_Bool var_13 = (_Bool)1;
signed char var_14 = (signed char)-80;
unsigned short var_15 = (unsigned short)63369;
unsigned short var_16 = (unsigned short)27541;
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
