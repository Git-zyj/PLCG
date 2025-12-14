#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-1;
unsigned int var_1 = 1042531685U;
unsigned char var_2 = (unsigned char)223;
unsigned long long int var_3 = 1888854771344335061ULL;
unsigned long long int var_4 = 15474269516161297396ULL;
unsigned int var_5 = 2283245108U;
_Bool var_6 = (_Bool)0;
unsigned short var_7 = (unsigned short)35914;
long long int var_8 = 8743940315871917259LL;
unsigned char var_9 = (unsigned char)69;
signed char var_10 = (signed char)-115;
unsigned int var_11 = 3435802156U;
int zero = 0;
long long int var_12 = 7444037992903882378LL;
unsigned char var_13 = (unsigned char)173;
short var_14 = (short)5937;
unsigned char var_15 = (unsigned char)88;
_Bool var_16 = (_Bool)0;
short var_17 = (short)15490;
unsigned long long int var_18 = 8772251538791935326ULL;
signed char var_19 = (signed char)-28;
short var_20 = (short)-21047;
int var_21 = 219740490;
unsigned long long int var_22 = 11397228692805895577ULL;
unsigned short var_23 = (unsigned short)62543;
unsigned short var_24 = (unsigned short)20644;
int var_25 = 160668917;
short var_26 = (short)-32661;
unsigned short var_27 = (unsigned short)42228;
unsigned char var_28 = (unsigned char)76;
int var_29 = -1984658183;
int var_30 = -1285647527;
unsigned short var_31 = (unsigned short)13607;
signed char var_32 = (signed char)-99;
short var_33 = (short)-15044;
unsigned long long int var_34 = 14156050017976061601ULL;
_Bool var_35 = (_Bool)0;
unsigned short var_36 = (unsigned short)44270;
int var_37 = -1151048962;
unsigned long long int var_38 = 15002017682086730996ULL;
_Bool var_39 = (_Bool)1;
signed char var_40 = (signed char)-32;
unsigned char var_41 = (unsigned char)197;
unsigned int var_42 = 3589408852U;
long long int var_43 = -2985449602005664120LL;
short var_44 = (short)16842;
unsigned long long int var_45 = 16602409483834561514ULL;
unsigned char var_46 = (unsigned char)236;
unsigned int var_47 = 1773472700U;
unsigned long long int var_48 = 15990481247631323181ULL;
unsigned long long int var_49 = 1083684880916527042ULL;
unsigned long long int var_50 = 11113219131853526603ULL;
unsigned long long int var_51 = 7742135591135926492ULL;
_Bool var_52 = (_Bool)1;
unsigned long long int var_53 = 5487297148534950357ULL;
_Bool var_54 = (_Bool)0;
_Bool var_55 = (_Bool)0;
unsigned char var_56 = (unsigned char)248;
signed char var_57 = (signed char)5;
long long int var_58 = 7986370279200907095LL;
unsigned int var_59 = 3570536391U;
unsigned char var_60 = (unsigned char)136;
unsigned short var_61 = (unsigned short)9577;
unsigned long long int var_62 = 15550007596761122390ULL;
unsigned int var_63 = 1584821642U;
signed char arr_21 [14] [14] [14] [14] [14] ;
unsigned long long int arr_24 [14] [14] [14] [14] ;
int arr_28 [14] [14] [14] [14] [14] ;
unsigned int arr_33 [14] [14] [14] [14] ;
int arr_50 [14] [14] [14] ;
unsigned short arr_51 [14] [14] ;
int arr_74 [14] [14] ;
unsigned short arr_75 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_21 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_3 % 2 == 0) ? (signed char)-58 : (signed char)51;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_24 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? 11982842475937286169ULL : 5552242134502545406ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_28 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_3 % 2 == 0) ? 1499532434 : -1650058615;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_33 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 1919176241U : 2051131324U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_50 [i_0] [i_1] [i_2] = 484810159;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_51 [i_0] [i_1] = (unsigned short)59719;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_74 [i_0] [i_1] = -1284888577;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_75 [i_0] [i_1] = (unsigned short)19972;
}

void checksum() {
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
    hash(&seed, var_60);
    hash(&seed, var_61);
    hash(&seed, var_62);
    hash(&seed, var_63);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        hash(&seed, arr_21 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    hash(&seed, arr_24 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        hash(&seed, arr_28 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    hash(&seed, arr_33 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                hash(&seed, arr_50 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_51 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_74 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_75 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
