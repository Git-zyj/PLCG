#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)14;
short var_3 = (short)30901;
signed char var_5 = (signed char)-111;
long long int var_10 = 2576308188166076561LL;
_Bool var_13 = (_Bool)1;
unsigned char var_14 = (unsigned char)56;
short var_15 = (short)-30695;
unsigned short var_19 = (unsigned short)42726;
int zero = 0;
unsigned short var_20 = (unsigned short)59538;
unsigned short var_21 = (unsigned short)44742;
unsigned long long int var_22 = 13908916787626384383ULL;
long long int var_23 = -7414846231755214983LL;
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
