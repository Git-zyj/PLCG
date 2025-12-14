#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2098676533U;
unsigned char var_1 = (unsigned char)230;
unsigned char var_2 = (unsigned char)29;
unsigned int var_3 = 2555848527U;
unsigned int var_6 = 3595175598U;
signed char var_7 = (signed char)44;
unsigned long long int var_8 = 11249827281770800417ULL;
unsigned int var_10 = 4120076836U;
unsigned char var_12 = (unsigned char)208;
int zero = 0;
unsigned char var_13 = (unsigned char)63;
long long int var_14 = 1685268909421441932LL;
unsigned short var_15 = (unsigned short)63370;
short var_16 = (short)18791;
unsigned char var_17 = (unsigned char)146;
int var_18 = 336683532;
short var_19 = (short)16284;
signed char var_20 = (signed char)0;
unsigned char var_21 = (unsigned char)37;
_Bool var_22 = (_Bool)0;
_Bool var_23 = (_Bool)0;
short var_24 = (short)2750;
int var_25 = 1311835113;
unsigned char var_26 = (unsigned char)58;
_Bool arr_2 [11] ;
int arr_3 [11] ;
long long int arr_5 [11] [11] [11] ;
unsigned int arr_6 [11] ;
unsigned int arr_10 [11] [11] [11] ;
_Bool arr_15 [12] ;
signed char arr_16 [12] [12] ;
int arr_19 [17] ;
unsigned short arr_20 [17] ;
unsigned int arr_4 [11] ;
unsigned char arr_8 [11] ;
unsigned char arr_12 [11] [11] [11] ;
unsigned char arr_17 [12] ;
unsigned char arr_18 [12] ;
short arr_21 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = 148560752;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 3519017918594859789LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_6 [i_0] = 3088569602U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 2539214642U : 1807162084U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_15 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_16 [i_0] [i_1] = (signed char)47;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_19 [i_0] = -320168683;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_20 [i_0] = (unsigned short)11901;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = 3260662483U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_8 [i_0] = (unsigned char)107;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned char)227 : (unsigned char)124;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_17 [i_0] = (unsigned char)181;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_18 [i_0] = (unsigned char)87;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_21 [i_0] = (short)-6690;
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
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                hash(&seed, arr_12 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_17 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_18 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_21 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
