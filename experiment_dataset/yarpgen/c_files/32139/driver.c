#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1641496235;
unsigned char var_2 = (unsigned char)22;
_Bool var_3 = (_Bool)0;
short var_4 = (short)-14344;
short var_7 = (short)21156;
_Bool var_9 = (_Bool)0;
int var_13 = 773331782;
int var_16 = -430797956;
signed char var_17 = (signed char)37;
unsigned char var_19 = (unsigned char)105;
int zero = 0;
int var_20 = -146873131;
unsigned short var_21 = (unsigned short)16933;
int var_22 = -2000934087;
unsigned long long int var_23 = 13310232837699843365ULL;
unsigned short var_24 = (unsigned short)63366;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
