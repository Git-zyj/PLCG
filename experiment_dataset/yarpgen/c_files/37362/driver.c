#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)18095;
_Bool var_3 = (_Bool)0;
_Bool var_5 = (_Bool)1;
unsigned char var_8 = (unsigned char)38;
unsigned short var_12 = (unsigned short)56765;
unsigned char var_13 = (unsigned char)104;
signed char var_14 = (signed char)49;
unsigned int var_15 = 1786398385U;
_Bool var_16 = (_Bool)0;
int zero = 0;
long long int var_17 = 2548920885782939873LL;
_Bool var_18 = (_Bool)1;
unsigned char var_19 = (unsigned char)81;
int var_20 = -913107857;
void init() {
}

void checksum() {
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
