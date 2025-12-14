#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1753427629;
short var_4 = (short)20099;
unsigned short var_5 = (unsigned short)33099;
long long int var_9 = 2774557853351817072LL;
int var_10 = 454104014;
unsigned long long int var_11 = 6586526753743978644ULL;
int zero = 0;
_Bool var_14 = (_Bool)0;
unsigned short var_15 = (unsigned short)7508;
unsigned short var_16 = (unsigned short)56386;
unsigned short var_17 = (unsigned short)35027;
signed char var_18 = (signed char)8;
unsigned int var_19 = 3002033720U;
unsigned char arr_7 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_7 [i_0] = (unsigned char)168;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
