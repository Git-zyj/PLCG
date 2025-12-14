#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)27029;
long long int var_6 = -5314027135915038008LL;
_Bool var_10 = (_Bool)0;
signed char var_12 = (signed char)8;
unsigned long long int var_13 = 14794492409167472903ULL;
int zero = 0;
short var_20 = (short)2126;
signed char var_21 = (signed char)18;
int var_22 = 577854242;
unsigned short var_23 = (unsigned short)28198;
void init() {
}

void checksum() {
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
