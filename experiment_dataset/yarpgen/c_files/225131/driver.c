#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)60774;
long long int var_7 = 1140570786974073002LL;
unsigned short var_12 = (unsigned short)47780;
int var_13 = 1398259054;
short var_14 = (short)-23307;
_Bool var_17 = (_Bool)0;
int zero = 0;
_Bool var_18 = (_Bool)0;
unsigned long long int var_19 = 9116363250476829371ULL;
unsigned long long int var_20 = 969664079577787213ULL;
short var_21 = (short)30296;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
