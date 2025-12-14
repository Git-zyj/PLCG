#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8890714803732564227LL;
unsigned short var_1 = (unsigned short)23063;
long long int var_2 = -211204893300765144LL;
signed char var_4 = (signed char)-20;
unsigned short var_5 = (unsigned short)59854;
long long int var_6 = -6049517364206689048LL;
long long int var_7 = 1827321733131172420LL;
unsigned long long int var_8 = 16047885167976332458ULL;
int var_9 = 1944912142;
long long int var_10 = -2155954349486663199LL;
short var_11 = (short)23408;
signed char var_12 = (signed char)93;
long long int var_14 = -4704582135519051744LL;
long long int var_15 = -7809573602961873839LL;
int var_16 = -671690909;
short var_17 = (short)-14771;
short var_18 = (short)13897;
int zero = 0;
unsigned int var_19 = 287977987U;
int var_20 = 608354102;
signed char var_21 = (signed char)82;
_Bool var_22 = (_Bool)0;
int var_23 = -603459879;
int var_24 = -1147152673;
unsigned short var_25 = (unsigned short)45707;
unsigned short var_26 = (unsigned short)1867;
long long int var_27 = 7554692404285396866LL;
signed char var_28 = (signed char)-7;
int var_29 = 201409167;
unsigned long long int var_30 = 1428027590634976396ULL;
short var_31 = (short)19017;
long long int var_32 = 4774443312001920821LL;
long long int var_33 = -7867663145480198895LL;
long long int var_34 = -8578550536954877839LL;
_Bool var_35 = (_Bool)0;
long long int var_36 = 5970519977171394568LL;
unsigned int var_37 = 523357766U;
unsigned long long int var_38 = 15113896564835513310ULL;
long long int var_39 = 9184602146392342813LL;
signed char var_40 = (signed char)87;
_Bool var_41 = (_Bool)0;
int var_42 = -929520998;
_Bool var_43 = (_Bool)0;
_Bool var_44 = (_Bool)0;
long long int var_45 = 267123668631565838LL;
signed char var_46 = (signed char)-118;
unsigned int var_47 = 2640739469U;
short var_48 = (short)22732;
long long int var_49 = -8878600998618883859LL;
unsigned long long int arr_6 [10] [10] [10] ;
unsigned short arr_12 [10] [10] [10] ;
int arr_13 [10] ;
short arr_16 [13] ;
unsigned short arr_17 [13] ;
long long int arr_21 [11] [11] ;
unsigned char arr_35 [12] [12] [12] [12] [12] ;
unsigned int arr_36 [12] [12] [12] [12] ;
_Bool arr_42 [12] [12] [12] ;
unsigned char arr_47 [12] [12] [12] [12] ;
long long int arr_60 [12] [12] [12] [12] [12] ;
unsigned long long int arr_64 [12] [12] ;
unsigned long long int arr_65 [12] [12] ;
signed char arr_66 [12] ;
unsigned long long int arr_67 [12] ;
int arr_68 [12] ;
long long int arr_69 [12] ;
int arr_73 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 11437389215483006652ULL : 8394914549025691469ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned short)39950 : (unsigned short)21163;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_13 [i_0] = 1459206905;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_16 [i_0] = (short)-470;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_17 [i_0] = (unsigned short)17718;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_21 [i_0] [i_1] = 7076054649302289472LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        arr_35 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_1 % 2 == 0) ? (unsigned char)29 : (unsigned char)226;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_36 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 2919951682U : 794044658U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_42 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_47 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (unsigned char)161 : (unsigned char)135;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        arr_60 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_3 % 2 == 0) ? -7746097320161210310LL : 604803518866093770LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_64 [i_0] [i_1] = 15640687360865992128ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_65 [i_0] [i_1] = 4223019183509671063ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_66 [i_0] = (signed char)9;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_67 [i_0] = 7306771233127324211ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_68 [i_0] = -294295325;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_69 [i_0] = -2429526225682909917LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_73 [i_0] = -348532610;
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
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_6 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_12 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_17 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_21 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        hash(&seed, arr_35 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    hash(&seed, arr_36 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_42 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    hash(&seed, arr_47 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        hash(&seed, arr_60 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_64 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_65 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_66 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_67 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_68 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_69 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_73 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
