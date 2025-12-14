#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)1;
unsigned char var_8 = (unsigned char)127;
short var_9 = (short)12133;
_Bool var_11 = (_Bool)1;
int zero = 0;
short var_17 = (short)24097;
_Bool var_18 = (_Bool)1;
unsigned char var_19 = (unsigned char)241;
unsigned char var_20 = (unsigned char)9;
unsigned char var_21 = (unsigned char)144;
_Bool var_22 = (_Bool)0;
_Bool var_23 = (_Bool)0;
_Bool var_24 = (_Bool)0;
_Bool var_25 = (_Bool)1;
_Bool var_26 = (_Bool)0;
short var_27 = (short)-6739;
_Bool var_28 = (_Bool)1;
short arr_0 [14] ;
short arr_1 [14] ;
unsigned char arr_2 [19] ;
short arr_4 [19] ;
_Bool arr_11 [24] ;
_Bool arr_12 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (short)24217 : (short)9003;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (short)10745 : (short)-13066;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (unsigned char)158;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = (short)15567;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
