#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3223575731U;
unsigned int var_3 = 2483458392U;
unsigned int var_4 = 1835807297U;
unsigned int var_5 = 258977585U;
unsigned short var_6 = (unsigned short)62812;
unsigned int var_7 = 1284617715U;
unsigned short var_9 = (unsigned short)37626;
unsigned short var_10 = (unsigned short)5972;
short var_11 = (short)23505;
int zero = 0;
_Bool var_14 = (_Bool)0;
_Bool var_15 = (_Bool)1;
_Bool var_16 = (_Bool)1;
_Bool var_17 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
