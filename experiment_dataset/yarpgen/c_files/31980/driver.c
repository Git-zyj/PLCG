#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1237931927U;
int var_1 = -1451414695;
_Bool var_11 = (_Bool)1;
long long int var_14 = -4258444576081074156LL;
unsigned int var_15 = 1895122207U;
unsigned long long int var_16 = 1798866052693993509ULL;
int zero = 0;
signed char var_18 = (signed char)88;
unsigned short var_19 = (unsigned short)44149;
unsigned char var_20 = (unsigned char)253;
_Bool var_21 = (_Bool)1;
int var_22 = -1391585022;
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
