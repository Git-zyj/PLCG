#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_1 = 12629669761454370041ULL;
unsigned long long int var_2 = 8430981804858858787ULL;
long long int var_3 = -3834538563051488553LL;
_Bool var_4 = (_Bool)1;
short var_7 = (short)-26454;
unsigned short var_8 = (unsigned short)55678;
unsigned long long int var_9 = 9548440863443442511ULL;
unsigned long long int var_10 = 8985198853446389392ULL;
unsigned int var_13 = 837204009U;
signed char var_14 = (signed char)-93;
unsigned short var_15 = (unsigned short)48219;
unsigned long long int var_18 = 10924491281455931932ULL;
int zero = 0;
unsigned long long int var_20 = 16636244012932615321ULL;
unsigned short var_21 = (unsigned short)21041;
unsigned long long int var_22 = 10673258216019870360ULL;
int var_23 = 1986461213;
unsigned char var_24 = (unsigned char)201;
short arr_0 [22] [22] ;
unsigned int arr_1 [22] [22] ;
signed char arr_2 [22] [22] ;
unsigned int arr_5 [25] ;
unsigned short arr_7 [25] [25] [25] ;
unsigned int arr_8 [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_0 [i_0] [i_1] = (short)28317;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_1 [i_0] [i_1] = 1414746915U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)6;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = 3064370033U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (unsigned short)9381;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = 2192139110U;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                hash(&seed, arr_8 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
