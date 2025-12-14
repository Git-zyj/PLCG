#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_12 = (_Bool)1;
unsigned long long int var_13 = 6590033084623140587ULL;
int var_14 = 488664117;
long long int var_17 = -2444719490785641400LL;
short var_18 = (short)-14139;
int zero = 0;
int var_19 = -440953077;
unsigned char var_20 = (unsigned char)127;
signed char var_21 = (signed char)10;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
