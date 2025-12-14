#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -1678174510;
_Bool var_10 = (_Bool)0;
signed char var_13 = (signed char)-31;
short var_14 = (short)-32486;
unsigned int var_16 = 3097467368U;
unsigned short var_17 = (unsigned short)45551;
int zero = 0;
long long int var_20 = -4645825557721844027LL;
unsigned char var_21 = (unsigned char)2;
unsigned long long int var_22 = 3334329454833537216ULL;
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
