#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-17574;
unsigned long long int var_1 = 8126769487870489157ULL;
int var_2 = -64427008;
short var_3 = (short)18610;
signed char var_4 = (signed char)78;
signed char var_5 = (signed char)110;
signed char var_6 = (signed char)52;
short var_7 = (short)465;
short var_8 = (short)-5127;
short var_9 = (short)-10892;
short var_10 = (short)-26935;
signed char var_11 = (signed char)112;
unsigned long long int var_12 = 14115903546657105783ULL;
signed char var_13 = (signed char)97;
int zero = 0;
short var_14 = (short)28206;
unsigned long long int var_15 = 6553990144697390099ULL;
int var_16 = -1984093964;
int var_17 = -970473797;
unsigned long long int var_18 = 10441169324797580704ULL;
signed char var_19 = (signed char)54;
unsigned long long int var_20 = 7096019609072311723ULL;
unsigned long long int var_21 = 11242016484902343212ULL;
signed char var_22 = (signed char)63;
int var_23 = -458810400;
int var_24 = 2039451475;
short var_25 = (short)-30368;
int var_26 = -1924467620;
short var_27 = (short)-30450;
int var_28 = -827919674;
signed char var_29 = (signed char)-79;
short var_30 = (short)2122;
signed char var_31 = (signed char)-76;
signed char var_32 = (signed char)-39;
signed char var_33 = (signed char)4;
short var_34 = (short)1690;
unsigned long long int var_35 = 13872125265326122459ULL;
signed char var_36 = (signed char)-120;
short var_37 = (short)3115;
short var_38 = (short)-12047;
int var_39 = -384925921;
short var_40 = (short)196;
short var_41 = (short)-12689;
short var_42 = (short)-22210;
unsigned long long int var_43 = 5969260666368922837ULL;
signed char var_44 = (signed char)68;
int var_45 = 430117924;
short var_46 = (short)-3905;
int var_47 = 1036792669;
short var_48 = (short)-9311;
short var_49 = (short)30513;
int var_50 = 138799502;
short var_51 = (short)24803;
int var_52 = -539330365;
signed char var_53 = (signed char)50;
int var_54 = -1185043802;
short var_55 = (short)571;
signed char var_56 = (signed char)-92;
short var_57 = (short)22611;
unsigned long long int var_58 = 13412015926882376737ULL;
short var_59 = (short)7900;
unsigned long long int var_60 = 7232498922608403431ULL;
signed char var_61 = (signed char)70;
signed char var_62 = (signed char)-34;
signed char var_63 = (signed char)76;
short var_64 = (short)-10284;
unsigned long long int var_65 = 15592779978761257710ULL;
short var_66 = (short)28517;
signed char var_67 = (signed char)118;
short var_68 = (short)-10633;
int arr_2 [20] ;
signed char arr_3 [20] [20] [20] ;
signed char arr_5 [20] [20] [20] ;
signed char arr_9 [20] [20] [20] ;
unsigned long long int arr_13 [20] [20] [20] [20] [20] [20] ;
signed char arr_15 [22] [22] ;
short arr_17 [21] ;
short arr_18 [21] ;
signed char arr_21 [21] ;
int arr_25 [24] ;
signed char arr_26 [24] ;
short arr_28 [23] ;
short arr_29 [23] [23] ;
signed char arr_30 [23] ;
int arr_34 [23] [23] ;
signed char arr_35 [23] [23] [23] ;
unsigned long long int arr_37 [23] [23] [23] ;
short arr_38 [23] [23] [23] [23] ;
short arr_46 [23] [23] [23] [23] ;
short arr_50 [23] [23] ;
unsigned long long int arr_54 [23] [23] [23] [23] [23] [23] ;
short arr_60 [23] [23] ;
int arr_65 [23] [23] [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = 1707617521;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (signed char)110;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (signed char)-14;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (signed char)-122 : (signed char)13;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 20; ++i_5) 
                            arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_4 % 2 == 0) ? 10289146689005430887ULL : 15234171509139752690ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_15 [i_0] [i_1] = (signed char)-24;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_17 [i_0] = (short)-29866;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_18 [i_0] = (short)21999;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_21 [i_0] = (signed char)77;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_25 [i_0] = 1555462178;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_26 [i_0] = (i_0 % 2 == 0) ? (signed char)115 : (signed char)76;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_28 [i_0] = (short)-21319;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_29 [i_0] [i_1] = (short)12167;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_30 [i_0] = (signed char)120;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_34 [i_0] [i_1] = 659322564;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_35 [i_0] [i_1] [i_2] = (signed char)81;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_37 [i_0] [i_1] [i_2] = 10294335094176966544ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_38 [i_0] [i_1] [i_2] [i_3] = (short)-25557;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_46 [i_0] [i_1] [i_2] [i_3] = (short)-2249;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_50 [i_0] [i_1] = (short)18549;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            arr_54 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 7424211388705133669ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_60 [i_0] [i_1] = (short)12193;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        arr_65 [i_0] [i_1] [i_2] [i_3] [i_4] = 1052250376;
}

void checksum() {
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
