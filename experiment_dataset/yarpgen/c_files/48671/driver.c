#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 9556530775457938663ULL;
short var_5 = (short)26990;
short var_12 = (short)-24205;
int zero = 0;
_Bool var_20 = (_Bool)1;
short var_21 = (short)6092;
long long int var_22 = -304620280703477579LL;
void init() {
}

void checksum() {
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
