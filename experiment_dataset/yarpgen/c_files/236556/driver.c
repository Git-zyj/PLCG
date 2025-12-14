#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)31866;
long long int var_2 = -8846313274608488015LL;
unsigned int var_3 = 1079499664U;
unsigned short var_4 = (unsigned short)62203;
signed char var_6 = (signed char)80;
signed char var_7 = (signed char)-62;
long long int var_9 = 6695300031491611376LL;
_Bool var_12 = (_Bool)1;
long long int var_13 = -5228266420838782015LL;
_Bool var_14 = (_Bool)1;
int var_15 = 1323824532;
unsigned char var_17 = (unsigned char)196;
unsigned long long int var_18 = 8700252547193688089ULL;
int zero = 0;
int var_19 = -1509292546;
_Bool var_20 = (_Bool)0;
_Bool var_21 = (_Bool)1;
_Bool var_22 = (_Bool)0;
unsigned short var_23 = (unsigned short)25423;
_Bool var_24 = (_Bool)0;
long long int var_25 = -286550516364533763LL;
short var_26 = (short)18492;
unsigned int var_27 = 1598945041U;
unsigned int var_28 = 374666751U;
_Bool arr_0 [12] ;
unsigned short arr_3 [12] ;
unsigned short arr_4 [12] ;
int arr_7 [12] [12] ;
long long int arr_9 [12] [12] ;
unsigned short arr_10 [12] [12] [12] [12] ;
unsigned short arr_12 [12] ;
short arr_5 [12] ;
int arr_6 [12] ;
unsigned long long int arr_13 [12] [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = (unsigned short)18143;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = (unsigned short)45924;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_7 [i_0] [i_1] = 1899235889;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_9 [i_0] [i_1] = -3052149926823378434LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (unsigned short)49010;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_12 [i_0] = (unsigned short)1849;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = (short)-2127;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_6 [i_0] = -1346582345;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = 7427074332030439658ULL;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    hash(&seed, arr_13 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
