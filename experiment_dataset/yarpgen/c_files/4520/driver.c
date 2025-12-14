#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)18244;
unsigned int var_1 = 4069710817U;
long long int var_2 = -3793312349708033937LL;
long long int var_3 = -4775271889533830142LL;
long long int var_4 = 2026722409959898463LL;
int var_5 = 1044567011;
signed char var_6 = (signed char)22;
int var_7 = -1238468089;
unsigned char var_8 = (unsigned char)2;
unsigned long long int var_9 = 16465499828157353321ULL;
int zero = 0;
long long int var_10 = 7851326933901448083LL;
_Bool var_11 = (_Bool)0;
unsigned short var_12 = (unsigned short)30553;
unsigned long long int var_13 = 14525149516375287037ULL;
int var_14 = -1210975366;
_Bool var_15 = (_Bool)1;
long long int var_16 = 5716356804886710128LL;
unsigned short var_17 = (unsigned short)37642;
long long int var_18 = 4085145143789628231LL;
signed char var_19 = (signed char)31;
long long int var_20 = -1892832079624113526LL;
unsigned long long int var_21 = 58525083275807991ULL;
unsigned long long int var_22 = 17055584434544362641ULL;
unsigned short var_23 = (unsigned short)64507;
unsigned char var_24 = (unsigned char)164;
_Bool var_25 = (_Bool)0;
long long int var_26 = -7352485678545152206LL;
signed char var_27 = (signed char)13;
unsigned short var_28 = (unsigned short)20665;
unsigned short var_29 = (unsigned short)41350;
unsigned char var_30 = (unsigned char)0;
int var_31 = -541988678;
long long int var_32 = -7350396623431945657LL;
int var_33 = 932602021;
signed char var_34 = (signed char)16;
_Bool var_35 = (_Bool)0;
int var_36 = 2073360379;
long long int var_37 = -3200365364055697413LL;
long long int var_38 = -7367411248229322818LL;
_Bool var_39 = (_Bool)0;
unsigned char var_40 = (unsigned char)25;
long long int var_41 = 2156653402724116796LL;
unsigned char var_42 = (unsigned char)43;
int var_43 = 54789379;
unsigned long long int var_44 = 2161702708291568905ULL;
short var_45 = (short)-24199;
unsigned short var_46 = (unsigned short)29982;
int var_47 = -1120988695;
unsigned short var_48 = (unsigned short)64132;
unsigned short var_49 = (unsigned short)38200;
long long int var_50 = -2928231519858005666LL;
_Bool var_51 = (_Bool)1;
unsigned short var_52 = (unsigned short)62794;
long long int var_53 = -1714265039266060727LL;
unsigned short var_54 = (unsigned short)30743;
unsigned long long int var_55 = 16958931161175435398ULL;
unsigned short var_56 = (unsigned short)10615;
unsigned long long int var_57 = 17681887317672672502ULL;
unsigned char var_58 = (unsigned char)174;
unsigned char var_59 = (unsigned char)212;
_Bool var_60 = (_Bool)0;
long long int var_61 = 5775636461189744985LL;
unsigned short var_62 = (unsigned short)59353;
long long int var_63 = -4835470388199619978LL;
short var_64 = (short)9595;
short var_65 = (short)3427;
unsigned short var_66 = (unsigned short)26727;
unsigned short var_67 = (unsigned short)9438;
_Bool var_68 = (_Bool)1;
_Bool var_69 = (_Bool)0;
unsigned long long int var_70 = 14507516583417132934ULL;
unsigned long long int var_71 = 11215011521646988963ULL;
long long int var_72 = -2139545990523109789LL;
unsigned long long int var_73 = 13488436739866812967ULL;
long long int var_74 = 8046500966285035743LL;
short var_75 = (short)18836;
unsigned char arr_0 [16] [16] ;
unsigned long long int arr_1 [16] [16] ;
_Bool arr_2 [16] ;
unsigned char arr_4 [12] [12] ;
_Bool arr_5 [12] [12] ;
short arr_6 [12] ;
unsigned int arr_9 [12] [12] [12] [12] ;
long long int arr_12 [12] ;
int arr_13 [12] [12] [12] [12] ;
int arr_15 [12] [12] [12] ;
_Bool arr_17 [12] [12] [12] ;
int arr_19 [12] ;
unsigned short arr_20 [12] ;
int arr_23 [12] [12] [12] ;
_Bool arr_24 [12] [12] ;
_Bool arr_27 [12] [12] [12] ;
_Bool arr_31 [12] [12] [12] [12] ;
_Bool arr_34 [12] [12] [12] ;
long long int arr_35 [12] [12] [12] [12] [12] ;
unsigned char arr_42 [12] [12] [12] [12] [12] ;
unsigned int arr_43 [12] [12] [12] [12] [12] ;
signed char arr_57 [12] [12] [12] [12] [12] ;
long long int arr_68 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)124 : (unsigned char)225;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_1 [i_0] [i_1] = (i_1 % 2 == 0) ? 1720866035035527835ULL : 12998955239727209385ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)138;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_6 [i_0] = (short)-28419;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = 440437127U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_12 [i_0] = 3956407076425923749LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = 2007378472;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 174852943 : 2142517122;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_19 [i_0] = 487832592;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_20 [i_0] = (unsigned short)35225;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_23 [i_0] [i_1] [i_2] = 5939340;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_24 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_27 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_31 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_34 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        arr_35 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_0 % 2 == 0) ? -8808544450765891556LL : 6626277756170104309LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        arr_42 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned char)19;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        arr_43 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? 2884076773U : 1086617298U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        arr_57 [i_0] [i_1] [i_2] [i_3] [i_4] = (signed char)-18;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_68 [i_0] = -2562939459276269783LL;
}

void checksum() {
    hash(&seed, var_10);
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
