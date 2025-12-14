#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)8373;
unsigned short var_4 = (unsigned short)48171;
unsigned short var_7 = (unsigned short)51067;
int zero = 0;
unsigned short var_14 = (unsigned short)9004;
unsigned short var_15 = (unsigned short)6626;
unsigned short var_16 = (unsigned short)56916;
unsigned short var_17 = (unsigned short)3320;
unsigned short arr_6 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_6 [i_0] = (unsigned short)22338;
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
