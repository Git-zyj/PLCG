#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3420278124U;
unsigned long long int var_1 = 1728039397091987697ULL;
unsigned short var_6 = (unsigned short)503;
unsigned short var_8 = (unsigned short)42306;
unsigned int var_14 = 3469753879U;
unsigned short var_16 = (unsigned short)6792;
long long int var_18 = -3889084500939206574LL;
int zero = 0;
unsigned long long int var_20 = 5315161861952845662ULL;
unsigned char var_21 = (unsigned char)141;
unsigned long long int var_22 = 12186337294102417767ULL;
unsigned char var_23 = (unsigned char)252;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
