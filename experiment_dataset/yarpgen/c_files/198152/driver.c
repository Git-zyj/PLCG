#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-29185;
short var_1 = (short)-24785;
signed char var_2 = (signed char)114;
_Bool var_3 = (_Bool)1;
unsigned long long int var_4 = 3831786860803303063ULL;
short var_5 = (short)-7298;
short var_6 = (short)-9859;
short var_8 = (short)16544;
int var_10 = 629318596;
int var_11 = 237676262;
_Bool var_13 = (_Bool)0;
int var_16 = -1952569805;
int var_17 = 545454715;
unsigned long long int var_19 = 12395596554388302060ULL;
int zero = 0;
unsigned int var_20 = 242237242U;
signed char var_21 = (signed char)106;
unsigned long long int var_22 = 10337144264139113274ULL;
unsigned long long int var_23 = 17727812482488965151ULL;
unsigned int var_24 = 365040674U;
unsigned short var_25 = (unsigned short)26595;
_Bool var_26 = (_Bool)1;
signed char var_27 = (signed char)81;
int var_28 = -1541716384;
int var_29 = 284811412;
_Bool var_30 = (_Bool)0;
unsigned int var_31 = 1471268925U;
int var_32 = -2137349118;
unsigned long long int var_33 = 13387753851870170228ULL;
signed char arr_0 [24] [24] ;
short arr_1 [24] [24] ;
short arr_2 [24] ;
short arr_3 [24] ;
_Bool arr_4 [24] ;
unsigned int arr_5 [24] ;
short arr_6 [24] ;
unsigned int arr_8 [16] ;
int arr_7 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)-30 : (signed char)-28;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = (short)-20125;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (short)31060 : (short)501;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (short)-19484 : (short)9565;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = 3119363366U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (short)-10642 : (short)-11181;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_8 [i_0] = 145070144U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? 1535339674 : -1534072685;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
