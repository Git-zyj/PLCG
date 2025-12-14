#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17684548935155685125ULL;
unsigned char var_1 = (unsigned char)178;
long long int var_2 = -4076455427527551766LL;
unsigned long long int var_3 = 5417159111703761705ULL;
unsigned char var_4 = (unsigned char)15;
unsigned long long int var_5 = 2614714628145941823ULL;
unsigned short var_6 = (unsigned short)48208;
signed char var_8 = (signed char)-38;
unsigned long long int var_9 = 14449390609125867208ULL;
signed char var_10 = (signed char)118;
short var_11 = (short)31104;
unsigned long long int var_12 = 7404105775091716857ULL;
signed char var_13 = (signed char)-56;
unsigned short var_14 = (unsigned short)31281;
int var_15 = 1755692900;
long long int var_16 = -3306118563087587452LL;
int zero = 0;
unsigned long long int var_17 = 3090290836645930350ULL;
unsigned long long int var_18 = 4550880014903069412ULL;
long long int var_19 = 2881519831372188664LL;
unsigned char var_20 = (unsigned char)11;
int var_21 = -251417732;
short var_22 = (short)13159;
long long int var_23 = -4938121969202715420LL;
unsigned short var_24 = (unsigned short)53293;
signed char var_25 = (signed char)-111;
long long int var_26 = 8098251123177551319LL;
unsigned char var_27 = (unsigned char)106;
unsigned short var_28 = (unsigned short)17245;
signed char var_29 = (signed char)31;
unsigned long long int var_30 = 12103667654388815638ULL;
unsigned char var_31 = (unsigned char)47;
unsigned short var_32 = (unsigned short)19256;
unsigned short var_33 = (unsigned short)48730;
long long int var_34 = 5289717716262140327LL;
int var_35 = -1992938488;
unsigned long long int var_36 = 7376505323370970703ULL;
unsigned char var_37 = (unsigned char)145;
unsigned short var_38 = (unsigned short)16967;
signed char var_39 = (signed char)96;
unsigned long long int var_40 = 971049563150313455ULL;
unsigned short var_41 = (unsigned short)15302;
unsigned short var_42 = (unsigned short)4756;
short var_43 = (short)-16992;
unsigned short var_44 = (unsigned short)15657;
int var_45 = 1686606424;
signed char var_46 = (signed char)-11;
int var_47 = -1755551834;
int var_48 = -1054343837;
unsigned long long int arr_0 [21] ;
signed char arr_1 [21] [21] ;
unsigned char arr_2 [21] [21] [21] ;
long long int arr_3 [21] [21] [21] ;
int arr_5 [21] ;
signed char arr_6 [21] [21] [21] ;
unsigned long long int arr_7 [21] ;
int arr_8 [21] [21] [21] [21] ;
unsigned long long int arr_11 [11] [11] ;
unsigned long long int arr_12 [11] ;
signed char arr_14 [23] ;
unsigned char arr_15 [23] ;
unsigned short arr_18 [21] ;
unsigned short arr_20 [21] ;
unsigned long long int arr_21 [21] ;
unsigned long long int arr_25 [21] [21] ;
short arr_33 [21] [21] [21] ;
unsigned long long int arr_34 [21] [21] [21] ;
unsigned long long int arr_35 [21] [21] [21] ;
unsigned long long int arr_38 [21] [21] [21] [21] [21] [21] ;
short arr_40 [21] [21] [21] [21] ;
unsigned short arr_46 [21] [21] ;
unsigned int arr_47 [21] [21] [21] ;
unsigned long long int arr_48 [21] [21] [21] [21] ;
unsigned long long int arr_49 [21] ;
signed char arr_52 [21] [21] [21] [21] ;
int arr_53 [21] ;
short arr_57 [21] [21] [21] ;
int arr_59 [21] [21] [21] [21] [21] [21] ;
int arr_9 [21] [21] [21] ;
int arr_19 [21] ;
unsigned long long int arr_22 [21] ;
unsigned long long int arr_23 [21] ;
int arr_27 [21] [21] ;
signed char arr_28 [21] ;
int arr_43 [21] [21] [21] [21] [21] [21] ;
unsigned int arr_44 [21] [21] [21] [21] ;
int arr_45 [21] [21] [21] ;
unsigned long long int arr_50 [21] [21] [21] [21] ;
signed char arr_63 [21] [21] [21] [21] [21] ;
unsigned char arr_66 [21] [21] [21] [21] ;
signed char arr_67 [21] [21] [21] [21] [21] ;
int arr_68 [21] [21] [21] [21] ;
unsigned long long int arr_69 [21] ;
unsigned short arr_70 [21] [21] ;
short arr_74 [21] [21] ;
int arr_84 [21] [21] [21] [21] ;
unsigned int arr_85 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 4951220068224643503ULL : 14820818143890063636ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_1 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)23 : (signed char)-21;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (unsigned char)234;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 8129906214579505274LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 2022683468 : 100193919;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (signed char)50 : (signed char)-105;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_7 [i_0] = 17770282741290946749ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = -13933451;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_11 [i_0] [i_1] = 13917788916861160714ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_12 [i_0] = 11895976882428034650ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_14 [i_0] = (signed char)-34;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_15 [i_0] = (unsigned char)207;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_18 [i_0] = (unsigned short)24638;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_20 [i_0] = (unsigned short)8450;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_21 [i_0] = 7985938829494583201ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_25 [i_0] [i_1] = 7220040047678428184ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_33 [i_0] [i_1] [i_2] = (short)-1386;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_34 [i_0] [i_1] [i_2] = 3632954216076200945ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_35 [i_0] [i_1] [i_2] = 1111581560838712023ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 21; ++i_5) 
                            arr_38 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 9313976900295198117ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_40 [i_0] [i_1] [i_2] [i_3] = (short)23981;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_46 [i_0] [i_1] = (unsigned short)61776;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_47 [i_0] [i_1] [i_2] = 1069663659U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_48 [i_0] [i_1] [i_2] [i_3] = 5306469042583137421ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_49 [i_0] = 8294185048591231360ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_52 [i_0] [i_1] [i_2] [i_3] = (signed char)-9;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_53 [i_0] = (i_0 % 2 == 0) ? 317698167 : -1042197507;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_57 [i_0] [i_1] [i_2] = (short)-10600;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 21; ++i_5) 
                            arr_59 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = -1954942499;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? -1351586793 : 1658941379;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_19 [i_0] = (i_0 % 2 == 0) ? -979274110 : -1260696864;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_22 [i_0] = 10172356079712549719ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_23 [i_0] = 15354183055450633723ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_27 [i_0] [i_1] = -1662465054;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_28 [i_0] = (signed char)-35;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 21; ++i_5) 
                            arr_43 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 107589841;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_44 [i_0] [i_1] [i_2] [i_3] = 787697047U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_45 [i_0] [i_1] [i_2] = -849667514;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_50 [i_0] [i_1] [i_2] [i_3] = 9684619963496096786ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        arr_63 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_0 % 2 == 0) ? (signed char)-120 : (signed char)42;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_66 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (unsigned char)219 : (unsigned char)88;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        arr_67 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_3 % 2 == 0) ? (signed char)-72 : (signed char)-9;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_68 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? -1665185309 : 1546582015;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_69 [i_0] = (i_0 % 2 == 0) ? 7844408557816073877ULL : 12788787553984093660ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_70 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)12698 : (unsigned short)8305;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_74 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)30854 : (short)8728;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_84 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? 1595558652 : 404954197;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_85 [i_0] = (i_0 % 2 == 0) ? 55576609U : 1860218433U;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                hash(&seed, arr_9 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_19 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_22 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_23 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_27 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_28 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 21; ++i_5) 
                            hash(&seed, arr_43 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    hash(&seed, arr_44 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                hash(&seed, arr_45 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    hash(&seed, arr_50 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        hash(&seed, arr_63 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    hash(&seed, arr_66 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        hash(&seed, arr_67 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    hash(&seed, arr_68 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_69 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_70 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_74 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    hash(&seed, arr_84 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_85 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
