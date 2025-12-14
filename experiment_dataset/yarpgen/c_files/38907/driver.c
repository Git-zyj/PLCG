#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
_Bool var_3 = (_Bool)0;
unsigned long long int var_4 = 14535147655704641151ULL;
long long int var_6 = 8206887893840183106LL;
unsigned long long int var_7 = 7673062025202526700ULL;
short var_8 = (short)-23047;
_Bool var_10 = (_Bool)0;
long long int var_12 = -2814745422272974725LL;
unsigned short var_13 = (unsigned short)45928;
unsigned short var_14 = (unsigned short)14893;
int zero = 0;
unsigned int var_19 = 345356245U;
_Bool var_20 = (_Bool)1;
unsigned short var_21 = (unsigned short)3854;
_Bool var_22 = (_Bool)1;
unsigned short var_23 = (unsigned short)48800;
long long int var_24 = -1338539704102255817LL;
_Bool arr_0 [19] ;
short arr_2 [19] [19] ;
signed char arr_3 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)11968 : (short)25046;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (signed char)74 : (signed char)111;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
