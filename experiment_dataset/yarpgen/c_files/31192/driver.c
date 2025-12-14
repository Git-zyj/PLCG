#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3119935065U;
unsigned short var_2 = (unsigned short)52224;
int var_3 = 1383936907;
_Bool var_4 = (_Bool)0;
_Bool var_5 = (_Bool)1;
unsigned short var_6 = (unsigned short)23348;
signed char var_7 = (signed char)40;
unsigned int var_8 = 3884750761U;
int zero = 0;
unsigned short var_12 = (unsigned short)52792;
long long int var_13 = -4136974154731234328LL;
_Bool var_14 = (_Bool)1;
unsigned long long int var_15 = 2335648121443119824ULL;
unsigned short var_16 = (unsigned short)2028;
_Bool arr_0 [14] ;
short arr_1 [14] ;
_Bool arr_2 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (short)24118;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
