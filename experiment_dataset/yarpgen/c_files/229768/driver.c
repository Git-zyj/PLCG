#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1235224589U;
_Bool var_1 = (_Bool)0;
unsigned char var_4 = (unsigned char)234;
short var_5 = (short)-17160;
unsigned short var_8 = (unsigned short)10673;
long long int var_11 = 7433804345720015343LL;
int zero = 0;
int var_16 = -290727850;
int var_17 = -1649254215;
unsigned short var_18 = (unsigned short)2291;
unsigned char var_19 = (unsigned char)224;
unsigned char arr_0 [18] ;
short arr_1 [18] ;
unsigned int arr_2 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (unsigned char)236 : (unsigned char)166;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (short)-29654 : (short)21439;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 2541932951U : 1265519071U;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
