#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 986390984;
short var_2 = (short)11828;
short var_3 = (short)-32122;
short var_4 = (short)-3863;
_Bool var_5 = (_Bool)0;
_Bool var_6 = (_Bool)1;
unsigned char var_7 = (unsigned char)144;
unsigned char var_8 = (unsigned char)78;
long long int var_10 = 3372909544306340255LL;
unsigned long long int var_11 = 13612325542798492460ULL;
unsigned char var_12 = (unsigned char)174;
unsigned char var_13 = (unsigned char)103;
unsigned char var_14 = (unsigned char)134;
_Bool var_15 = (_Bool)1;
long long int var_16 = -8149382437775824381LL;
unsigned char var_17 = (unsigned char)231;
unsigned char var_19 = (unsigned char)162;
int zero = 0;
unsigned char var_20 = (unsigned char)91;
unsigned char var_21 = (unsigned char)92;
unsigned short var_22 = (unsigned short)57073;
unsigned short var_23 = (unsigned short)29562;
unsigned long long int var_24 = 17282954446084647701ULL;
_Bool var_25 = (_Bool)1;
long long int var_26 = -2309565821736609749LL;
long long int var_27 = -1837420984636680701LL;
unsigned char var_28 = (unsigned char)216;
_Bool var_29 = (_Bool)0;
unsigned char var_30 = (unsigned char)235;
unsigned char var_31 = (unsigned char)19;
unsigned char var_32 = (unsigned char)157;
long long int var_33 = -2246129378491611558LL;
short var_34 = (short)7391;
unsigned int var_35 = 630909425U;
unsigned short var_36 = (unsigned short)58711;
long long int var_37 = 5035006894360281140LL;
unsigned short var_38 = (unsigned short)20542;
_Bool var_39 = (_Bool)0;
_Bool var_40 = (_Bool)0;
unsigned char var_41 = (unsigned char)17;
unsigned char var_42 = (unsigned char)138;
short var_43 = (short)28937;
unsigned int var_44 = 3801940478U;
unsigned char var_45 = (unsigned char)2;
short var_46 = (short)-2525;
unsigned int var_47 = 3587416695U;
unsigned int var_48 = 3533060695U;
unsigned long long int var_49 = 17524742736159044900ULL;
long long int var_50 = 555721677595057592LL;
unsigned long long int var_51 = 6391080830509419324ULL;
_Bool var_52 = (_Bool)1;
long long int var_53 = 7590805470629032746LL;
unsigned int var_54 = 467770269U;
long long int var_55 = -237825771340316914LL;
_Bool var_56 = (_Bool)1;
short var_57 = (short)3530;
short var_58 = (short)26246;
unsigned int var_59 = 1801858718U;
short var_60 = (short)15538;
unsigned char var_61 = (unsigned char)154;
signed char var_62 = (signed char)-28;
unsigned short var_63 = (unsigned short)59283;
unsigned int var_64 = 182160315U;
long long int var_65 = -8402857324929854415LL;
short var_66 = (short)-12622;
unsigned short var_67 = (unsigned short)2854;
_Bool var_68 = (_Bool)0;
int var_69 = -1043474291;
unsigned long long int var_70 = 13533269853923949408ULL;
unsigned char var_71 = (unsigned char)136;
unsigned char var_72 = (unsigned char)71;
_Bool var_73 = (_Bool)0;
_Bool var_74 = (_Bool)0;
short var_75 = (short)27101;
short var_76 = (short)-14883;
long long int var_77 = -8292008726385060364LL;
_Bool var_78 = (_Bool)0;
signed char var_79 = (signed char)30;
short arr_0 [25] ;
_Bool arr_1 [25] [25] ;
unsigned int arr_2 [25] ;
unsigned int arr_3 [25] ;
short arr_4 [25] [25] [25] ;
unsigned char arr_6 [25] ;
unsigned short arr_7 [25] [25] [25] [25] ;
unsigned char arr_8 [25] [25] ;
unsigned char arr_9 [25] [25] ;
short arr_10 [25] [25] [25] [25] ;
unsigned long long int arr_11 [25] [25] [25] [25] [25] ;
signed char arr_12 [25] [25] ;
unsigned long long int arr_13 [25] [25] [25] [25] ;
unsigned int arr_15 [25] [25] [25] [25] [25] [25] ;
unsigned short arr_16 [25] [25] [25] [25] [25] [25] [25] ;
unsigned char arr_17 [25] [25] [25] [25] [25] ;
unsigned char arr_21 [25] [25] [25] [25] [25] [25] [25] ;
short arr_23 [25] ;
unsigned char arr_25 [25] [25] [25] ;
signed char arr_28 [25] [25] [25] [25] ;
unsigned long long int arr_30 [25] [25] [25] [25] [25] [25] [25] ;
unsigned short arr_31 [25] [25] [25] [25] [25] ;
unsigned char arr_32 [25] [25] [25] [25] [25] [25] [25] ;
unsigned char arr_45 [25] [25] [25] [25] ;
unsigned long long int arr_47 [25] [25] [25] [25] [25] [25] ;
unsigned int arr_59 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (short)23832;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = 1541993396U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = 3562993197U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (short)-10876;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_6 [i_0] = (unsigned char)247;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (unsigned short)63708;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_8 [i_0] [i_1] = (unsigned char)106;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_9 [i_0] [i_1] = (unsigned char)234;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (short)-2876;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] = 11406235280804895036ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_12 [i_0] [i_1] = (signed char)75;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = 3200912946056580271ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 25; ++i_5) 
                            arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 2744639641U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 25; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 25; ++i_6) 
                                arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (unsigned short)48113;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned char)72;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 25; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 25; ++i_6) 
                                arr_21 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (unsigned char)61;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_23 [i_0] = (short)21553;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_25 [i_0] [i_1] [i_2] = (unsigned char)242;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_28 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (signed char)-66 : (signed char)126;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 25; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 25; ++i_6) 
                                arr_30 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = 7622891963125701947ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        arr_31 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned short)33238;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 25; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 25; ++i_6) 
                                arr_32 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (unsigned char)155;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_45 [i_0] [i_1] [i_2] [i_3] = (unsigned char)186;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 25; ++i_5) 
                            arr_47 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_1 % 2 == 0) ? 12898666297804520932ULL : 8928061624010467363ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_59 [i_0] = 3610709937U;
}

void checksum() {
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
