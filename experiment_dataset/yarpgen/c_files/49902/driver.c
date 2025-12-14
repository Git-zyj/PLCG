#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1957144432;
unsigned short var_5 = (unsigned short)25099;
_Bool var_8 = (_Bool)1;
signed char var_10 = (signed char)24;
unsigned short var_11 = (unsigned short)22290;
unsigned int var_12 = 1662818667U;
_Bool var_14 = (_Bool)0;
int zero = 0;
long long int var_16 = 1396331761305533262LL;
long long int var_17 = 4037723304285071535LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
