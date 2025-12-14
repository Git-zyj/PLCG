#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)10683;
long long int var_1 = -2914253506775764378LL;
unsigned char var_2 = (unsigned char)106;
long long int var_3 = -8241311551888475485LL;
long long int var_4 = -6200070271521203328LL;
unsigned short var_5 = (unsigned short)41370;
unsigned int var_6 = 1384124053U;
unsigned long long int var_7 = 12712901688284951520ULL;
signed char var_8 = (signed char)-99;
unsigned long long int var_9 = 15915237105768005209ULL;
_Bool var_10 = (_Bool)1;
int zero = 0;
long long int var_11 = 940452386976257095LL;
short var_12 = (short)14246;
short var_13 = (short)17715;
unsigned char var_14 = (unsigned char)103;
signed char var_15 = (signed char)116;
unsigned int var_16 = 1703683926U;
long long int var_17 = 4146908222601100771LL;
int var_18 = -1802516330;
unsigned long long int var_19 = 12675299835475740756ULL;
unsigned long long int var_20 = 15817696109318903834ULL;
unsigned short var_21 = (unsigned short)61733;
_Bool var_22 = (_Bool)1;
unsigned char var_23 = (unsigned char)41;
unsigned short var_24 = (unsigned short)30129;
unsigned long long int var_25 = 10249980075568298646ULL;
long long int var_26 = 2257870412444526137LL;
unsigned int var_27 = 1273106313U;
int var_28 = -296690775;
signed char var_29 = (signed char)35;
signed char var_30 = (signed char)5;
signed char var_31 = (signed char)-58;
unsigned char var_32 = (unsigned char)231;
short var_33 = (short)-31309;
unsigned short var_34 = (unsigned short)32683;
unsigned short var_35 = (unsigned short)20232;
int var_36 = -95166722;
_Bool var_37 = (_Bool)1;
signed char var_38 = (signed char)-89;
unsigned int var_39 = 554228049U;
unsigned int var_40 = 4223264436U;
short var_41 = (short)-30655;
_Bool var_42 = (_Bool)0;
unsigned int var_43 = 2862821795U;
unsigned char var_44 = (unsigned char)159;
unsigned char var_45 = (unsigned char)73;
unsigned long long int var_46 = 2311283016064715271ULL;
unsigned long long int var_47 = 617328762158689852ULL;
long long int var_48 = 4343507248859205936LL;
unsigned char var_49 = (unsigned char)87;
unsigned char var_50 = (unsigned char)94;
unsigned int var_51 = 2513932262U;
unsigned long long int var_52 = 14731195464136591667ULL;
_Bool var_53 = (_Bool)1;
unsigned short var_54 = (unsigned short)52476;
int arr_0 [13] [13] ;
int arr_1 [13] ;
unsigned int arr_4 [23] [23] ;
int arr_6 [23] ;
unsigned char arr_8 [23] ;
_Bool arr_9 [23] [23] [23] ;
unsigned short arr_10 [23] [23] ;
unsigned short arr_12 [23] [23] [23] ;
unsigned int arr_13 [23] [23] [23] ;
long long int arr_14 [23] ;
signed char arr_15 [23] [23] [23] ;
short arr_16 [23] [23] [23] [23] ;
unsigned char arr_17 [23] [23] [23] [23] [23] [23] ;
unsigned char arr_22 [23] [23] ;
unsigned short arr_25 [23] [23] ;
unsigned char arr_26 [23] ;
signed char arr_27 [23] ;
int arr_32 [23] [23] [23] [23] [23] [23] ;
_Bool arr_33 [23] [23] [23] ;
unsigned int arr_38 [23] [23] [23] [23] ;
unsigned long long int arr_47 [23] [23] [23] [23] [23] ;
unsigned short arr_55 [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = -1466316665;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = 1277638446;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_4 [i_0] [i_1] = 3995259153U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = 1239538471;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_8 [i_0] = (unsigned char)135;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_10 [i_0] [i_1] = (unsigned short)32047;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (unsigned short)51692;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = 2742470437U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_14 [i_0] = 7527312770950228383LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = (signed char)-126;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_16 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (short)27149 : (short)-11427;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned char)20;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_22 [i_0] [i_1] = (unsigned char)13;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_25 [i_0] [i_1] = (unsigned short)522;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_26 [i_0] = (unsigned char)144;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_27 [i_0] = (signed char)-62;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            arr_32 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 130951993;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_33 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_38 [i_0] [i_1] [i_2] [i_3] = 877028199U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        arr_47 [i_0] [i_1] [i_2] [i_3] [i_4] = 12128246053953532143ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_55 [i_0] [i_1] [i_2] = (unsigned short)24708;
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
    hash(&seed, var_42);
    hash(&seed, var_43);
    hash(&seed, var_44);
    hash(&seed, var_45);
    hash(&seed, var_46);
    hash(&seed, var_47);
    hash(&seed, var_48);
    hash(&seed, var_49);
    hash(&seed, var_50);
    hash(&seed, var_51);
    hash(&seed, var_52);
    hash(&seed, var_53);
    hash(&seed, var_54);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
