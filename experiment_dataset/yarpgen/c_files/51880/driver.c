#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
long long int var_3 = -5354395389067738886LL;
long long int var_8 = -248997791123231317LL;
unsigned char var_11 = (unsigned char)24;
signed char var_12 = (signed char)109;
_Bool var_15 = (_Bool)0;
unsigned char var_16 = (unsigned char)127;
unsigned int var_17 = 1487322246U;
int zero = 0;
unsigned char var_18 = (unsigned char)148;
unsigned char var_19 = (unsigned char)119;
_Bool var_20 = (_Bool)1;
signed char var_21 = (signed char)-54;
long long int var_22 = 6660282722058853958LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
