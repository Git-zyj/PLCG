#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned long long int var_1 = 15035933830977957130ULL;
unsigned long long int var_2 = 17096609231772656934ULL;
short var_4 = (short)-25532;
unsigned short var_7 = (unsigned short)30519;
long long int var_8 = -6930073491390331588LL;
unsigned char var_10 = (unsigned char)47;
signed char var_11 = (signed char)20;
_Bool var_12 = (_Bool)1;
int zero = 0;
unsigned int var_13 = 3113320640U;
int var_14 = -84450256;
short var_15 = (short)-10880;
unsigned short var_16 = (unsigned short)23033;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
