#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-6813;
_Bool var_2 = (_Bool)0;
_Bool var_3 = (_Bool)1;
unsigned int var_4 = 1725488464U;
short var_5 = (short)18789;
short var_6 = (short)12703;
int var_7 = 2026134539;
unsigned int var_8 = 2128938425U;
short var_9 = (short)13814;
int var_10 = 1103747602;
_Bool var_12 = (_Bool)1;
unsigned char var_13 = (unsigned char)70;
short var_14 = (short)-18979;
short var_15 = (short)4670;
unsigned char var_16 = (unsigned char)151;
int zero = 0;
long long int var_17 = -6346077661494803464LL;
short var_18 = (short)14118;
short var_19 = (short)-12747;
unsigned long long int arr_5 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_5 [i_0] [i_1] = 5701270094625923881ULL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
