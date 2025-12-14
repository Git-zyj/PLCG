#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)6091;
int var_1 = 1623714209;
unsigned int var_3 = 993537125U;
unsigned long long int var_4 = 2636753273122937055ULL;
unsigned short var_10 = (unsigned short)52952;
short var_11 = (short)-44;
long long int var_12 = 9188629327397540452LL;
_Bool var_15 = (_Bool)1;
int zero = 0;
unsigned short var_17 = (unsigned short)2156;
unsigned int var_18 = 2254376632U;
signed char var_19 = (signed char)-97;
_Bool var_20 = (_Bool)0;
_Bool var_21 = (_Bool)0;
int var_22 = 1827814087;
signed char var_23 = (signed char)111;
unsigned long long int var_24 = 11470178608806315378ULL;
unsigned char var_25 = (unsigned char)43;
_Bool var_26 = (_Bool)0;
unsigned int var_27 = 608332495U;
unsigned char var_28 = (unsigned char)31;
unsigned int arr_0 [14] ;
signed char arr_1 [14] [14] ;
short arr_2 [14] [14] ;
long long int arr_3 [14] [14] ;
_Bool arr_9 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = 2973061662U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)-53;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_2 [i_0] [i_1] = (short)-6678;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_3 [i_0] [i_1] = -1128828044182860175LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_9 [i_0] [i_1] = (_Bool)0;
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
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
