#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2100036564U;
unsigned char var_1 = (unsigned char)56;
long long int var_2 = -3892223867158282144LL;
_Bool var_3 = (_Bool)1;
int var_5 = -1374958426;
_Bool var_15 = (_Bool)0;
unsigned int var_17 = 600982054U;
int zero = 0;
_Bool var_18 = (_Bool)0;
long long int var_19 = -696967635638121552LL;
unsigned long long int var_20 = 2004462760643249154ULL;
unsigned char var_21 = (unsigned char)128;
_Bool var_22 = (_Bool)0;
unsigned int var_23 = 1232074855U;
signed char arr_1 [13] [13] ;
unsigned char arr_2 [13] ;
_Bool arr_5 [13] [13] [13] ;
short arr_6 [13] [13] [13] ;
unsigned short arr_8 [13] [13] ;
unsigned short arr_12 [13] [13] ;
unsigned long long int arr_14 [13] [13] ;
short arr_9 [13] ;
int arr_10 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)110;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (unsigned char)53;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (short)-9081;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_8 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)1466 : (unsigned short)64077;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_12 [i_0] [i_1] = (unsigned short)20728;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_14 [i_0] [i_1] = 11934879424062478871ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_9 [i_0] = (short)-32158;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_10 [i_0] = 1282609429;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
