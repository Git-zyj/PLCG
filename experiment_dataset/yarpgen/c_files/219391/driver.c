#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 3354514455379834831ULL;
unsigned short var_7 = (unsigned short)60955;
signed char var_8 = (signed char)-4;
unsigned short var_10 = (unsigned short)35235;
signed char var_12 = (signed char)48;
unsigned char var_13 = (unsigned char)105;
_Bool var_14 = (_Bool)0;
_Bool var_16 = (_Bool)0;
int zero = 0;
short var_20 = (short)-23573;
short var_21 = (short)-21145;
unsigned short var_22 = (unsigned short)28798;
unsigned short var_23 = (unsigned short)50902;
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
