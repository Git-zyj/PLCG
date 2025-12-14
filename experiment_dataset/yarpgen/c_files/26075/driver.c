#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)1616;
unsigned char var_2 = (unsigned char)39;
long long int var_5 = -1541430110023190615LL;
unsigned char var_7 = (unsigned char)253;
unsigned int var_9 = 3093291292U;
unsigned int var_11 = 1323995703U;
int var_12 = 1097972908;
unsigned short var_13 = (unsigned short)29025;
unsigned short var_14 = (unsigned short)1325;
int zero = 0;
long long int var_17 = 5501130930229627743LL;
unsigned char var_18 = (unsigned char)79;
int var_19 = 1422599178;
long long int var_20 = -4582810710453816893LL;
signed char var_21 = (signed char)(-127 - 1);
long long int var_22 = -6294245754493093187LL;
short var_23 = (short)7808;
signed char var_24 = (signed char)-10;
unsigned short var_25 = (unsigned short)63648;
unsigned int var_26 = 924586633U;
unsigned int var_27 = 3114249554U;
short var_28 = (short)-20578;
_Bool arr_6 [20] [20] ;
unsigned int arr_10 [20] [20] ;
unsigned char arr_14 [20] [20] [20] ;
unsigned char arr_16 [20] [20] [20] ;
long long int arr_17 [20] [20] [20] ;
long long int arr_18 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_6 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_10 [i_0] [i_1] = 4210767332U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned char)235 : (unsigned char)190;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = (unsigned char)168;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = -3049540434224814631LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_18 [i_0] = 590634975624323636LL;
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
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                hash(&seed, arr_17 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_18 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
