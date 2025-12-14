#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-23479;
_Bool var_8 = (_Bool)0;
short var_11 = (short)16806;
_Bool var_12 = (_Bool)0;
int var_14 = 1302847630;
unsigned int var_15 = 3045798021U;
unsigned int var_18 = 757525122U;
int var_19 = 1559965335;
int zero = 0;
unsigned long long int var_20 = 11658708955717590876ULL;
long long int var_21 = -5912403653933627805LL;
unsigned char var_22 = (unsigned char)48;
short var_23 = (short)3792;
int var_24 = -145770566;
int var_25 = 1350097382;
short var_26 = (short)-21723;
long long int var_27 = 8488906671415251672LL;
int var_28 = -981842393;
unsigned long long int var_29 = 5635953930287207541ULL;
int var_30 = -429064570;
unsigned short var_31 = (unsigned short)21258;
_Bool arr_8 [24] ;
_Bool arr_4 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
