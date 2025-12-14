#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)14760;
signed char var_7 = (signed char)-33;
unsigned short var_11 = (unsigned short)35663;
unsigned char var_12 = (unsigned char)96;
unsigned short var_13 = (unsigned short)51365;
short var_17 = (short)16904;
long long int var_19 = -6839682142895696084LL;
int zero = 0;
unsigned char var_20 = (unsigned char)67;
_Bool var_21 = (_Bool)0;
unsigned short var_22 = (unsigned short)8240;
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
