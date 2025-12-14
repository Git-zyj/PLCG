#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)44438;
unsigned short var_1 = (unsigned short)42797;
signed char var_2 = (signed char)-25;
unsigned short var_5 = (unsigned short)60704;
unsigned long long int var_6 = 14066004151357151162ULL;
long long int var_7 = -1407218653786826533LL;
int var_8 = 786402112;
long long int var_10 = 2284479539724877047LL;
int var_12 = 286817065;
short var_15 = (short)1099;
long long int var_18 = 134732312749598842LL;
int zero = 0;
unsigned short var_19 = (unsigned short)8960;
int var_20 = 335883550;
long long int var_21 = -7222948399676013330LL;
unsigned long long int var_22 = 7644552204156482158ULL;
unsigned short var_23 = (unsigned short)15698;
int var_24 = 1874842886;
short var_25 = (short)1478;
unsigned int var_26 = 4090085361U;
unsigned int var_27 = 1945668026U;
int var_28 = -1511954053;
int var_29 = -167905018;
_Bool var_30 = (_Bool)1;
unsigned int var_31 = 438073168U;
unsigned long long int arr_0 [24] [24] ;
int arr_1 [24] ;
long long int arr_2 [24] [24] ;
short arr_3 [24] ;
unsigned long long int arr_13 [11] [11] [11] [11] ;
signed char arr_15 [11] [11] ;
int arr_19 [11] [11] [11] [11] [11] [11] [11] ;
unsigned short arr_31 [22] ;
signed char arr_34 [14] ;
long long int arr_4 [24] ;
short arr_5 [24] ;
short arr_21 [11] [11] [11] [11] [11] ;
unsigned long long int arr_26 [11] [11] [11] ;
unsigned long long int arr_27 [11] ;
long long int arr_28 [11] ;
unsigned long long int arr_33 [22] ;
unsigned char arr_38 [14] [14] ;
unsigned char arr_39 [14] [14] ;
unsigned long long int arr_40 [14] ;
signed char arr_41 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = 14549810005854591880ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = 750856054;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = -4243533009034487611LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (short)13750;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = 5907877994796321604ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_15 [i_0] [i_1] = (signed char)-72;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 11; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 11; ++i_6) 
                                arr_19 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_3 % 2 == 0) ? 1744189976 : 2027311740;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_31 [i_0] = (i_0 % 2 == 0) ? (unsigned short)40611 : (unsigned short)4305;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_34 [i_0] = (signed char)-65;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = 5126881656708414614LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = (short)-10312;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        arr_21 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_4 % 2 == 0) ? (short)-32648 : (short)-25744;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_26 [i_0] [i_1] [i_2] = 18240196154753820294ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_27 [i_0] = 11008524832024407065ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_28 [i_0] = -1974272143351822239LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_33 [i_0] = (i_0 % 2 == 0) ? 1185158760590771426ULL : 7139454779967387921ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_38 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)49 : (unsigned char)96;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_39 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)18 : (unsigned char)106;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_40 [i_0] = (i_0 % 2 == 0) ? 11899510568100088530ULL : 12316889257304398405ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_41 [i_0] = (i_0 % 2 == 0) ? (signed char)-123 : (signed char)-117;
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
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        hash(&seed, arr_21 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                hash(&seed, arr_26 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_27 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_28 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_33 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_38 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_39 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_40 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_41 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
