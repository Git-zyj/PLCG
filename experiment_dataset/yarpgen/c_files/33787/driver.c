#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-15390;
unsigned int var_3 = 2898675200U;
unsigned int var_5 = 368225137U;
unsigned char var_6 = (unsigned char)146;
short var_9 = (short)-2882;
_Bool var_10 = (_Bool)0;
long long int var_12 = -7177007530622917503LL;
unsigned int var_13 = 2832727654U;
signed char var_14 = (signed char)-46;
_Bool var_16 = (_Bool)1;
int zero = 0;
unsigned int var_18 = 350995277U;
unsigned int var_19 = 1883335198U;
signed char var_20 = (signed char)-2;
unsigned char var_21 = (unsigned char)180;
short var_22 = (short)-22522;
unsigned int var_23 = 191433763U;
unsigned int var_24 = 464754327U;
short var_25 = (short)10519;
unsigned char var_26 = (unsigned char)170;
_Bool arr_0 [11] ;
unsigned int arr_1 [11] ;
unsigned int arr_2 [11] [11] ;
unsigned int arr_3 [11] [11] [11] ;
unsigned char arr_7 [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = 841080671U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_2 [i_0] [i_1] = 1429935192U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 1046451369U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (unsigned char)84;
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
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                hash(&seed, arr_7 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
