#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)14589;
unsigned short var_1 = (unsigned short)61385;
unsigned long long int var_2 = 15384593538097247272ULL;
short var_3 = (short)-8592;
short var_5 = (short)-5328;
long long int var_7 = -7193526275366538735LL;
int var_8 = 1259309615;
short var_11 = (short)-5711;
signed char var_12 = (signed char)122;
_Bool var_13 = (_Bool)1;
int var_14 = 45456461;
unsigned short var_16 = (unsigned short)24426;
int var_18 = -606206671;
int zero = 0;
signed char var_19 = (signed char)-47;
unsigned long long int var_20 = 15231417605899626893ULL;
long long int var_21 = -3350029855835900063LL;
unsigned char var_22 = (unsigned char)115;
_Bool var_23 = (_Bool)1;
int var_24 = 642507826;
unsigned short var_25 = (unsigned short)44067;
long long int var_26 = 6870665173743457472LL;
_Bool arr_0 [19] [19] ;
unsigned short arr_1 [19] [19] ;
_Bool arr_2 [19] ;
short arr_5 [19] ;
long long int arr_6 [19] [19] ;
short arr_7 [19] [19] ;
_Bool arr_3 [19] ;
signed char arr_4 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)43985;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = (short)16341;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_6 [i_0] [i_1] = -3372438634966453436LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_7 [i_0] [i_1] = (short)26292;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (signed char)-67 : (signed char)115;
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
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
