#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned char var_3 = (unsigned char)42;
unsigned int var_4 = 1201024296U;
unsigned short var_6 = (unsigned short)1454;
unsigned int var_7 = 3662302288U;
unsigned int var_8 = 691915458U;
unsigned int var_10 = 2264557947U;
unsigned int var_12 = 2389086731U;
unsigned long long int var_14 = 11889326444045348086ULL;
unsigned short var_15 = (unsigned short)42275;
unsigned short var_17 = (unsigned short)51702;
int zero = 0;
_Bool var_20 = (_Bool)0;
short var_21 = (short)-29211;
_Bool var_22 = (_Bool)0;
short var_23 = (short)25245;
unsigned char var_24 = (unsigned char)192;
unsigned short var_25 = (unsigned short)53293;
unsigned short var_26 = (unsigned short)60635;
long long int var_27 = 5795172567905781997LL;
long long int arr_0 [24] ;
unsigned char arr_1 [24] [24] ;
unsigned long long int arr_7 [14] ;
unsigned short arr_2 [24] ;
unsigned short arr_9 [14] [14] ;
_Bool arr_10 [14] ;
unsigned long long int arr_11 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = -2172113689277358372LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)148;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? 12153811500358335010ULL : 14847465034811018361ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (unsigned short)5189;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_9 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)23354 : (unsigned short)52232;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? 297871317051875119ULL : 3140571583253269769ULL;
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
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
