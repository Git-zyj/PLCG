#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)17;
short var_5 = (short)-1704;
short var_6 = (short)-28464;
unsigned int var_7 = 878747427U;
_Bool var_10 = (_Bool)0;
unsigned long long int var_12 = 2606069683624923543ULL;
int zero = 0;
short var_13 = (short)-14094;
unsigned short var_14 = (unsigned short)22835;
long long int var_15 = -2345271296030319072LL;
unsigned long long int var_16 = 17102570122265203646ULL;
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
