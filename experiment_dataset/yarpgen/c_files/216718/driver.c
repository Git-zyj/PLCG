#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8893999855751137089LL;
int var_4 = 1597553065;
_Bool var_5 = (_Bool)1;
unsigned short var_6 = (unsigned short)28811;
unsigned short var_9 = (unsigned short)44958;
unsigned short var_10 = (unsigned short)54261;
unsigned short var_13 = (unsigned short)26055;
int var_14 = 768120914;
long long int var_15 = -5721599860019657242LL;
int zero = 0;
short var_16 = (short)31294;
_Bool var_17 = (_Bool)0;
void init() {
}

void checksum() {
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
