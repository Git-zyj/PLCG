#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)228;
unsigned long long int var_1 = 14283646997572407823ULL;
short var_2 = (short)18760;
int var_3 = 1043164056;
short var_4 = (short)-30134;
int var_5 = 2028766857;
short var_6 = (short)-31081;
short var_7 = (short)5795;
short var_8 = (short)10867;
short var_9 = (short)13275;
short var_10 = (short)-13108;
unsigned int var_11 = 4083124347U;
int var_12 = -2035827545;
short var_13 = (short)-17788;
unsigned char var_14 = (unsigned char)85;
unsigned char var_15 = (unsigned char)49;
short var_16 = (short)30268;
short var_17 = (short)-27836;
int zero = 0;
short var_18 = (short)22156;
unsigned char var_19 = (unsigned char)2;
unsigned int var_20 = 2754104710U;
int var_21 = 1277107211;
unsigned char var_22 = (unsigned char)83;
int var_23 = -885207380;
int var_24 = 738992283;
int var_25 = -1995393279;
unsigned long long int var_26 = 17942378999534750629ULL;
unsigned char var_27 = (unsigned char)245;
int var_28 = 1392630933;
unsigned char var_29 = (unsigned char)108;
int var_30 = 358277852;
signed char var_31 = (signed char)-60;
unsigned long long int var_32 = 484160548173418984ULL;
int var_33 = 871674623;
signed char var_34 = (signed char)-119;
short var_35 = (short)-25110;
unsigned int var_36 = 304430805U;
int var_37 = 1806056758;
short var_38 = (short)-1581;
short var_39 = (short)4201;
unsigned long long int var_40 = 9361630728590399516ULL;
unsigned long long int var_41 = 2566145160956849910ULL;
unsigned long long int arr_3 [13] ;
int arr_14 [13] [13] [13] ;
short arr_24 [15] ;
unsigned char arr_27 [15] [15] [15] [15] ;
unsigned long long int arr_28 [15] [15] ;
unsigned long long int arr_42 [15] [15] [15] [15] ;
_Bool arr_43 [15] [15] [15] [15] ;
signed char arr_47 [15] ;
short arr_48 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = 4647915137202308593ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? -1566273556 : -2099591722;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_24 [i_0] = (short)-9866;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_27 [i_0] [i_1] [i_2] [i_3] = (unsigned char)163;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_28 [i_0] [i_1] = 12969464201800667110ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_42 [i_0] [i_1] [i_2] [i_3] = 16675806927708033928ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_43 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_47 [i_0] = (signed char)10;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_48 [i_0] = (short)10490;
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
    hash(&seed, var_40);
    hash(&seed, var_41);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                hash(&seed, arr_14 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_24 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    hash(&seed, arr_27 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_28 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    hash(&seed, arr_42 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    hash(&seed, arr_43 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_47 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_48 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
