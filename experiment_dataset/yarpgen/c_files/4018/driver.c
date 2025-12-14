#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-16532;
signed char var_2 = (signed char)96;
unsigned int var_3 = 218916560U;
int var_6 = -2014554204;
long long int var_8 = -6559604199800312525LL;
short var_9 = (short)-8997;
short var_10 = (short)-18427;
long long int var_11 = -3830112074027020710LL;
long long int var_12 = -5025277772758686210LL;
long long int var_13 = -3805424814827542327LL;
int zero = 0;
unsigned int var_14 = 608933355U;
unsigned int var_15 = 3035392182U;
int var_16 = 1970308197;
int var_17 = -113355855;
short var_18 = (short)9856;
signed char var_19 = (signed char)-18;
int var_20 = 1735762058;
unsigned int var_21 = 74219542U;
short var_22 = (short)-11949;
int var_23 = 406845302;
short var_24 = (short)-12300;
unsigned int var_25 = 610259940U;
int var_26 = -1144065226;
unsigned char var_27 = (unsigned char)162;
long long int var_28 = -454172413272939711LL;
unsigned int var_29 = 4038082686U;
short var_30 = (short)12485;
int var_31 = -2011825503;
_Bool var_32 = (_Bool)0;
long long int var_33 = -2009994535912072487LL;
_Bool var_34 = (_Bool)0;
_Bool var_35 = (_Bool)1;
signed char var_36 = (signed char)123;
unsigned char var_37 = (unsigned char)194;
signed char var_38 = (signed char)0;
long long int var_39 = -7524548055572965932LL;
_Bool var_40 = (_Bool)0;
unsigned char var_41 = (unsigned char)214;
long long int var_42 = 6043628042913735829LL;
long long int var_43 = -8687741229266117125LL;
_Bool var_44 = (_Bool)1;
unsigned short var_45 = (unsigned short)39779;
int var_46 = -922225559;
int var_47 = 1347984596;
short var_48 = (short)28553;
unsigned char var_49 = (unsigned char)10;
short var_50 = (short)32529;
short var_51 = (short)9184;
short var_52 = (short)-5791;
unsigned int arr_2 [22] [22] ;
_Bool arr_4 [22] ;
unsigned int arr_5 [22] ;
unsigned short arr_6 [22] [22] [22] ;
signed char arr_7 [22] [22] [22] [22] ;
long long int arr_9 [22] ;
short arr_11 [22] [22] ;
_Bool arr_15 [24] ;
short arr_16 [24] ;
short arr_18 [24] ;
long long int arr_19 [24] ;
short arr_20 [24] [24] ;
long long int arr_21 [24] ;
long long int arr_23 [24] [24] ;
_Bool arr_24 [24] [24] ;
short arr_26 [24] [24] [24] ;
int arr_27 [24] [24] [24] [24] ;
short arr_28 [24] [24] [24] ;
unsigned char arr_29 [24] [24] [24] [24] [24] ;
short arr_37 [24] [24] [24] ;
long long int arr_17 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_2 [i_0] [i_1] = (i_0 % 2 == 0) ? 3943799764U : 3352599662U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = 445700917U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned short)3766 : (unsigned short)49867;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (signed char)-23;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_9 [i_0] = -4332152172123928670LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_11 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)18678 : (short)23872;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_15 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_16 [i_0] = (short)-1589;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_18 [i_0] = (short)17891;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_19 [i_0] = 2274030691932590845LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_20 [i_0] [i_1] = (short)-4046;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_21 [i_0] = -2504285213571597163LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_23 [i_0] [i_1] = 8848315057668431380LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_24 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_26 [i_0] [i_1] [i_2] = (short)-22717;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_27 [i_0] [i_1] [i_2] [i_3] = 1068669546;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_28 [i_0] [i_1] [i_2] = (short)27455;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        arr_29 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned char)159;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_37 [i_0] [i_1] [i_2] = (short)-17673;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_17 [i_0] = 3734222872007414216LL;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_17 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
