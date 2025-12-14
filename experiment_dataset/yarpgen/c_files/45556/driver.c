#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)856;
unsigned int var_2 = 189338091U;
short var_3 = (short)-22229;
int var_4 = -1594537015;
signed char var_5 = (signed char)15;
unsigned short var_6 = (unsigned short)1453;
unsigned long long int var_7 = 7542624325658729868ULL;
int var_8 = 1266325992;
unsigned int var_9 = 970346808U;
unsigned int var_10 = 4066532346U;
int zero = 0;
long long int var_11 = 3384593642799230250LL;
unsigned int var_12 = 1515142691U;
unsigned short var_13 = (unsigned short)51154;
signed char var_14 = (signed char)39;
unsigned long long int var_15 = 7613449384932411597ULL;
unsigned int var_16 = 1272774193U;
_Bool var_17 = (_Bool)1;
short var_18 = (short)-2774;
unsigned char var_19 = (unsigned char)224;
unsigned int var_20 = 558321508U;
unsigned int var_21 = 45605755U;
_Bool var_22 = (_Bool)0;
short var_23 = (short)20224;
unsigned int arr_0 [10] [10] ;
unsigned short arr_1 [10] ;
unsigned short arr_2 [11] ;
long long int arr_3 [11] ;
unsigned int arr_5 [12] [12] ;
_Bool arr_6 [12] ;
unsigned char arr_7 [12] ;
int arr_4 [11] ;
unsigned char arr_8 [12] ;
unsigned int arr_13 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_0 [i_0] [i_1] = 2727021727U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (unsigned short)36567 : (unsigned short)5320;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (unsigned short)37536;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = 6925616043303177160LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_5 [i_0] [i_1] = 3735530207U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_6 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_7 [i_0] = (unsigned char)160;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = -861217912;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_8 [i_0] = (unsigned char)185;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_13 [i_0] [i_1] = (i_0 % 2 == 0) ? 369842639U : 3119037397U;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
