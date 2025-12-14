#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 13550754568807156212ULL;
_Bool var_2 = (_Bool)0;
long long int var_3 = 7325413340698330870LL;
int var_4 = 968559699;
unsigned short var_5 = (unsigned short)39260;
unsigned char var_10 = (unsigned char)162;
long long int var_12 = 8810496830751409505LL;
unsigned char var_13 = (unsigned char)162;
int zero = 0;
unsigned int var_16 = 3729583921U;
unsigned short var_17 = (unsigned short)56832;
unsigned char var_18 = (unsigned char)18;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
