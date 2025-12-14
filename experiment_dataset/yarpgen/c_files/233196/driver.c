#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -8460746952482714938LL;
unsigned int var_5 = 688459487U;
short var_6 = (short)32097;
long long int var_7 = -6995107425606426329LL;
_Bool var_9 = (_Bool)1;
_Bool var_11 = (_Bool)0;
int zero = 0;
unsigned short var_13 = (unsigned short)15338;
unsigned char var_14 = (unsigned char)55;
long long int var_15 = -45567502395298569LL;
short var_16 = (short)31747;
unsigned int var_17 = 2138351515U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
