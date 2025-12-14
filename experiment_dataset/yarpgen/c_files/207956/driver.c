#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 553918363;
unsigned int var_3 = 1467416114U;
int var_4 = 347099585;
unsigned char var_6 = (unsigned char)36;
unsigned int var_8 = 3679858416U;
unsigned int var_12 = 2568983110U;
_Bool var_16 = (_Bool)1;
signed char var_17 = (signed char)-4;
unsigned long long int var_18 = 4027061176550739224ULL;
int zero = 0;
int var_19 = -241634774;
_Bool var_20 = (_Bool)0;
unsigned char var_21 = (unsigned char)26;
unsigned int var_22 = 572650236U;
unsigned short var_23 = (unsigned short)56868;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
