#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_18 = (unsigned char)151;
int zero = 0;
int var_19 = 1700463690;
short var_20 = (short)-21975;
unsigned short var_21 = (unsigned short)57340;
_Bool var_22 = (_Bool)1;
unsigned int var_23 = 1458624181U;
signed char var_24 = (signed char)20;
short var_25 = (short)-24843;
unsigned int var_26 = 1591479909U;
unsigned int var_27 = 1383899475U;
long long int var_28 = -4053332170503921642LL;
long long int var_29 = -6368738381212210047LL;
unsigned int var_30 = 893588855U;
signed char var_31 = (signed char)-104;
long long int var_32 = -3838459420838526480LL;
long long int var_33 = 1469799417877523035LL;
long long int var_34 = -9056775917421890654LL;
unsigned char var_35 = (unsigned char)145;
unsigned long long int var_36 = 8367315264229646659ULL;
unsigned int var_37 = 1239046459U;
short var_38 = (short)-12197;
long long int var_39 = 1587021440703480697LL;
unsigned int var_40 = 4203794973U;
unsigned char var_41 = (unsigned char)216;
unsigned long long int var_42 = 6211298651692371863ULL;
long long int var_43 = -1478043618918061665LL;
signed char var_44 = (signed char)54;
unsigned char var_45 = (unsigned char)206;
long long int var_46 = -5533634597241897359LL;
signed char var_47 = (signed char)30;
long long int var_48 = -1892226603392487793LL;
unsigned long long int var_49 = 14899341139979482412ULL;
unsigned long long int var_50 = 11637867474319396785ULL;
signed char var_51 = (signed char)124;
unsigned short arr_0 [12] ;
unsigned short arr_1 [12] [12] ;
unsigned long long int arr_2 [12] [12] ;
signed char arr_3 [12] ;
long long int arr_4 [12] [12] [12] [12] ;
unsigned int arr_6 [12] [12] ;
unsigned long long int arr_7 [12] ;
unsigned char arr_10 [12] [12] ;
unsigned long long int arr_11 [12] ;
unsigned short arr_12 [12] ;
unsigned long long int arr_19 [12] [12] [12] [12] ;
int arr_20 [12] [12] ;
long long int arr_26 [12] [12] ;
unsigned long long int arr_27 [12] [12] [12] ;
long long int arr_33 [25] [25] ;
unsigned long long int arr_35 [25] [25] ;
unsigned long long int arr_36 [25] [25] ;
long long int arr_37 [25] [25] ;
short arr_38 [25] ;
unsigned short arr_40 [25] [25] [25] ;
long long int arr_42 [25] [25] ;
long long int arr_43 [25] [25] [25] ;
long long int arr_46 [25] [25] [25] [25] [25] ;
unsigned char arr_47 [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (unsigned short)595;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)47064;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_2 [i_0] [i_1] = 2436209893859624638ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (signed char)-79 : (signed char)101;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_4 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? -5318837053435572295LL : -7082329376204553334LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_6 [i_0] [i_1] = 3196935892U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_7 [i_0] = 13191572436853634077ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_10 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)146 : (unsigned char)63;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? 3766321351109682478ULL : 4598648194257211343ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? (unsigned short)15858 : (unsigned short)61959;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_19 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 7113127251619762227ULL : 12794084630369781618ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_20 [i_0] [i_1] = -1051490209;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_26 [i_0] [i_1] = (i_0 % 2 == 0) ? 8630415990606227373LL : -3797564515940695087LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_27 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 1527562229935429542ULL : 14419968532559209326ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_33 [i_0] [i_1] = 5809569757468528103LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_35 [i_0] [i_1] = (i_0 % 2 == 0) ? 13684030735115551913ULL : 5447643698167487225ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_36 [i_0] [i_1] = (i_0 % 2 == 0) ? 8289259580092105311ULL : 4764878593436012843ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_37 [i_0] [i_1] = (i_1 % 2 == 0) ? -4016830054656993115LL : 1596276975941892711LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_38 [i_0] = (i_0 % 2 == 0) ? (short)26524 : (short)-29977;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_40 [i_0] [i_1] [i_2] = (unsigned short)8523;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_42 [i_0] [i_1] = (i_0 % 2 == 0) ? 1630140678633628458LL : 8168244838708420509LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_43 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? -1560718508177612651LL : 1836107348477643545LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        arr_46 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_0 % 2 == 0) ? -694355275838671475LL : 2652330630277753599LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_47 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned char)93 : (unsigned char)90;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
