#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)9832;
signed char var_1 = (signed char)-97;
unsigned long long int var_4 = 11979890694289345083ULL;
unsigned int var_5 = 164991367U;
unsigned int var_7 = 3389537229U;
signed char var_17 = (signed char)-41;
_Bool var_18 = (_Bool)1;
int zero = 0;
unsigned int var_20 = 2880631675U;
unsigned long long int var_21 = 13980839325075228336ULL;
unsigned short var_22 = (unsigned short)63316;
unsigned short var_23 = (unsigned short)52285;
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
