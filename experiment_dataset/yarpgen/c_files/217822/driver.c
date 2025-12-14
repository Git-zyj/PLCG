#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 149524942;
int var_5 = 764788238;
int var_6 = 1263558911;
_Bool var_7 = (_Bool)1;
signed char var_11 = (signed char)120;
int var_15 = 1270611936;
short var_18 = (short)21254;
long long int var_19 = -2307810281688186449LL;
int zero = 0;
short var_20 = (short)2012;
_Bool var_21 = (_Bool)1;
unsigned char var_22 = (unsigned char)83;
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
