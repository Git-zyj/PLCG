#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1014136541U;
unsigned short var_1 = (unsigned short)52662;
unsigned short var_2 = (unsigned short)62849;
_Bool var_3 = (_Bool)0;
_Bool var_4 = (_Bool)0;
short var_5 = (short)-23528;
short var_6 = (short)24375;
unsigned char var_7 = (unsigned char)254;
short var_8 = (short)8198;
int var_9 = 2145870251;
unsigned char var_10 = (unsigned char)42;
unsigned char var_11 = (unsigned char)183;
int zero = 0;
unsigned long long int var_12 = 16928788875091322968ULL;
short var_13 = (short)-23568;
_Bool var_14 = (_Bool)0;
int var_15 = 213710424;
short var_16 = (short)-25823;
unsigned char var_17 = (unsigned char)110;
unsigned long long int var_18 = 2705794356689215310ULL;
unsigned int var_19 = 921294830U;
short var_20 = (short)14412;
short var_21 = (short)-25260;
_Bool var_22 = (_Bool)0;
unsigned short var_23 = (unsigned short)31650;
unsigned long long int var_24 = 11311301337743344056ULL;
unsigned short var_25 = (unsigned short)20153;
long long int var_26 = -3840770625027153431LL;
unsigned char var_27 = (unsigned char)180;
short var_28 = (short)15306;
unsigned long long int var_29 = 17114781174141586622ULL;
unsigned long long int var_30 = 9182815729564723500ULL;
short var_31 = (short)2543;
unsigned char var_32 = (unsigned char)92;
unsigned long long int var_33 = 16419561800720472379ULL;
unsigned long long int var_34 = 16136979058165201690ULL;
unsigned long long int var_35 = 9617308102539096059ULL;
signed char var_36 = (signed char)15;
unsigned short var_37 = (unsigned short)44262;
short var_38 = (short)-18923;
unsigned char var_39 = (unsigned char)138;
unsigned int var_40 = 2919075402U;
unsigned short var_41 = (unsigned short)10002;
int var_42 = -856183493;
unsigned long long int var_43 = 13511551391891525475ULL;
unsigned long long int var_44 = 10041702503574347862ULL;
long long int var_45 = 585204091620263046LL;
unsigned char var_46 = (unsigned char)255;
short var_47 = (short)25090;
short var_48 = (short)19177;
_Bool var_49 = (_Bool)1;
_Bool var_50 = (_Bool)0;
short var_51 = (short)-13906;
unsigned short var_52 = (unsigned short)17936;
_Bool var_53 = (_Bool)1;
short var_54 = (short)29576;
_Bool var_55 = (_Bool)1;
unsigned char var_56 = (unsigned char)20;
signed char var_57 = (signed char)-45;
short var_58 = (short)-21467;
long long int var_59 = -6309851807986193729LL;
unsigned char arr_0 [22] ;
unsigned long long int arr_1 [22] [22] ;
unsigned long long int arr_2 [22] ;
short arr_3 [22] ;
unsigned short arr_8 [16] ;
int arr_9 [16] [16] ;
long long int arr_15 [23] ;
unsigned short arr_16 [23] ;
unsigned long long int arr_18 [23] ;
long long int arr_19 [23] ;
int arr_20 [23] [23] ;
short arr_21 [23] [23] [23] ;
unsigned long long int arr_24 [23] ;
unsigned short arr_25 [23] [23] [23] [23] [23] ;
unsigned char arr_26 [23] [23] ;
_Bool arr_28 [23] [23] [23] ;
long long int arr_29 [23] ;
short arr_31 [23] ;
short arr_33 [23] [23] ;
short arr_37 [21] [21] ;
long long int arr_59 [16] [16] [16] ;
unsigned long long int arr_61 [16] [16] [16] ;
long long int arr_65 [16] [16] ;
_Bool arr_66 [16] [16] [16] [16] ;
long long int arr_79 [16] ;
unsigned long long int arr_4 [22] ;
unsigned int arr_13 [16] ;
unsigned char arr_14 [16] ;
unsigned long long int arr_27 [23] [23] [23] [23] ;
long long int arr_32 [23] [23] [23] [23] ;
unsigned long long int arr_35 [23] [23] [23] [23] ;
unsigned int arr_36 [23] [23] [23] [23] ;
unsigned short arr_39 [21] ;
short arr_40 [21] [21] ;
unsigned long long int arr_41 [21] ;
unsigned short arr_42 [21] ;
unsigned long long int arr_52 [21] [21] [21] ;
long long int arr_55 [21] [21] [21] [21] [21] [21] ;
unsigned int arr_58 [16] ;
short arr_74 [16] ;
unsigned long long int arr_77 [16] [16] [16] [16] ;
unsigned int arr_84 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (unsigned char)61;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_1 [i_0] [i_1] = 12246412322334414838ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = 432892944838095046ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = (short)14418;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_8 [i_0] = (unsigned short)54923;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_9 [i_0] [i_1] = 88572052;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_15 [i_0] = 8292329731688533234LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_16 [i_0] = (unsigned short)35217;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_18 [i_0] = 13467553113039130376ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_19 [i_0] = 8742310623479705066LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_20 [i_0] [i_1] = 1586991546;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_21 [i_0] [i_1] [i_2] = (short)17499;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_24 [i_0] = 7026365263324572513ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        arr_25 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned short)64049;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_26 [i_0] [i_1] = (unsigned char)243;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_28 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_29 [i_0] = (i_0 % 2 == 0) ? -1697511377781991622LL : 1963219047036060214LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_31 [i_0] = (i_0 % 2 == 0) ? (short)-2176 : (short)-19981;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_33 [i_0] [i_1] = (short)12409;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_37 [i_0] [i_1] = (short)9144;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_59 [i_0] [i_1] [i_2] = 4105196886416782543LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_61 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 4191136130186153200ULL : 2014600177990363781ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_65 [i_0] [i_1] = -8762936932584461797LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_66 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_79 [i_0] = (i_0 % 2 == 0) ? -5313254782937929145LL : 476471724442288028LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = 8714573745734096055ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_13 [i_0] = 3629474114U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_14 [i_0] = (unsigned char)33;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_27 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 3813850389688794962ULL : 11653437320819971416ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_32 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? 8923693794801988863LL : -6790381548709718521LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_35 [i_0] [i_1] [i_2] [i_3] = 6881876785368643557ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_36 [i_0] [i_1] [i_2] [i_3] = 3039217026U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_39 [i_0] = (unsigned short)11829;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_40 [i_0] [i_1] = (short)-3288;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_41 [i_0] = 12200279093446715718ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_42 [i_0] = (unsigned short)37385;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_52 [i_0] [i_1] [i_2] = 11890075799953802970ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 21; ++i_5) 
                            arr_55 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = -1078070647260537774LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_58 [i_0] = (i_0 % 2 == 0) ? 1219028352U : 1361360382U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_74 [i_0] = (i_0 % 2 == 0) ? (short)-21403 : (short)22246;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_77 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? 8308315625197719330ULL : 17559963275306073557ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_84 [i_0] = 3569037713U;
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
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    hash(&seed, arr_27 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    hash(&seed, arr_32 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    hash(&seed, arr_35 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    hash(&seed, arr_36 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_39 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_40 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_41 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_42 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                hash(&seed, arr_52 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 21; ++i_5) 
                            hash(&seed, arr_55 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_58 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_74 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    hash(&seed, arr_77 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_84 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
