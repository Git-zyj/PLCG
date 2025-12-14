#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)6297;
int var_1 = -874593964;
_Bool var_2 = (_Bool)1;
long long int var_3 = -5514402816827029740LL;
signed char var_4 = (signed char)-2;
short var_6 = (short)31834;
_Bool var_7 = (_Bool)1;
long long int var_8 = -5460245296556150535LL;
int var_9 = -560356721;
int var_10 = -2119365847;
unsigned char var_11 = (unsigned char)225;
_Bool var_12 = (_Bool)0;
int zero = 0;
int var_13 = 1048113072;
int var_14 = -109508617;
_Bool var_15 = (_Bool)1;
signed char var_16 = (signed char)-64;
long long int var_17 = -6783530289219985392LL;
int var_18 = 2112847028;
short var_19 = (short)21938;
int var_20 = -67085541;
unsigned long long int var_21 = 12144365717900098614ULL;
int var_22 = -1071689224;
_Bool var_23 = (_Bool)1;
unsigned char var_24 = (unsigned char)43;
unsigned char var_25 = (unsigned char)149;
unsigned long long int var_26 = 15179431966698262349ULL;
long long int var_27 = 1831824177896977699LL;
unsigned short var_28 = (unsigned short)30325;
short var_29 = (short)-2668;
int var_30 = 1403911924;
_Bool var_31 = (_Bool)0;
_Bool var_32 = (_Bool)1;
unsigned short var_33 = (unsigned short)50253;
int arr_2 [14] ;
unsigned int arr_4 [14] [14] ;
int arr_5 [14] [14] ;
short arr_10 [24] [24] ;
unsigned long long int arr_11 [24] [24] ;
unsigned char arr_12 [24] ;
unsigned long long int arr_13 [24] [24] [24] ;
long long int arr_14 [24] ;
int arr_16 [24] ;
long long int arr_17 [24] ;
long long int arr_18 [24] [24] ;
unsigned char arr_19 [16] [16] ;
int arr_20 [16] ;
unsigned long long int arr_29 [16] [16] [16] [16] ;
long long int arr_37 [25] ;
_Bool arr_42 [25] [25] [25] ;
long long int arr_9 [14] ;
unsigned char arr_23 [16] ;
short arr_35 [16] [16] [16] [16] ;
int arr_36 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = -2029992990;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_4 [i_0] [i_1] = 1162573581U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_5 [i_0] [i_1] = 1755115647;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_10 [i_0] [i_1] = (short)6886;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_11 [i_0] [i_1] = 14211056523999717235ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_12 [i_0] = (unsigned char)102;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = 6546978971320958529ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_14 [i_0] = -1583515726533762160LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_16 [i_0] = (i_0 % 2 == 0) ? -1260020682 : -476212713;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_17 [i_0] = 437252105746827924LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_18 [i_0] [i_1] = 7939432007306285910LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_19 [i_0] [i_1] = (unsigned char)61;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_20 [i_0] = 192849820;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_29 [i_0] [i_1] [i_2] [i_3] = 7162971968770497700ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_37 [i_0] = -1695021249641825854LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_42 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? -314083094696986482LL : -5883082465529585575LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_23 [i_0] = (unsigned char)117;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_35 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (short)-20055 : (short)13489;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_36 [i_0] = 1841458206;
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
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_23 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    hash(&seed, arr_35 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_36 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
