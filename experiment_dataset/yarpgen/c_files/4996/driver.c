#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)30078;
signed char var_1 = (signed char)-100;
long long int var_2 = -173030425546156483LL;
unsigned int var_5 = 3411442805U;
unsigned int var_6 = 2791973178U;
unsigned int var_8 = 1696957310U;
unsigned int var_9 = 3523381472U;
unsigned char var_11 = (unsigned char)93;
unsigned short var_12 = (unsigned short)15150;
long long int var_13 = -669024064425056421LL;
_Bool var_14 = (_Bool)0;
unsigned short var_15 = (unsigned short)9320;
unsigned char var_17 = (unsigned char)34;
unsigned long long int var_18 = 12880631150265629906ULL;
int zero = 0;
long long int var_19 = -5785708233819002576LL;
signed char var_20 = (signed char)-103;
_Bool var_21 = (_Bool)0;
short var_22 = (short)27752;
unsigned int var_23 = 2181022083U;
unsigned long long int var_24 = 6145158733066126502ULL;
int var_25 = 40578099;
unsigned long long int var_26 = 17599478304773968622ULL;
signed char var_27 = (signed char)-100;
_Bool var_28 = (_Bool)1;
unsigned long long int var_29 = 12347859049625466204ULL;
signed char var_30 = (signed char)-123;
unsigned char var_31 = (unsigned char)185;
_Bool var_32 = (_Bool)1;
_Bool var_33 = (_Bool)1;
unsigned int var_34 = 572417738U;
int var_35 = -811589259;
int var_36 = -93276175;
unsigned short var_37 = (unsigned short)63292;
_Bool var_38 = (_Bool)0;
unsigned int var_39 = 1426837803U;
int var_40 = -415644044;
signed char var_41 = (signed char)(-127 - 1);
unsigned int var_42 = 4086238417U;
unsigned int var_43 = 1574605934U;
unsigned long long int var_44 = 3034130457867240204ULL;
signed char var_45 = (signed char)-74;
unsigned char var_46 = (unsigned char)222;
signed char var_47 = (signed char)117;
unsigned int var_48 = 3835766726U;
long long int var_49 = -5763869980045842870LL;
int var_50 = 1287023084;
signed char var_51 = (signed char)119;
signed char var_52 = (signed char)-93;
_Bool var_53 = (_Bool)0;
unsigned int var_54 = 1331488516U;
unsigned int var_55 = 1990831868U;
unsigned int var_56 = 322181897U;
unsigned int var_57 = 3325011569U;
unsigned int var_58 = 639467076U;
unsigned int var_59 = 655084057U;
unsigned int var_60 = 1620392305U;
unsigned char var_61 = (unsigned char)227;
unsigned long long int var_62 = 8819892367710938065ULL;
_Bool var_63 = (_Bool)0;
signed char var_64 = (signed char)109;
signed char var_65 = (signed char)93;
_Bool var_66 = (_Bool)0;
short var_67 = (short)-10130;
signed char var_68 = (signed char)39;
unsigned char var_69 = (unsigned char)27;
signed char var_70 = (signed char)42;
_Bool var_71 = (_Bool)1;
unsigned short var_72 = (unsigned short)4385;
signed char var_73 = (signed char)109;
unsigned short var_74 = (unsigned short)57906;
_Bool var_75 = (_Bool)0;
_Bool var_76 = (_Bool)1;
signed char var_77 = (signed char)44;
unsigned long long int var_78 = 12951513855611448753ULL;
unsigned char var_79 = (unsigned char)86;
unsigned short var_80 = (unsigned short)52667;
_Bool var_81 = (_Bool)1;
int var_82 = -812289031;
signed char var_83 = (signed char)7;
_Bool var_84 = (_Bool)0;
unsigned int var_85 = 2542891506U;
signed char var_86 = (signed char)-94;
_Bool var_87 = (_Bool)1;
int var_88 = 546602475;
signed char arr_1 [18] [18] ;
long long int arr_2 [18] ;
signed char arr_3 [18] ;
unsigned short arr_4 [18] ;
long long int arr_5 [18] ;
int arr_6 [18] [18] ;
long long int arr_7 [18] [18] ;
unsigned char arr_8 [18] [18] [18] ;
unsigned short arr_10 [18] [18] [18] ;
long long int arr_12 [18] ;
_Bool arr_13 [18] ;
signed char arr_14 [18] [18] [18] [18] [18] [18] [18] ;
unsigned int arr_16 [18] [18] ;
unsigned int arr_17 [13] ;
int arr_19 [13] ;
unsigned long long int arr_20 [13] ;
unsigned char arr_24 [13] [13] [13] ;
int arr_25 [13] [13] [13] [13] ;
int arr_28 [13] [13] [13] [13] ;
_Bool arr_33 [13] [13] [13] [13] [13] ;
_Bool arr_46 [15] [15] ;
signed char arr_48 [15] [15] [15] ;
_Bool arr_50 [15] ;
int arr_51 [15] [15] [15] [15] ;
unsigned long long int arr_54 [15] ;
unsigned short arr_55 [15] [15] [15] ;
_Bool arr_62 [15] [15] [15] [15] [15] [15] ;
unsigned long long int arr_65 [15] [15] [15] [15] [15] [15] [15] ;
unsigned long long int arr_66 [15] [15] ;
signed char arr_67 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_1 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)-76 : (signed char)65;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 5635857142778662644LL : -6010788425365733426LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (signed char)116;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (unsigned short)30906 : (unsigned short)12825;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_5 [i_0] = 7274113347154459883LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_6 [i_0] [i_1] = -1240843303;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_7 [i_0] [i_1] = (i_0 % 2 == 0) ? -939535688586799925LL : -5604449755517767010LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (unsigned char)29;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (unsigned short)30958;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_12 [i_0] = 3852636712116990678LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 18; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 18; ++i_6) 
                                arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_1 % 2 == 0) ? (signed char)106 : (signed char)-30;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_16 [i_0] [i_1] = 3120603815U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_17 [i_0] = 2381739762U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_19 [i_0] = -892822458;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_20 [i_0] = 3267747177071087803ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_24 [i_0] [i_1] [i_2] = (unsigned char)208;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_25 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? -1302403847 : -741533279;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_28 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? -2039595339 : -1235550518;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        arr_33 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_46 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_48 [i_0] [i_1] [i_2] = (signed char)69;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_50 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_51 [i_0] [i_1] [i_2] [i_3] = -2062451441;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_54 [i_0] = 1546112655011232716ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_55 [i_0] [i_1] [i_2] = (unsigned short)6177;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            arr_62 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 15; ++i_6) 
                                arr_65 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = 3560500558349011945ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_66 [i_0] [i_1] = 10519322032199739257ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_67 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)21 : (signed char)96;
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
    hash(&seed, var_64);
    hash(&seed, var_65);
    hash(&seed, var_66);
    hash(&seed, var_67);
    hash(&seed, var_68);
    hash(&seed, var_69);
    hash(&seed, var_70);
    hash(&seed, var_71);
    hash(&seed, var_72);
    hash(&seed, var_73);
    hash(&seed, var_74);
    hash(&seed, var_75);
    hash(&seed, var_76);
    hash(&seed, var_77);
    hash(&seed, var_78);
    hash(&seed, var_79);
    hash(&seed, var_80);
    hash(&seed, var_81);
    hash(&seed, var_82);
    hash(&seed, var_83);
    hash(&seed, var_84);
    hash(&seed, var_85);
    hash(&seed, var_86);
    hash(&seed, var_87);
    hash(&seed, var_88);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
