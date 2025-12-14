#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)18;
signed char var_2 = (signed char)126;
unsigned char var_4 = (unsigned char)165;
signed char var_5 = (signed char)-21;
signed char var_9 = (signed char)83;
unsigned char var_10 = (unsigned char)179;
unsigned long long int var_13 = 16269144287993207560ULL;
short var_16 = (short)20290;
unsigned int var_17 = 2012250458U;
_Bool var_18 = (_Bool)0;
int zero = 0;
unsigned short var_19 = (unsigned short)39405;
short var_20 = (short)-1512;
unsigned int var_21 = 1522490259U;
signed char var_22 = (signed char)68;
int var_23 = -2018983658;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
