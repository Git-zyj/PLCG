#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 876638687U;
unsigned char var_1 = (unsigned char)244;
unsigned short var_2 = (unsigned short)13979;
int var_3 = -143401705;
unsigned long long int var_5 = 13506563941592523873ULL;
unsigned short var_6 = (unsigned short)7852;
_Bool var_7 = (_Bool)0;
unsigned int var_8 = 4278418276U;
unsigned char var_9 = (unsigned char)35;
unsigned int var_10 = 513316686U;
unsigned short var_11 = (unsigned short)29531;
_Bool var_12 = (_Bool)1;
unsigned short var_13 = (unsigned short)37075;
unsigned long long int var_14 = 8730982214934611067ULL;
signed char var_15 = (signed char)-48;
int zero = 0;
unsigned long long int var_16 = 14267984009964401745ULL;
long long int var_17 = -7810327657092439428LL;
short var_18 = (short)-764;
unsigned char var_19 = (unsigned char)18;
signed char var_20 = (signed char)-127;
unsigned int var_21 = 667831956U;
int var_22 = -523826215;
unsigned short var_23 = (unsigned short)18798;
long long int var_24 = 3519415832355571602LL;
unsigned char var_25 = (unsigned char)191;
unsigned int var_26 = 1471209542U;
unsigned long long int var_27 = 2107922046099354739ULL;
unsigned long long int var_28 = 13960840897050806665ULL;
int var_29 = 660019064;
unsigned long long int var_30 = 12847549870705624218ULL;
unsigned int var_31 = 1361414782U;
short var_32 = (short)-2038;
unsigned long long int var_33 = 12892920988649711906ULL;
int var_34 = 1721577557;
unsigned int var_35 = 1513873981U;
unsigned short var_36 = (unsigned short)32629;
signed char var_37 = (signed char)74;
unsigned int var_38 = 2713492363U;
unsigned char var_39 = (unsigned char)172;
_Bool var_40 = (_Bool)1;
short var_41 = (short)16468;
signed char var_42 = (signed char)-73;
int var_43 = -1718708805;
unsigned int var_44 = 683093412U;
unsigned short var_45 = (unsigned short)639;
long long int var_46 = -1288326980770948905LL;
_Bool var_47 = (_Bool)0;
unsigned long long int var_48 = 14103896173939940004ULL;
unsigned long long int var_49 = 10175146673550965394ULL;
unsigned short var_50 = (unsigned short)47736;
signed char var_51 = (signed char)-90;
_Bool var_52 = (_Bool)1;
signed char var_53 = (signed char)-30;
unsigned long long int var_54 = 11013557370742731919ULL;
unsigned short var_55 = (unsigned short)39913;
signed char var_56 = (signed char)-66;
int var_57 = -1469088059;
unsigned int var_58 = 3222547041U;
short var_59 = (short)-13495;
unsigned int var_60 = 3459441670U;
unsigned long long int arr_0 [22] [22] ;
int arr_1 [22] ;
unsigned int arr_2 [22] ;
_Bool arr_3 [22] [22] [22] ;
unsigned short arr_4 [22] [22] [22] [22] ;
unsigned short arr_5 [22] [22] ;
unsigned short arr_8 [10] ;
unsigned long long int arr_9 [10] [10] ;
_Bool arr_11 [10] ;
unsigned short arr_17 [10] [10] [10] [10] ;
short arr_18 [10] [10] [10] [10] ;
int arr_23 [10] ;
unsigned int arr_32 [10] [10] [10] ;
long long int arr_33 [10] [10] [10] [10] ;
signed char arr_35 [10] [10] [10] [10] [10] ;
unsigned short arr_38 [10] [10] [10] [10] [10] [10] [10] ;
unsigned int arr_41 [10] [10] [10] [10] ;
unsigned short arr_48 [22] ;
unsigned long long int arr_49 [22] ;
unsigned int arr_50 [22] ;
_Bool arr_52 [22] ;
unsigned int arr_54 [22] [22] [22] ;
unsigned long long int arr_56 [22] [22] [22] [22] ;
unsigned short arr_57 [22] [22] [22] [22] ;
unsigned long long int arr_58 [22] [22] [22] [22] ;
short arr_68 [22] [22] [22] [22] [22] ;
int arr_71 [22] [22] [22] [22] [22] ;
unsigned short arr_72 [22] [22] [22] [22] ;
short arr_6 [22] [22] ;
short arr_40 [10] ;
int arr_53 [22] ;
unsigned long long int arr_67 [22] [22] [22] [22] ;
unsigned char arr_73 [22] [22] ;
unsigned char arr_74 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_0 [i_0] [i_1] = 15563604761066952435ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = -770228367;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = 1353787326U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_4 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (unsigned short)32614 : (unsigned short)47967;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)23543 : (unsigned short)34611;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_8 [i_0] = (unsigned short)35703;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_9 [i_0] [i_1] = 18089639275803180904ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = (unsigned short)64804;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_18 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (short)17892 : (short)-17067;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_23 [i_0] = 1385801429;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_32 [i_0] [i_1] [i_2] = 2520591325U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_33 [i_0] [i_1] [i_2] [i_3] = -7116247052505262543LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        arr_35 [i_0] [i_1] [i_2] [i_3] [i_4] = (signed char)101;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 10; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 10; ++i_6) 
                                arr_38 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (unsigned short)32065;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_41 [i_0] [i_1] [i_2] [i_3] = 890151123U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_48 [i_0] = (i_0 % 2 == 0) ? (unsigned short)33381 : (unsigned short)58937;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_49 [i_0] = 18196660230802990505ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_50 [i_0] = 1974784167U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_52 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_54 [i_0] [i_1] [i_2] = 1348301883U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_56 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 673197552504638188ULL : 14909337626314941941ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_57 [i_0] [i_1] [i_2] [i_3] = (unsigned short)16948;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_58 [i_0] [i_1] [i_2] [i_3] = 16189107517992562914ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        arr_68 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? (short)12399 : (short)-19303;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        arr_71 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? -439670262 : 1628610781;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_72 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (unsigned short)298 : (unsigned short)48810;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_6 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)17343 : (short)18153;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_40 [i_0] = (short)6108;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_53 [i_0] = (i_0 % 2 == 0) ? -1471428966 : -552654848;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_67 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 7202497809820470688ULL : 1705597057043457376ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_73 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)18 : (unsigned char)45;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_74 [i_0] = (i_0 % 2 == 0) ? (unsigned char)159 : (unsigned char)30;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_40 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_53 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    hash(&seed, arr_67 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_73 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_74 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
