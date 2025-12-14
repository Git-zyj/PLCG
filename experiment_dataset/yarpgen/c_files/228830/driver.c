#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)14279;
long long int var_2 = -7759619068290077167LL;
short var_3 = (short)5434;
unsigned short var_6 = (unsigned short)8169;
signed char var_10 = (signed char)127;
_Bool var_13 = (_Bool)0;
int var_17 = 1640077798;
int zero = 0;
unsigned int var_18 = 3209681221U;
unsigned short var_19 = (unsigned short)6380;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
