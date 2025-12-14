#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -198934751;
long long int var_1 = -2074371681878344424LL;
unsigned short var_4 = (unsigned short)7860;
short var_5 = (short)16375;
signed char var_6 = (signed char)-42;
unsigned short var_7 = (unsigned short)24571;
short var_12 = (short)-1326;
_Bool var_13 = (_Bool)1;
unsigned long long int var_14 = 8736718290995251086ULL;
short var_15 = (short)20341;
int zero = 0;
unsigned char var_18 = (unsigned char)53;
short var_19 = (short)19337;
_Bool var_20 = (_Bool)0;
unsigned short var_21 = (unsigned short)26262;
int var_22 = -1285465490;
unsigned short var_23 = (unsigned short)23170;
unsigned int var_24 = 4162997648U;
unsigned long long int var_25 = 13475019954536954390ULL;
int var_26 = -918919113;
signed char arr_0 [12] ;
unsigned int arr_1 [12] ;
signed char arr_4 [14] [14] ;
_Bool arr_6 [14] ;
int arr_2 [12] ;
unsigned int arr_3 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (signed char)18;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = 2467731958U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_4 [i_0] [i_1] = (signed char)2;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_6 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = 60746216;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = 3988875710U;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
