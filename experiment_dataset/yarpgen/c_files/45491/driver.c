#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)33;
long long int var_1 = -6505212841846533139LL;
unsigned short var_2 = (unsigned short)13609;
unsigned int var_3 = 3900253143U;
unsigned int var_5 = 4092878227U;
unsigned int var_6 = 2258607171U;
long long int var_7 = -8792265212200993958LL;
unsigned long long int var_8 = 5799699557037776436ULL;
_Bool var_9 = (_Bool)1;
unsigned int var_10 = 2501089705U;
signed char var_11 = (signed char)-100;
_Bool var_13 = (_Bool)0;
unsigned long long int var_14 = 1697288722967039227ULL;
unsigned long long int var_15 = 6699470615028156146ULL;
signed char var_16 = (signed char)5;
unsigned int var_17 = 1870667586U;
int zero = 0;
unsigned short var_18 = (unsigned short)9311;
unsigned long long int var_19 = 14864046066834250190ULL;
unsigned int var_20 = 761161842U;
long long int var_21 = -6238635626226689982LL;
short var_22 = (short)-32169;
long long int var_23 = 881718293155686634LL;
signed char var_24 = (signed char)16;
signed char var_25 = (signed char)-30;
_Bool var_26 = (_Bool)1;
unsigned int var_27 = 2479197482U;
_Bool var_28 = (_Bool)0;
unsigned short var_29 = (unsigned short)52489;
unsigned char var_30 = (unsigned char)236;
_Bool var_31 = (_Bool)1;
unsigned long long int var_32 = 6748159633966227701ULL;
unsigned int var_33 = 1858786285U;
unsigned long long int var_34 = 12161608811300957259ULL;
_Bool var_35 = (_Bool)1;
_Bool var_36 = (_Bool)1;
unsigned char var_37 = (unsigned char)84;
unsigned long long int var_38 = 17701266581327792606ULL;
int var_39 = 950833365;
int arr_5 [11] [11] ;
unsigned long long int arr_6 [11] [11] ;
int arr_8 [11] ;
unsigned short arr_17 [11] ;
signed char arr_30 [24] [24] ;
long long int arr_31 [24] ;
unsigned int arr_32 [24] [24] [24] ;
unsigned int arr_33 [24] [24] [24] ;
long long int arr_36 [24] ;
int arr_39 [17] [17] ;
unsigned short arr_44 [17] [17] [17] ;
unsigned int arr_48 [17] [17] [17] [17] [17] [17] ;
int arr_51 [12] ;
unsigned long long int arr_7 [11] [11] [11] ;
_Bool arr_18 [11] [11] [11] ;
signed char arr_25 [11] ;
long long int arr_38 [24] [24] [24] ;
int arr_41 [17] ;
int arr_42 [17] ;
int arr_55 [12] ;
unsigned short arr_66 [15] [15] [15] ;
int arr_69 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_5 [i_0] [i_1] = 1939508333;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_6 [i_0] [i_1] = (i_1 % 2 == 0) ? 183220929910336279ULL : 13894066941792706270ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_8 [i_0] = -1357419254;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_17 [i_0] = (i_0 % 2 == 0) ? (unsigned short)37899 : (unsigned short)11117;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_30 [i_0] [i_1] = (signed char)-97;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_31 [i_0] = -7391104169269466200LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_32 [i_0] [i_1] [i_2] = 2117616218U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_33 [i_0] [i_1] [i_2] = 3640832589U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_36 [i_0] = (i_0 % 2 == 0) ? 7255012504711096728LL : 2872982335567720633LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_39 [i_0] [i_1] = 1722229161;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_44 [i_0] [i_1] [i_2] = (unsigned short)10348;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 17; ++i_5) 
                            arr_48 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 3350845577U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_51 [i_0] = 1465015077;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 7948208140533611461ULL : 17988194495843002007ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_25 [i_0] = (i_0 % 2 == 0) ? (signed char)65 : (signed char)36;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_38 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 2863760351133492359LL : -8620639494348013338LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_41 [i_0] = -1429159410;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_42 [i_0] = 1944021414;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_55 [i_0] = -599755324;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_66 [i_0] [i_1] [i_2] = (unsigned short)30069;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_69 [i_0] = (i_0 % 2 == 0) ? -905647409 : -76452063;
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
    hash(&seed, var_36);
    hash(&seed, var_37);
    hash(&seed, var_38);
    hash(&seed, var_39);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                hash(&seed, arr_7 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                hash(&seed, arr_18 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_25 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                hash(&seed, arr_38 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_41 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_42 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_55 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                hash(&seed, arr_66 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_69 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
