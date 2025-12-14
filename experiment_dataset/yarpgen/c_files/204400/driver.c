#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -630051537;
int var_1 = 1176996855;
unsigned long long int var_2 = 7603366461475371625ULL;
unsigned short var_3 = (unsigned short)11469;
unsigned int var_4 = 2273171928U;
_Bool var_5 = (_Bool)1;
unsigned short var_6 = (unsigned short)916;
int var_7 = -1231959197;
unsigned char var_8 = (unsigned char)12;
short var_9 = (short)17616;
_Bool var_10 = (_Bool)0;
int var_12 = 2130152794;
int var_13 = -1527886329;
unsigned short var_14 = (unsigned short)23050;
int zero = 0;
long long int var_15 = 8650371859651936115LL;
int var_16 = -1855676448;
_Bool var_17 = (_Bool)0;
short var_18 = (short)11555;
unsigned short var_19 = (unsigned short)13036;
signed char var_20 = (signed char)81;
short var_21 = (short)26955;
_Bool var_22 = (_Bool)0;
unsigned char var_23 = (unsigned char)253;
long long int var_24 = 5606332327128503703LL;
unsigned short var_25 = (unsigned short)48195;
unsigned short var_26 = (unsigned short)4774;
_Bool var_27 = (_Bool)0;
_Bool var_28 = (_Bool)0;
unsigned short var_29 = (unsigned short)55539;
signed char var_30 = (signed char)-59;
long long int var_31 = -3368463956810100879LL;
unsigned int var_32 = 1245337112U;
unsigned int var_33 = 248779684U;
long long int var_34 = -3285379220472586400LL;
signed char var_35 = (signed char)-98;
unsigned short var_36 = (unsigned short)15360;
unsigned short var_37 = (unsigned short)18776;
unsigned int var_38 = 4157630296U;
int var_39 = 1460544981;
long long int var_40 = 4090173782114264643LL;
unsigned char var_41 = (unsigned char)82;
short var_42 = (short)-32488;
signed char var_43 = (signed char)-104;
unsigned int arr_0 [22] ;
_Bool arr_1 [22] ;
unsigned long long int arr_3 [22] [22] [22] ;
short arr_4 [22] ;
int arr_6 [22] [22] [22] ;
unsigned int arr_7 [22] ;
long long int arr_10 [22] [22] [22] ;
short arr_21 [21] ;
unsigned short arr_5 [22] [22] ;
unsigned short arr_11 [22] [22] ;
_Bool arr_12 [22] [22] [22] ;
short arr_13 [22] [22] ;
int arr_14 [22] [22] ;
_Bool arr_35 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = 2709056645U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 1860658527678378576ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = (short)30040;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = -1496143501;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_7 [i_0] = 1763013836U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = -1361365772435638592LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_21 [i_0] = (short)11681;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned short)7785;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_11 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)22151 : (unsigned short)42588;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_13 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)19308 : (short)10017;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_14 [i_0] [i_1] = (i_0 % 2 == 0) ? 269083848 : 460946259;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_35 [i_0] = (_Bool)0;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                hash(&seed, arr_12 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_35 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
