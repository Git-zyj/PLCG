#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1622635632;
int var_2 = -1391276179;
unsigned int var_3 = 390458895U;
unsigned short var_4 = (unsigned short)28480;
int var_6 = -1630358223;
signed char var_7 = (signed char)-52;
unsigned long long int var_8 = 10096892230760258053ULL;
unsigned char var_9 = (unsigned char)60;
short var_10 = (short)20030;
signed char var_12 = (signed char)-13;
unsigned char var_15 = (unsigned char)39;
_Bool var_16 = (_Bool)0;
int zero = 0;
long long int var_18 = -2464824418677970387LL;
int var_19 = -2062880283;
_Bool var_20 = (_Bool)1;
signed char var_21 = (signed char)55;
unsigned short var_22 = (unsigned short)53236;
signed char var_23 = (signed char)-29;
unsigned char var_24 = (unsigned char)196;
signed char var_25 = (signed char)17;
long long int var_26 = -1448099847016834981LL;
_Bool var_27 = (_Bool)0;
unsigned long long int var_28 = 13473467173321532586ULL;
int var_29 = -532495052;
unsigned char var_30 = (unsigned char)204;
_Bool var_31 = (_Bool)0;
unsigned char var_32 = (unsigned char)155;
unsigned char var_33 = (unsigned char)111;
signed char var_34 = (signed char)-120;
int var_35 = 673911964;
unsigned char var_36 = (unsigned char)185;
short var_37 = (short)-9916;
unsigned char var_38 = (unsigned char)190;
short var_39 = (short)924;
int var_40 = -537106563;
unsigned char var_41 = (unsigned char)55;
unsigned long long int var_42 = 6578177738178399839ULL;
_Bool var_43 = (_Bool)1;
signed char var_44 = (signed char)-51;
int var_45 = 268442890;
signed char var_46 = (signed char)-87;
short var_47 = (short)-14475;
signed char var_48 = (signed char)62;
short var_49 = (short)12138;
int var_50 = 1887790533;
_Bool var_51 = (_Bool)0;
long long int arr_0 [21] [21] ;
unsigned char arr_1 [21] [21] ;
unsigned long long int arr_2 [21] [21] ;
unsigned int arr_3 [21] [21] ;
short arr_5 [21] [21] [21] ;
signed char arr_7 [21] [21] [21] ;
long long int arr_8 [21] [21] ;
short arr_9 [21] ;
_Bool arr_10 [21] [21] ;
unsigned short arr_12 [21] [21] [21] ;
short arr_15 [21] [21] [21] [21] ;
short arr_16 [21] ;
_Bool arr_18 [21] [21] [21] [21] ;
unsigned long long int arr_19 [21] [21] [21] [21] ;
_Bool arr_20 [21] [21] [21] [21] ;
unsigned char arr_32 [21] [21] [21] [21] [21] [21] ;
_Bool arr_34 [21] ;
unsigned char arr_37 [21] [21] [21] ;
short arr_11 [21] [21] ;
unsigned char arr_23 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_0 [i_0] [i_1] = 4562009024979457589LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)202;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_2 [i_0] [i_1] = 17948514383643728958ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_3 [i_0] [i_1] = 1888874664U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (short)13626 : (short)-13905;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (signed char)15;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_8 [i_0] [i_1] = 5963622326174079052LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_9 [i_0] = (short)-12209;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_10 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (unsigned short)504;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_15 [i_0] [i_1] [i_2] [i_3] = (short)-18411;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_16 [i_0] = (short)-19682;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_18 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_19 [i_0] [i_1] [i_2] [i_3] = 9770577300241117557ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_20 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 21; ++i_5) 
                            arr_32 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_0 % 2 == 0) ? (unsigned char)12 : (unsigned char)30;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_34 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_37 [i_0] [i_1] [i_2] = (unsigned char)252;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_11 [i_0] [i_1] = (short)32365;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_23 [i_0] = (unsigned char)26;
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
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_23 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
