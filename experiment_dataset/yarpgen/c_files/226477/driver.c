#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1293417250U;
short var_4 = (short)-5721;
unsigned char var_5 = (unsigned char)22;
unsigned long long int var_6 = 3860299678199562857ULL;
_Bool var_7 = (_Bool)0;
unsigned short var_8 = (unsigned short)53881;
_Bool var_11 = (_Bool)1;
unsigned int var_13 = 2593942279U;
unsigned char var_14 = (unsigned char)73;
int zero = 0;
_Bool var_17 = (_Bool)1;
unsigned short var_18 = (unsigned short)5545;
long long int var_19 = 4095443682840546938LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
