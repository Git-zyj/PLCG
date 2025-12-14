#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-92;
int var_3 = -2037878980;
_Bool var_4 = (_Bool)0;
long long int var_7 = 6920860198919116982LL;
unsigned short var_10 = (unsigned short)61449;
int var_11 = 907737993;
int var_12 = -1482921661;
_Bool var_13 = (_Bool)0;
long long int var_15 = 3335439778562753776LL;
unsigned int var_16 = 3501639710U;
unsigned int var_17 = 571060770U;
int zero = 0;
short var_18 = (short)17451;
_Bool var_19 = (_Bool)1;
short var_20 = (short)-218;
signed char var_21 = (signed char)119;
signed char var_22 = (signed char)34;
_Bool var_23 = (_Bool)0;
signed char var_24 = (signed char)-6;
short var_25 = (short)-28279;
unsigned char var_26 = (unsigned char)22;
long long int var_27 = -1897645568361095377LL;
long long int var_28 = 5607352614386109210LL;
short var_29 = (short)27230;
_Bool var_30 = (_Bool)1;
short var_31 = (short)-9737;
short var_32 = (short)-32269;
int var_33 = 1793933058;
long long int var_34 = 6196325311938325546LL;
_Bool var_35 = (_Bool)1;
signed char arr_0 [15] ;
unsigned char arr_3 [15] ;
signed char arr_4 [17] ;
long long int arr_5 [17] ;
long long int arr_6 [17] ;
signed char arr_7 [17] [17] ;
_Bool arr_8 [13] ;
_Bool arr_10 [13] ;
long long int arr_11 [13] ;
signed char arr_12 [13] [13] ;
signed char arr_13 [25] ;
int arr_14 [25] [25] ;
unsigned char arr_15 [25] [25] ;
unsigned int arr_16 [25] ;
unsigned long long int arr_17 [25] ;
int arr_18 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (signed char)-98;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (unsigned char)11;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (signed char)21 : (signed char)-113;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 2123252656274719099LL : -1642307202811582614LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_6 [i_0] = -4536703580831758765LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_7 [i_0] [i_1] = (signed char)-11;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_8 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_11 [i_0] = -8381356454750770248LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_12 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)83 : (signed char)97;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_13 [i_0] = (signed char)-116;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_14 [i_0] [i_1] = 1769137410;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_15 [i_0] [i_1] = (unsigned char)37;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_16 [i_0] = 3603138703U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_17 [i_0] = 11562328376163684273ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_18 [i_0] [i_1] = 1178104587;
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
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_17 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_18 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
