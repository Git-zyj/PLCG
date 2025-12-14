#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 5758277827682480755ULL;
long long int var_2 = 180020620369663432LL;
unsigned int var_6 = 3892306192U;
unsigned char var_7 = (unsigned char)255;
unsigned char var_8 = (unsigned char)63;
short var_11 = (short)-2192;
short var_13 = (short)11002;
unsigned int var_14 = 3591014693U;
short var_15 = (short)8209;
unsigned char var_16 = (unsigned char)8;
long long int var_17 = 4812569110865149169LL;
unsigned char var_18 = (unsigned char)63;
int zero = 0;
unsigned char var_19 = (unsigned char)197;
unsigned int var_20 = 1401603011U;
signed char var_21 = (signed char)25;
unsigned long long int var_22 = 7513092302059281488ULL;
unsigned int var_23 = 2816741942U;
unsigned int var_24 = 3751699713U;
long long int arr_0 [13] ;
unsigned short arr_1 [13] ;
signed char arr_4 [13] ;
_Bool arr_2 [13] ;
unsigned short arr_3 [13] ;
unsigned char arr_6 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = 7551253941624224554LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (unsigned short)59820;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = (signed char)57;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (unsigned short)64957;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned char)110;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
