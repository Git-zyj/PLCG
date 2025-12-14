#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)14584;
_Bool var_5 = (_Bool)1;
signed char var_6 = (signed char)-82;
unsigned short var_8 = (unsigned short)64515;
long long int var_9 = 6816620376806128401LL;
long long int var_11 = -128505928174231774LL;
unsigned char var_13 = (unsigned char)246;
unsigned char var_15 = (unsigned char)22;
int zero = 0;
short var_19 = (short)-15346;
unsigned short var_20 = (unsigned short)13838;
long long int var_21 = 1408525252429958627LL;
unsigned short var_22 = (unsigned short)21557;
signed char var_23 = (signed char)-86;
unsigned short var_24 = (unsigned short)34980;
unsigned short var_25 = (unsigned short)5809;
unsigned short var_26 = (unsigned short)59783;
unsigned short var_27 = (unsigned short)55905;
unsigned short var_28 = (unsigned short)26129;
signed char var_29 = (signed char)26;
signed char var_30 = (signed char)104;
long long int var_31 = 6003364252299783500LL;
unsigned char var_32 = (unsigned char)34;
long long int var_33 = 7540351316661900102LL;
signed char var_34 = (signed char)-75;
unsigned long long int var_35 = 16435776975445431938ULL;
unsigned short var_36 = (unsigned short)29661;
long long int var_37 = 9080717587562467709LL;
unsigned short var_38 = (unsigned short)62877;
long long int var_39 = -8627169004562190153LL;
unsigned char var_40 = (unsigned char)173;
unsigned int var_41 = 3539793644U;
unsigned int var_42 = 517700234U;
unsigned int arr_1 [22] ;
unsigned int arr_3 [22] [22] ;
unsigned long long int arr_9 [22] [22] [22] [22] ;
long long int arr_10 [22] [22] ;
unsigned char arr_13 [22] ;
long long int arr_15 [22] ;
unsigned short arr_18 [14] [14] ;
_Bool arr_34 [24] [24] ;
unsigned short arr_38 [24] [24] [24] [24] ;
long long int arr_39 [24] [24] [24] [24] [24] ;
signed char arr_45 [24] [24] [24] [24] [24] ;
unsigned short arr_11 [22] ;
long long int arr_22 [14] [14] [14] ;
unsigned long long int arr_23 [14] [14] ;
unsigned int arr_24 [14] [14] ;
long long int arr_25 [14] ;
signed char arr_40 [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = 1037088321U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? 1152291002U : 2091731618U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 15661352977030490397ULL : 16047824864459643899ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_10 [i_0] [i_1] = -1342427514235205399LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_13 [i_0] = (unsigned char)186;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_15 [i_0] = 2684223442076734023LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_18 [i_0] [i_1] = (unsigned short)2264;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_34 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_38 [i_0] [i_1] [i_2] [i_3] = (unsigned short)16770;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        arr_39 [i_0] [i_1] [i_2] [i_3] [i_4] = -6613201692434093213LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        arr_45 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_3 % 2 == 0) ? (signed char)34 : (signed char)-6;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_11 [i_0] = (unsigned short)1437;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_22 [i_0] [i_1] [i_2] = 6778254510010249931LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_23 [i_0] [i_1] = 13095533453740249210ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_24 [i_0] [i_1] = 2125128968U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_25 [i_0] = -3831883795828379142LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_40 [i_0] [i_1] [i_2] = (signed char)122;
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
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                hash(&seed, arr_22 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_23 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_24 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_25 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                hash(&seed, arr_40 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
