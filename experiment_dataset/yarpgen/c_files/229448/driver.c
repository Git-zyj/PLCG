#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned char var_1 = (unsigned char)186;
int var_2 = -331523561;
unsigned char var_3 = (unsigned char)218;
unsigned char var_4 = (unsigned char)40;
unsigned char var_5 = (unsigned char)26;
unsigned short var_7 = (unsigned short)36475;
unsigned char var_8 = (unsigned char)84;
int var_10 = 1957869316;
_Bool var_11 = (_Bool)0;
unsigned char var_12 = (unsigned char)25;
int zero = 0;
int var_13 = -1023491570;
unsigned char var_14 = (unsigned char)141;
_Bool var_15 = (_Bool)0;
_Bool var_16 = (_Bool)0;
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
