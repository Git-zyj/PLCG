#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 425058500277123952ULL;
long long int var_5 = 9104819163501109132LL;
short var_6 = (short)-16095;
unsigned short var_11 = (unsigned short)26479;
unsigned short var_12 = (unsigned short)20619;
unsigned char var_13 = (unsigned char)206;
int zero = 0;
_Bool var_14 = (_Bool)1;
unsigned long long int var_15 = 13571089487668566910ULL;
short var_16 = (short)-19702;
void init() {
}

void checksum() {
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
