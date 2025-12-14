#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)1851;
unsigned char var_4 = (unsigned char)251;
int var_5 = -1500133577;
_Bool var_8 = (_Bool)1;
long long int var_10 = 6235818731878220293LL;
signed char var_12 = (signed char)-41;
short var_15 = (short)6603;
int zero = 0;
long long int var_19 = -645925563628703057LL;
signed char var_20 = (signed char)127;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
