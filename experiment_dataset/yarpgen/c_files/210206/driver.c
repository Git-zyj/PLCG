#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1751563686U;
unsigned long long int var_2 = 2110183332568203700ULL;
unsigned short var_3 = (unsigned short)34090;
int var_6 = -1046824878;
signed char var_7 = (signed char)45;
signed char var_10 = (signed char)4;
int zero = 0;
_Bool var_12 = (_Bool)1;
unsigned char var_13 = (unsigned char)42;
short var_14 = (short)11944;
short var_15 = (short)-18861;
long long int var_16 = -4115787708221091556LL;
unsigned int var_17 = 1293682651U;
signed char var_18 = (signed char)99;
long long int var_19 = -8268529330533367491LL;
int var_20 = 1302257974;
unsigned char var_21 = (unsigned char)61;
unsigned int var_22 = 1494805620U;
long long int var_23 = 8590788920224923830LL;
_Bool arr_0 [19] [19] ;
short arr_6 [13] [13] ;
unsigned short arr_7 [13] ;
signed char arr_8 [13] ;
_Bool arr_9 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_6 [i_0] [i_1] = (short)18195;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_7 [i_0] = (unsigned short)64285;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_8 [i_0] = (signed char)-22;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_9 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
