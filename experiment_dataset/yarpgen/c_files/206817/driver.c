#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)18;
signed char var_1 = (signed char)97;
unsigned char var_2 = (unsigned char)65;
long long int var_3 = -4023582207103495769LL;
short var_4 = (short)27895;
long long int var_5 = 681880141095884014LL;
_Bool var_6 = (_Bool)0;
unsigned short var_7 = (unsigned short)35839;
long long int var_8 = -2006533828510394143LL;
long long int var_9 = 4005078588201761715LL;
short var_10 = (short)20527;
int var_11 = 1335119126;
_Bool var_12 = (_Bool)0;
int zero = 0;
signed char var_13 = (signed char)111;
unsigned int var_14 = 2619437831U;
int var_15 = -1319948443;
short var_16 = (short)-16687;
unsigned long long int var_17 = 9860150176926392251ULL;
short var_18 = (short)13980;
signed char var_19 = (signed char)106;
signed char var_20 = (signed char)-84;
unsigned long long int var_21 = 15784980828366737957ULL;
short var_22 = (short)-11809;
unsigned long long int var_23 = 15218506597050544852ULL;
unsigned long long int var_24 = 14851025075787701118ULL;
long long int var_25 = -4998450807659577132LL;
unsigned int var_26 = 3774296699U;
unsigned int var_27 = 2040729536U;
unsigned short var_28 = (unsigned short)47355;
unsigned char var_29 = (unsigned char)5;
unsigned short var_30 = (unsigned short)63050;
short var_31 = (short)24708;
short var_32 = (short)-8095;
unsigned long long int var_33 = 4194266869356213852ULL;
short var_34 = (short)-4547;
signed char var_35 = (signed char)63;
int var_36 = -1502786379;
unsigned char var_37 = (unsigned char)120;
int var_38 = 1036794019;
short var_39 = (short)-8171;
_Bool var_40 = (_Bool)0;
short var_41 = (short)29934;
short var_42 = (short)15178;
long long int var_43 = -1255370917045605205LL;
unsigned long long int var_44 = 7349506500081380275ULL;
long long int var_45 = -5416239265415168715LL;
unsigned short var_46 = (unsigned short)14012;
unsigned short var_47 = (unsigned short)29594;
unsigned char var_48 = (unsigned char)182;
long long int var_49 = 962998279038139541LL;
int var_50 = -1081392864;
unsigned char var_51 = (unsigned char)54;
unsigned long long int var_52 = 16336792468157516032ULL;
unsigned short var_53 = (unsigned short)40672;
unsigned long long int var_54 = 6620536630324855345ULL;
signed char var_55 = (signed char)-56;
long long int var_56 = 8412367933625657293LL;
int var_57 = 1898913307;
unsigned int var_58 = 4144526949U;
short var_59 = (short)28526;
signed char var_60 = (signed char)-61;
unsigned short var_61 = (unsigned short)9028;
long long int var_62 = 1752360336049646746LL;
unsigned long long int var_63 = 7558865384540143409ULL;
signed char var_64 = (signed char)53;
signed char var_65 = (signed char)-123;
long long int var_66 = 8466528420080974486LL;
short var_67 = (short)17429;
signed char var_68 = (signed char)69;
long long int var_69 = -3092802417439440625LL;
unsigned char var_70 = (unsigned char)137;
int var_71 = 1043362359;
int var_72 = 1089022713;
signed char var_73 = (signed char)-32;
unsigned int var_74 = 2173488258U;
signed char var_75 = (signed char)93;
short var_76 = (short)31349;
int var_77 = 979728317;
short var_78 = (short)25958;
int var_79 = -2042686276;
int var_80 = -644985194;
short arr_0 [23] ;
unsigned char arr_2 [23] ;
signed char arr_3 [23] [23] ;
unsigned short arr_4 [23] [23] ;
long long int arr_5 [23] [23] ;
unsigned char arr_6 [23] [23] ;
int arr_7 [23] [23] [23] ;
signed char arr_8 [23] ;
unsigned char arr_9 [23] [23] [23] [23] ;
signed char arr_10 [23] ;
unsigned char arr_11 [23] [23] [23] [23] [23] [23] ;
unsigned char arr_12 [23] [23] [23] [23] [23] [23] ;
unsigned long long int arr_13 [23] [23] [23] [23] [23] [23] ;
signed char arr_18 [13] ;
short arr_19 [13] ;
short arr_20 [13] [13] [13] ;
unsigned int arr_21 [13] ;
unsigned short arr_24 [13] [13] ;
unsigned char arr_26 [13] [13] [13] [13] [13] [13] ;
long long int arr_28 [13] ;
int arr_29 [13] ;
unsigned char arr_30 [13] [13] ;
unsigned char arr_31 [13] ;
signed char arr_32 [13] [13] [13] ;
long long int arr_35 [13] [13] [13] ;
int arr_36 [13] [13] [13] [13] ;
short arr_39 [13] ;
short arr_40 [13] [13] ;
signed char arr_43 [13] [13] [13] [13] ;
short arr_49 [13] ;
_Bool arr_54 [18] ;
short arr_55 [18] ;
unsigned short arr_56 [18] ;
short arr_57 [18] [18] [18] ;
unsigned char arr_58 [18] [18] [18] [18] ;
signed char arr_59 [18] [18] [18] [18] ;
unsigned short arr_61 [18] [18] [18] ;
unsigned short arr_62 [18] [18] [18] [18] [18] [18] ;
short arr_65 [18] [18] ;
unsigned long long int arr_66 [18] [18] [18] ;
int arr_72 [18] [18] ;
signed char arr_75 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (short)5580;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (unsigned char)42;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)-20;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)21318;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_5 [i_0] [i_1] = 5760397765724059223LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned char)70;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = -102448321;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_8 [i_0] = (signed char)124;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (unsigned char)49 : (unsigned char)45;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_10 [i_0] = (signed char)-127;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned char)103;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned char)237;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_4 % 2 == 0) ? 12500146419752802848ULL : 14309927150692383431ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_18 [i_0] = (signed char)95;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_19 [i_0] = (short)21855;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_20 [i_0] [i_1] [i_2] = (short)-17483;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_21 [i_0] = 1544414416U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_24 [i_0] [i_1] = (unsigned short)62313;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            arr_26 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned char)251;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_28 [i_0] = (i_0 % 2 == 0) ? 1731575472945193924LL : -3574971438959024882LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_29 [i_0] = (i_0 % 2 == 0) ? -2039428374 : -1787580546;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_30 [i_0] [i_1] = (unsigned char)17;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_31 [i_0] = (unsigned char)77;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_32 [i_0] [i_1] [i_2] = (signed char)-125;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_35 [i_0] [i_1] [i_2] = 2720164784310620516LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_36 [i_0] [i_1] [i_2] [i_3] = -2017947580;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_39 [i_0] = (i_0 % 2 == 0) ? (short)27996 : (short)-26656;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_40 [i_0] [i_1] = (short)-18531;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_43 [i_0] [i_1] [i_2] [i_3] = (signed char)13;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_49 [i_0] = (short)19477;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_54 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_55 [i_0] = (short)6638;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_56 [i_0] = (unsigned short)4259;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_57 [i_0] [i_1] [i_2] = (short)-13510;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_58 [i_0] [i_1] [i_2] [i_3] = (unsigned char)67;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_59 [i_0] [i_1] [i_2] [i_3] = (signed char)105;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_61 [i_0] [i_1] [i_2] = (unsigned short)24328;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 18; ++i_5) 
                            arr_62 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned short)5238;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_65 [i_0] [i_1] = (short)-27879;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_66 [i_0] [i_1] [i_2] = 10525416890970278496ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_72 [i_0] [i_1] = (i_1 % 2 == 0) ? -651054378 : -20440327;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_75 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)41 : (signed char)46;
}

void checksum() {
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
