#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)33138;
long long int var_1 = -1097066643592677212LL;
long long int var_2 = 7043926973953074911LL;
unsigned int var_3 = 3047146526U;
long long int var_4 = 1858930030776204190LL;
unsigned char var_5 = (unsigned char)120;
unsigned long long int var_6 = 3976368432496427277ULL;
signed char var_7 = (signed char)-120;
unsigned short var_8 = (unsigned short)19937;
long long int var_9 = 9144406899229908518LL;
unsigned int var_10 = 4294858661U;
long long int var_11 = 1236778314399403741LL;
int zero = 0;
short var_12 = (short)-22749;
unsigned short var_13 = (unsigned short)5390;
int var_14 = -170117467;
unsigned char var_15 = (unsigned char)75;
unsigned int var_16 = 2374312381U;
signed char var_17 = (signed char)-27;
_Bool var_18 = (_Bool)0;
unsigned short var_19 = (unsigned short)31257;
short var_20 = (short)-12576;
unsigned char var_21 = (unsigned char)113;
unsigned char var_22 = (unsigned char)38;
int var_23 = 489827088;
signed char var_24 = (signed char)8;
signed char var_25 = (signed char)34;
unsigned int var_26 = 2062875047U;
unsigned short var_27 = (unsigned short)45260;
unsigned short var_28 = (unsigned short)7701;
_Bool var_29 = (_Bool)0;
signed char var_30 = (signed char)110;
short var_31 = (short)4764;
signed char var_32 = (signed char)66;
unsigned long long int var_33 = 7545432113984980358ULL;
signed char var_34 = (signed char)72;
unsigned char var_35 = (unsigned char)18;
_Bool var_36 = (_Bool)0;
unsigned int var_37 = 4220129865U;
unsigned char var_38 = (unsigned char)241;
signed char var_39 = (signed char)43;
unsigned long long int var_40 = 4722940612467135169ULL;
unsigned char var_41 = (unsigned char)137;
signed char var_42 = (signed char)-98;
signed char var_43 = (signed char)116;
unsigned short var_44 = (unsigned short)41343;
unsigned short var_45 = (unsigned short)11586;
unsigned char var_46 = (unsigned char)84;
unsigned char var_47 = (unsigned char)213;
unsigned int var_48 = 4160585795U;
unsigned int var_49 = 1639386003U;
unsigned int var_50 = 116525815U;
unsigned long long int var_51 = 11343057684344692145ULL;
unsigned int var_52 = 2143531924U;
unsigned char var_53 = (unsigned char)57;
long long int var_54 = 1856454066951144149LL;
long long int var_55 = -3793355790623250398LL;
unsigned short var_56 = (unsigned short)11257;
unsigned long long int var_57 = 849655113999720868ULL;
int var_58 = 1083221782;
unsigned long long int var_59 = 16537355709220047020ULL;
signed char var_60 = (signed char)51;
unsigned char var_61 = (unsigned char)208;
_Bool var_62 = (_Bool)0;
unsigned long long int var_63 = 10485046691660454300ULL;
unsigned long long int var_64 = 416235487939484269ULL;
_Bool var_65 = (_Bool)1;
signed char var_66 = (signed char)30;
unsigned int var_67 = 4149488926U;
long long int var_68 = -1430899707115415929LL;
unsigned char var_69 = (unsigned char)108;
unsigned int var_70 = 2624017680U;
unsigned int var_71 = 27434733U;
unsigned short var_72 = (unsigned short)28846;
unsigned char var_73 = (unsigned char)40;
signed char var_74 = (signed char)-80;
signed char var_75 = (signed char)-67;
long long int var_76 = 8017937999845751333LL;
signed char var_77 = (signed char)26;
unsigned char var_78 = (unsigned char)21;
long long int var_79 = 1700468570187002455LL;
_Bool var_80 = (_Bool)0;
signed char var_81 = (signed char)47;
unsigned long long int var_82 = 17938503710412022349ULL;
long long int var_83 = -6780092473846576059LL;
signed char arr_0 [17] ;
long long int arr_1 [17] ;
unsigned int arr_2 [17] ;
signed char arr_3 [17] ;
unsigned long long int arr_4 [17] ;
signed char arr_5 [15] ;
signed char arr_6 [15] ;
signed char arr_7 [15] [15] ;
short arr_9 [15] [15] [15] [15] ;
long long int arr_10 [15] [15] [15] [15] ;
long long int arr_11 [15] [15] [15] [15] ;
unsigned char arr_13 [15] [15] [15] [15] ;
unsigned int arr_14 [15] [15] [15] [15] ;
int arr_15 [13] [13] ;
_Bool arr_16 [13] ;
short arr_17 [13] ;
long long int arr_18 [13] ;
long long int arr_21 [13] ;
signed char arr_25 [13] [13] [13] [13] ;
unsigned long long int arr_26 [13] [13] ;
short arr_27 [13] [13] [13] [13] [13] ;
signed char arr_30 [13] [13] [13] [13] [13] ;
long long int arr_32 [13] [13] ;
signed char arr_33 [13] [13] ;
signed char arr_35 [13] [13] ;
unsigned int arr_40 [13] [13] [13] [13] ;
unsigned long long int arr_41 [13] [13] [13] [13] ;
signed char arr_43 [13] ;
unsigned char arr_44 [13] [13] [13] [13] [13] [13] [13] ;
long long int arr_45 [13] [13] [13] [13] [13] [13] ;
unsigned int arr_47 [13] ;
unsigned char arr_50 [13] [13] [13] [13] ;
signed char arr_54 [13] [13] [13] [13] ;
short arr_56 [13] [13] [13] [13] [13] [13] ;
unsigned short arr_61 [13] [13] [13] [13] ;
short arr_62 [13] [13] [13] [13] ;
signed char arr_63 [13] ;
unsigned short arr_65 [13] [13] ;
unsigned short arr_69 [13] [13] ;
unsigned short arr_77 [13] [13] [13] [13] [13] [13] ;
unsigned short arr_79 [13] [13] [13] [13] [13] [13] [13] ;
unsigned int arr_90 [13] [13] ;
_Bool arr_96 [13] [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (signed char)-26;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = 3783641110153044485LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = 2102741997U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = (signed char)92;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = 15468366836385628461ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = (signed char)6;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_6 [i_0] = (signed char)72;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_7 [i_0] [i_1] = (signed char)122;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (short)17216;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = 1501726149144776164LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = -2627712456547537890LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = (unsigned char)55;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_14 [i_0] [i_1] [i_2] [i_3] = 3976092945U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_15 [i_0] [i_1] = -62017435;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_16 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_17 [i_0] = (short)-911;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_18 [i_0] = 6809893416278849096LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_21 [i_0] = 1445323181173930474LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_25 [i_0] [i_1] [i_2] [i_3] = (signed char)-1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_26 [i_0] [i_1] = 13249643457765011316ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        arr_27 [i_0] [i_1] [i_2] [i_3] [i_4] = (short)-14713;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        arr_30 [i_0] [i_1] [i_2] [i_3] [i_4] = (signed char)-8;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_32 [i_0] [i_1] = -4663238025071597708LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_33 [i_0] [i_1] = (signed char)-5;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_35 [i_0] [i_1] = (signed char)-119;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_40 [i_0] [i_1] [i_2] [i_3] = 4128587344U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_41 [i_0] [i_1] [i_2] [i_3] = 13730791574671817320ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_43 [i_0] = (i_0 % 2 == 0) ? (signed char)27 : (signed char)-99;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 13; ++i_6) 
                                arr_44 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (unsigned char)52;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            arr_45 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 1025844479332773703LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_47 [i_0] = 2040791985U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_50 [i_0] [i_1] [i_2] [i_3] = (unsigned char)192;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_54 [i_0] [i_1] [i_2] [i_3] = (signed char)109;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            arr_56 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (short)8839;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_61 [i_0] [i_1] [i_2] [i_3] = (unsigned short)42048;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_62 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (short)-24230 : (short)-11985;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_63 [i_0] = (signed char)-89;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_65 [i_0] [i_1] = (unsigned short)1039;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_69 [i_0] [i_1] = (unsigned short)56143;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            arr_77 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned short)37582;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 13; ++i_6) 
                                arr_79 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (unsigned short)9020;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_90 [i_0] [i_1] = 1661272634U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_96 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
