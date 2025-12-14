#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-50;
unsigned char var_2 = (unsigned char)142;
_Bool var_3 = (_Bool)0;
signed char var_4 = (signed char)55;
unsigned int var_5 = 2175750950U;
short var_7 = (short)-18977;
signed char var_11 = (signed char)89;
long long int var_13 = -2153132430271658493LL;
unsigned short var_14 = (unsigned short)27866;
int zero = 0;
unsigned int var_15 = 1618196958U;
unsigned char var_16 = (unsigned char)43;
int var_17 = -2056790750;
short var_18 = (short)-5295;
unsigned short var_19 = (unsigned short)46276;
unsigned int var_20 = 888202651U;
unsigned int var_21 = 3310026831U;
long long int var_22 = -6419688735842953515LL;
unsigned long long int var_23 = 5991243026090298925ULL;
short var_24 = (short)23232;
_Bool var_25 = (_Bool)1;
unsigned long long int var_26 = 12682632328062192012ULL;
int var_27 = -2118328160;
unsigned short arr_1 [23] [23] ;
signed char arr_2 [23] ;
signed char arr_4 [23] [23] [23] ;
unsigned int arr_6 [23] [23] [23] ;
int arr_8 [23] [23] ;
unsigned short arr_9 [23] ;
unsigned char arr_10 [23] ;
_Bool arr_11 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)21758;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (signed char)28;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (signed char)-114;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 2389758984U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_8 [i_0] [i_1] = -1079054416;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_9 [i_0] = (unsigned short)61645;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? (unsigned char)254 : (unsigned char)54;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_11 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
