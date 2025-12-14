#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
unsigned short var_8 = (unsigned short)24376;
unsigned int var_10 = 1405417621U;
int var_18 = -2045613528;
long long int var_19 = -8983162332768330496LL;
int zero = 0;
_Bool var_20 = (_Bool)1;
long long int var_21 = -1154909093289157636LL;
signed char var_22 = (signed char)-12;
unsigned int var_23 = 2034774993U;
unsigned char var_24 = (unsigned char)49;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
