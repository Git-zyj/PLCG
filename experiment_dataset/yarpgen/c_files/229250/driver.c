#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)28229;
long long int var_4 = 115701559654311525LL;
signed char var_5 = (signed char)-61;
signed char var_6 = (signed char)35;
unsigned short var_7 = (unsigned short)16683;
signed char var_8 = (signed char)36;
unsigned short var_9 = (unsigned short)56020;
signed char var_10 = (signed char)109;
signed char var_12 = (signed char)58;
short var_13 = (short)-23735;
int zero = 0;
unsigned short var_14 = (unsigned short)3830;
signed char var_15 = (signed char)75;
short var_16 = (short)-15836;
unsigned long long int var_17 = 13318001638976915175ULL;
_Bool var_18 = (_Bool)1;
unsigned int arr_0 [16] [16] ;
long long int arr_1 [16] ;
unsigned int arr_2 [16] ;
long long int arr_3 [16] ;
long long int arr_5 [16] ;
long long int arr_9 [22] ;
unsigned long long int arr_10 [22] ;
unsigned int arr_12 [22] ;
unsigned long long int arr_13 [22] ;
signed char arr_4 [16] ;
signed char arr_7 [16] [16] [16] ;
unsigned long long int arr_8 [16] ;
signed char arr_11 [22] ;
int arr_14 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = 3390933912U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = 2864426040504077524LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 1121653985U : 4146082713U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = 1510728979573330639LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 7715966658453944602LL : -4116215451568416161LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_9 [i_0] = -7782750902133681301LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_10 [i_0] = 8179558843674876324ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_12 [i_0] = 2627016455U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_13 [i_0] = 5689210698592736070ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (signed char)-56 : (signed char)121;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (signed char)72 : (signed char)-63;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? 4980921928677684241ULL : 6990349254266397784ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_11 [i_0] = (signed char)-26;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_14 [i_0] = 1659743575;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                hash(&seed, arr_7 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_14 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
