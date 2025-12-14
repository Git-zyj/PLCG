#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_1 = 2311029674U;
_Bool var_2 = (_Bool)0;
_Bool var_3 = (_Bool)1;
unsigned int var_4 = 1922109952U;
unsigned int var_5 = 2334999047U;
short var_6 = (short)19399;
int var_7 = -395563524;
unsigned char var_8 = (unsigned char)191;
unsigned int var_9 = 987503937U;
signed char var_10 = (signed char)1;
int zero = 0;
long long int var_11 = -4184528678894241684LL;
int var_12 = -1033305635;
_Bool var_13 = (_Bool)1;
unsigned char var_14 = (unsigned char)61;
signed char var_15 = (signed char)-96;
unsigned int var_16 = 3125409655U;
unsigned char var_17 = (unsigned char)83;
_Bool var_18 = (_Bool)1;
long long int var_19 = -6980525447672308295LL;
unsigned char var_20 = (unsigned char)94;
unsigned long long int var_21 = 14313913500958931755ULL;
_Bool var_22 = (_Bool)1;
short var_23 = (short)24432;
long long int var_24 = -259364527957836368LL;
long long int var_25 = 507466406860594408LL;
unsigned int var_26 = 2266384810U;
short var_27 = (short)24373;
short var_28 = (short)8138;
unsigned long long int var_29 = 12170956667000918937ULL;
unsigned char var_30 = (unsigned char)74;
_Bool var_31 = (_Bool)1;
signed char var_32 = (signed char)-101;
unsigned long long int var_33 = 16146854888985776127ULL;
_Bool var_34 = (_Bool)0;
long long int var_35 = -1850973650653174989LL;
_Bool var_36 = (_Bool)0;
unsigned short var_37 = (unsigned short)17353;
unsigned char var_38 = (unsigned char)67;
unsigned int var_39 = 2150575321U;
unsigned long long int var_40 = 6688970447705226557ULL;
int var_41 = -1618284684;
unsigned long long int var_42 = 7342076329984540278ULL;
_Bool var_43 = (_Bool)0;
_Bool var_44 = (_Bool)0;
unsigned int var_45 = 387691501U;
unsigned int var_46 = 688861582U;
unsigned char var_47 = (unsigned char)225;
signed char var_48 = (signed char)73;
unsigned short var_49 = (unsigned short)55695;
unsigned int var_50 = 314096356U;
unsigned int var_51 = 147530425U;
unsigned char var_52 = (unsigned char)200;
long long int var_53 = -1636938252176477627LL;
long long int var_54 = 5718373781653643762LL;
unsigned int var_55 = 49071994U;
unsigned long long int var_56 = 8220650602784567299ULL;
long long int var_57 = -6232582598401194633LL;
unsigned char var_58 = (unsigned char)180;
unsigned int var_59 = 52190029U;
short arr_0 [21] ;
unsigned int arr_1 [21] ;
_Bool arr_2 [21] ;
int arr_3 [14] ;
unsigned long long int arr_4 [14] [14] ;
short arr_7 [15] ;
unsigned short arr_8 [15] ;
long long int arr_10 [15] [15] ;
unsigned long long int arr_13 [15] [15] [15] [15] ;
unsigned char arr_14 [15] [15] [15] ;
short arr_15 [15] [15] [15] [15] ;
_Bool arr_18 [15] [15] ;
unsigned short arr_21 [15] [15] ;
long long int arr_22 [15] ;
long long int arr_25 [15] [15] [15] [15] ;
unsigned char arr_27 [15] ;
long long int arr_29 [15] [15] [15] [15] ;
unsigned int arr_31 [15] [15] [15] [15] [15] [15] [15] ;
short arr_43 [15] [15] [15] [15] [15] [15] ;
unsigned int arr_48 [15] [15] [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (short)-13440;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = 3494165238U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = 1561271889;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_4 [i_0] [i_1] = 15967073680737231413ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_7 [i_0] = (short)16968;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_8 [i_0] = (unsigned short)8571;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_10 [i_0] [i_1] = -2971050820831833058LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = 3939097174257464571ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (unsigned char)126;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_15 [i_0] [i_1] [i_2] [i_3] = (short)13081;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_18 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_21 [i_0] [i_1] = (unsigned short)60260;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_22 [i_0] = 4322266321321303096LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_25 [i_0] [i_1] [i_2] [i_3] = -5658446881117934369LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_27 [i_0] = (unsigned char)51;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_29 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? 3178778216906067299LL : 2481529140672089274LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 15; ++i_6) 
                                arr_31 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_2 % 2 == 0) ? 4197295779U : 2465980078U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            arr_43 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (short)28938;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_48 [i_0] [i_1] [i_2] [i_3] = 2365079808U;
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
    hash(&seed, var_55);
    hash(&seed, var_56);
    hash(&seed, var_57);
    hash(&seed, var_58);
    hash(&seed, var_59);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
