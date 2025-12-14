#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
int var_1 = -1713213289;
int var_5 = -742355454;
unsigned short var_8 = (unsigned short)58872;
short var_14 = (short)24942;
unsigned char var_15 = (unsigned char)42;
int zero = 0;
unsigned short var_18 = (unsigned short)46946;
unsigned long long int var_19 = 209109043778144759ULL;
int var_20 = 493644652;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
