#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_2 = (_Bool)0;
unsigned short var_7 = (unsigned short)50571;
int var_8 = 853459114;
short var_14 = (short)10234;
short var_16 = (short)6951;
unsigned long long int var_18 = 11251622488975136859ULL;
int zero = 0;
unsigned int var_19 = 4291630225U;
unsigned short var_20 = (unsigned short)6716;
unsigned long long int var_21 = 1100488358159954223ULL;
unsigned long long int var_22 = 6266902527907192770ULL;
void init() {
}

void checksum() {
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
