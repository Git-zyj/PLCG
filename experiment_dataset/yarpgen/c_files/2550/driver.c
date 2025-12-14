#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-25828;
int var_3 = 1363118809;
int var_4 = 1704434887;
short var_6 = (short)-6156;
unsigned short var_7 = (unsigned short)6453;
unsigned short var_9 = (unsigned short)19096;
signed char var_10 = (signed char)-53;
unsigned short var_11 = (unsigned short)36988;
short var_12 = (short)9839;
unsigned short var_13 = (unsigned short)20760;
_Bool var_15 = (_Bool)0;
short var_16 = (short)1503;
unsigned int var_17 = 3187349161U;
int zero = 0;
short var_18 = (short)-27058;
short var_19 = (short)6552;
signed char var_20 = (signed char)109;
unsigned int var_21 = 1925118242U;
int var_22 = 2096534926;
signed char var_23 = (signed char)50;
unsigned long long int var_24 = 18049942361251877019ULL;
signed char var_25 = (signed char)56;
short arr_0 [17] [17] ;
unsigned short arr_1 [17] ;
short arr_4 [23] [23] ;
unsigned long long int arr_11 [13] ;
signed char arr_2 [17] ;
short arr_3 [17] [17] ;
short arr_7 [23] ;
int arr_10 [13] ;
int arr_14 [13] ;
signed char arr_15 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_0 [i_0] [i_1] = (short)11252;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (unsigned short)26808;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_4 [i_0] [i_1] = (short)-5998;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_11 [i_0] = 7729643263853039493ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (signed char)-6;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_3 [i_0] [i_1] = (short)27004;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_7 [i_0] = (short)-12221;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? 110061073 : 2049793723;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? 338224045 : 722190604;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_15 [i_0] = (i_0 % 2 == 0) ? (signed char)-103 : (signed char)-22;
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
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_15 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
