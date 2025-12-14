#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned short var_1 = (unsigned short)62791;
short var_2 = (short)-1906;
unsigned short var_3 = (unsigned short)37956;
unsigned short var_5 = (unsigned short)26813;
_Bool var_6 = (_Bool)0;
int var_7 = 974641088;
unsigned short var_8 = (unsigned short)65032;
unsigned char var_11 = (unsigned char)237;
unsigned long long int var_12 = 18111603862653486090ULL;
unsigned short var_16 = (unsigned short)41322;
int zero = 0;
long long int var_17 = 2840692102525446075LL;
unsigned char var_18 = (unsigned char)135;
_Bool var_19 = (_Bool)1;
short var_20 = (short)16106;
short var_21 = (short)27088;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
