#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -7557442416069488107LL;
short var_6 = (short)5588;
unsigned short var_7 = (unsigned short)48061;
int var_10 = -1454319712;
_Bool var_13 = (_Bool)0;
unsigned short var_14 = (unsigned short)10745;
int var_15 = 64411515;
unsigned short var_17 = (unsigned short)36961;
int zero = 0;
unsigned short var_19 = (unsigned short)37785;
signed char var_20 = (signed char)20;
signed char var_21 = (signed char)-36;
_Bool var_22 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
