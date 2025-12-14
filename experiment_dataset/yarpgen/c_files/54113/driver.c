#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)722;
unsigned int var_2 = 3311674114U;
unsigned short var_3 = (unsigned short)65464;
_Bool var_9 = (_Bool)0;
int zero = 0;
signed char var_10 = (signed char)-36;
long long int var_11 = -7247505636061641302LL;
unsigned short var_12 = (unsigned short)24318;
unsigned int var_13 = 2152931208U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
