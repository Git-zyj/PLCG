#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 7258973889390082692LL;
signed char var_2 = (signed char)-94;
short var_3 = (short)-22527;
unsigned long long int var_4 = 9585238100193750114ULL;
unsigned short var_5 = (unsigned short)23952;
unsigned short var_6 = (unsigned short)45903;
unsigned int var_7 = 676296845U;
unsigned short var_8 = (unsigned short)27496;
unsigned int var_9 = 31864821U;
_Bool var_10 = (_Bool)0;
signed char var_11 = (signed char)60;
int zero = 0;
long long int var_13 = 8304483938647251672LL;
long long int var_14 = 5395834183366350974LL;
unsigned long long int var_15 = 7020614623166458743ULL;
unsigned long long int var_16 = 12064122965523750570ULL;
signed char var_17 = (signed char)-97;
signed char var_18 = (signed char)-75;
signed char var_19 = (signed char)-93;
unsigned char var_20 = (unsigned char)80;
unsigned char var_21 = (unsigned char)12;
signed char arr_0 [24] ;
unsigned int arr_1 [24] ;
unsigned char arr_3 [24] [24] ;
unsigned long long int arr_4 [24] [24] ;
int arr_11 [14] ;
signed char arr_12 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (signed char)27;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = 325256946U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)161;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_4 [i_0] [i_1] = 3360227055767743389ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_11 [i_0] = -2117577412;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_12 [i_0] = (signed char)-92;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_12 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
