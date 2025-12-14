#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)121;
_Bool var_2 = (_Bool)0;
unsigned char var_3 = (unsigned char)198;
long long int var_9 = -9220230279250334633LL;
unsigned short var_11 = (unsigned short)30368;
long long int var_12 = 7262227534343944173LL;
int var_14 = -342947115;
int var_15 = -1664271825;
_Bool var_16 = (_Bool)0;
short var_17 = (short)-4832;
short var_18 = (short)30051;
int zero = 0;
long long int var_19 = -8062719929361048168LL;
unsigned long long int var_20 = 3362405924841511685ULL;
short var_21 = (short)7096;
_Bool var_22 = (_Bool)0;
_Bool var_23 = (_Bool)0;
long long int var_24 = 662445073047293573LL;
unsigned int var_25 = 2566672863U;
unsigned long long int var_26 = 13814576720728485390ULL;
signed char var_27 = (signed char)-8;
_Bool var_28 = (_Bool)0;
_Bool var_29 = (_Bool)0;
unsigned char var_30 = (unsigned char)246;
int var_31 = -1661135468;
long long int var_32 = 7531916483998732721LL;
short var_33 = (short)13553;
signed char var_34 = (signed char)-6;
short var_35 = (short)8932;
int var_36 = 180273808;
short var_37 = (short)23226;
_Bool var_38 = (_Bool)0;
long long int var_39 = -8671346255629064039LL;
long long int var_40 = 8651703015183034799LL;
unsigned long long int var_41 = 4766038592170575070ULL;
unsigned long long int var_42 = 9354230465342838963ULL;
_Bool var_43 = (_Bool)0;
unsigned int var_44 = 1754595607U;
_Bool var_45 = (_Bool)0;
unsigned char var_46 = (unsigned char)15;
short var_47 = (short)21227;
long long int var_48 = -4760618780184674978LL;
_Bool var_49 = (_Bool)0;
unsigned char var_50 = (unsigned char)215;
_Bool var_51 = (_Bool)1;
unsigned char var_52 = (unsigned char)197;
short var_53 = (short)27694;
signed char var_54 = (signed char)28;
unsigned int var_55 = 695307873U;
_Bool arr_0 [25] ;
unsigned long long int arr_1 [25] ;
short arr_2 [25] [25] [25] ;
long long int arr_5 [25] [25] [25] [25] ;
unsigned char arr_6 [25] [25] [25] [25] ;
unsigned char arr_8 [25] [25] [25] [25] [25] ;
long long int arr_12 [25] [25] [25] ;
signed char arr_13 [25] [25] [25] ;
long long int arr_14 [25] ;
unsigned short arr_15 [25] [25] [25] [25] [25] [25] [25] ;
short arr_18 [10] ;
_Bool arr_20 [10] [10] ;
long long int arr_21 [10] [10] ;
long long int arr_25 [10] ;
long long int arr_27 [10] [10] [10] ;
int arr_28 [10] [10] [10] ;
signed char arr_31 [10] [10] [10] ;
short arr_32 [10] [10] ;
unsigned short arr_35 [10] [10] [10] [10] [10] [10] ;
unsigned long long int arr_36 [10] [10] [10] [10] ;
unsigned char arr_37 [10] [10] [10] [10] [10] [10] ;
unsigned char arr_38 [10] [10] ;
_Bool arr_39 [10] [10] [10] [10] [10] [10] ;
long long int arr_47 [10] ;
signed char arr_54 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = 7853603277453038674ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (short)28732;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = -6658970160522684318LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (unsigned char)43;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        arr_8 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned char)191;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = -4167555463785158655LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (signed char)-55;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_14 [i_0] = 6973278975822239900LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 25; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 25; ++i_6) 
                                arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (unsigned short)56323;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_18 [i_0] = (short)-13505;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_20 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_21 [i_0] [i_1] = 7938339097722159636LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_25 [i_0] = 6751446771884477097LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_27 [i_0] [i_1] [i_2] = 5351963448334104490LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_28 [i_0] [i_1] [i_2] = -547998652;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_31 [i_0] [i_1] [i_2] = (signed char)-22;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_32 [i_0] [i_1] = (short)-32695;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 10; ++i_5) 
                            arr_35 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned short)21402;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_36 [i_0] [i_1] [i_2] [i_3] = 2979507088214296123ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 10; ++i_5) 
                            arr_37 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned char)250;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_38 [i_0] [i_1] = (unsigned char)16;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 10; ++i_5) 
                            arr_39 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_47 [i_0] = 4333493747681926498LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_54 [i_0] = (signed char)108;
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
    hash(&seed, var_55);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
