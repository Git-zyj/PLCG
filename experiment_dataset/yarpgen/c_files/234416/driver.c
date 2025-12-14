#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)77;
signed char var_1 = (signed char)19;
short var_2 = (short)28297;
short var_3 = (short)30392;
int var_4 = 1074340333;
signed char var_5 = (signed char)122;
unsigned int var_6 = 3085338652U;
signed char var_7 = (signed char)-3;
unsigned short var_8 = (unsigned short)24474;
unsigned long long int var_9 = 13504951890535041151ULL;
long long int var_10 = 5367665330528189186LL;
int zero = 0;
short var_11 = (short)15890;
long long int var_12 = 7286115559973490874LL;
_Bool var_13 = (_Bool)0;
_Bool var_14 = (_Bool)0;
_Bool var_15 = (_Bool)0;
unsigned long long int var_16 = 13620015820419311852ULL;
signed char var_17 = (signed char)-103;
unsigned int var_18 = 4167946360U;
long long int var_19 = -6495803819907891672LL;
_Bool var_20 = (_Bool)1;
short var_21 = (short)30547;
_Bool var_22 = (_Bool)0;
int var_23 = 1694466409;
unsigned int var_24 = 3366995021U;
long long int var_25 = 7231793626533043044LL;
unsigned short var_26 = (unsigned short)14617;
int var_27 = -1980058674;
int var_28 = 1166826986;
long long int var_29 = 6606069020695042519LL;
unsigned char var_30 = (unsigned char)166;
unsigned char var_31 = (unsigned char)114;
unsigned long long int var_32 = 13285812119225054595ULL;
unsigned char var_33 = (unsigned char)204;
unsigned long long int var_34 = 4459768557912148497ULL;
int var_35 = -2046139137;
unsigned short var_36 = (unsigned short)23806;
unsigned char var_37 = (unsigned char)65;
unsigned int var_38 = 1621309625U;
unsigned long long int var_39 = 4155779469177093242ULL;
unsigned int var_40 = 412404531U;
unsigned int var_41 = 2920244016U;
unsigned int var_42 = 3241567519U;
long long int var_43 = 6469240336820429597LL;
short var_44 = (short)-2051;
unsigned int var_45 = 3433934832U;
short var_46 = (short)-342;
long long int var_47 = -5315170891686913078LL;
long long int var_48 = 5272388093659940567LL;
signed char var_49 = (signed char)-29;
short var_50 = (short)18017;
short var_51 = (short)-31697;
int var_52 = -826415827;
unsigned int var_53 = 2737712891U;
short var_54 = (short)-3023;
_Bool var_55 = (_Bool)1;
_Bool var_56 = (_Bool)1;
unsigned long long int var_57 = 13363132056871822204ULL;
unsigned short var_58 = (unsigned short)49259;
_Bool var_59 = (_Bool)1;
long long int var_60 = -4846798239723203315LL;
long long int var_61 = -5070702567743876359LL;
unsigned int var_62 = 270375858U;
short var_63 = (short)-10557;
unsigned char var_64 = (unsigned char)84;
signed char var_65 = (signed char)-24;
_Bool var_66 = (_Bool)0;
int var_67 = -1177372847;
unsigned int var_68 = 1428159922U;
short var_69 = (short)-28707;
int var_70 = 203552315;
int var_71 = 1422632314;
_Bool var_72 = (_Bool)1;
long long int var_73 = -8503772209865304405LL;
unsigned long long int var_74 = 1710728774054956762ULL;
_Bool var_75 = (_Bool)1;
int var_76 = 1072959397;
unsigned char var_77 = (unsigned char)245;
unsigned int var_78 = 3081104019U;
signed char var_79 = (signed char)61;
unsigned int var_80 = 1820917741U;
unsigned int var_81 = 964763094U;
int var_82 = -2031146792;
int var_83 = -370023166;
int var_84 = -670413942;
_Bool var_85 = (_Bool)1;
unsigned char var_86 = (unsigned char)194;
unsigned long long int var_87 = 9534470223351620754ULL;
unsigned int var_88 = 4075701611U;
signed char var_89 = (signed char)93;
_Bool var_90 = (_Bool)0;
signed char var_91 = (signed char)-77;
short var_92 = (short)5687;
signed char var_93 = (signed char)96;
int var_94 = 698757161;
unsigned char var_95 = (unsigned char)46;
unsigned int var_96 = 3449665484U;
_Bool var_97 = (_Bool)0;
_Bool var_98 = (_Bool)1;
long long int var_99 = -1873521565149223679LL;
unsigned long long int arr_0 [21] ;
short arr_1 [21] ;
unsigned char arr_2 [21] [21] ;
unsigned int arr_3 [21] [21] ;
int arr_4 [21] ;
_Bool arr_5 [21] [21] [21] [21] ;
signed char arr_6 [21] [21] [21] ;
long long int arr_12 [21] ;
unsigned char arr_14 [21] [21] ;
unsigned int arr_15 [21] [21] ;
signed char arr_17 [21] [21] [21] [21] [21] ;
short arr_18 [21] ;
unsigned char arr_19 [21] [21] ;
signed char arr_20 [21] [21] [21] [21] [21] ;
short arr_21 [21] [21] [21] [21] [21] ;
signed char arr_25 [21] [21] [21] [21] [21] [21] [21] ;
short arr_29 [21] [21] [21] [21] ;
unsigned char arr_32 [21] [21] [21] [21] [21] ;
short arr_36 [21] [21] [21] [21] ;
int arr_40 [21] [21] [21] ;
int arr_44 [21] [21] [21] ;
unsigned long long int arr_51 [21] [21] [21] [21] ;
unsigned char arr_60 [21] [21] [21] [21] [21] [21] [21] ;
long long int arr_61 [21] [21] [21] [21] [21] ;
long long int arr_64 [21] [21] [21] [21] [21] [21] [21] ;
_Bool arr_77 [21] [21] [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = 8043450851045296926ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (short)19943;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)107;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_3 [i_0] [i_1] = 1345766020U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = 874236162;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (signed char)-72;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_12 [i_0] = 6237070814504816987LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_14 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)202 : (unsigned char)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_15 [i_0] [i_1] = 1359071401U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_1 % 2 == 0) ? (signed char)-96 : (signed char)-57;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_18 [i_0] = (short)-12277;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_19 [i_0] [i_1] = (unsigned char)143;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        arr_20 [i_0] [i_1] [i_2] [i_3] [i_4] = (signed char)120;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        arr_21 [i_0] [i_1] [i_2] [i_3] [i_4] = (short)-32041;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 21; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 21; ++i_6) 
                                arr_25 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (signed char)87;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_29 [i_0] [i_1] [i_2] [i_3] = (short)-4749;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        arr_32 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned char)14;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_36 [i_0] [i_1] [i_2] [i_3] = (short)13401;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_40 [i_0] [i_1] [i_2] = 1707739951;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_44 [i_0] [i_1] [i_2] = 669264575;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_51 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 9448748923648001893ULL : 18231808370712972565ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 21; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 21; ++i_6) 
                                arr_60 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (unsigned char)46;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        arr_61 [i_0] [i_1] [i_2] [i_3] [i_4] = -2293615112493454450LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 21; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 21; ++i_6) 
                                arr_64 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_0 % 2 == 0) ? 7834642743291819255LL : -629863317786436920LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        arr_77 [i_0] [i_1] [i_2] [i_3] [i_4] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_11);
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
    hash(&seed, var_89);
    hash(&seed, var_90);
    hash(&seed, var_91);
    hash(&seed, var_92);
    hash(&seed, var_93);
    hash(&seed, var_94);
    hash(&seed, var_95);
    hash(&seed, var_96);
    hash(&seed, var_97);
    hash(&seed, var_98);
    hash(&seed, var_99);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
