#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)57319;
int var_3 = -1400879748;
long long int var_4 = 7360193373430514678LL;
short var_5 = (short)-24654;
_Bool var_12 = (_Bool)1;
int zero = 0;
long long int var_13 = -4660764184293537881LL;
signed char var_14 = (signed char)-32;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
