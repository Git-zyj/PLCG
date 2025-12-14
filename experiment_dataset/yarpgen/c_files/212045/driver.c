#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)129;
signed char var_1 = (signed char)-36;
long long int var_3 = -6564220066821408247LL;
unsigned long long int var_5 = 18342139517067074455ULL;
_Bool var_11 = (_Bool)1;
int zero = 0;
short var_15 = (short)11796;
int var_16 = -652740457;
short var_17 = (short)28489;
signed char var_18 = (signed char)-84;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
