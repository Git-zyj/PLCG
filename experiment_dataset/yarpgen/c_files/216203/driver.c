#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1053425185;
unsigned short var_5 = (unsigned short)34553;
unsigned char var_6 = (unsigned char)201;
unsigned int var_9 = 124935437U;
unsigned short var_12 = (unsigned short)18912;
unsigned int var_14 = 2045115913U;
long long int var_15 = 3711782134893091403LL;
long long int var_16 = -802541174730962842LL;
int zero = 0;
unsigned long long int var_18 = 8752805994614506625ULL;
unsigned int var_19 = 1186639804U;
unsigned int var_20 = 1458070605U;
signed char var_21 = (signed char)-13;
unsigned int var_22 = 755326328U;
_Bool var_23 = (_Bool)1;
unsigned char var_24 = (unsigned char)70;
unsigned char var_25 = (unsigned char)155;
unsigned long long int arr_0 [18] ;
short arr_1 [18] ;
unsigned char arr_4 [18] [18] ;
unsigned int arr_5 [18] [18] ;
unsigned int arr_10 [16] ;
unsigned char arr_11 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = 15106103600026778200ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (short)22722;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)148;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_5 [i_0] [i_1] = 2771217046U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_10 [i_0] = 2762272135U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_11 [i_0] [i_1] = (unsigned char)238;
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
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
