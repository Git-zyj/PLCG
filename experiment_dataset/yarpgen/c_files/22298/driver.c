#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)27766;
_Bool var_1 = (_Bool)1;
signed char var_2 = (signed char)-74;
long long int var_3 = -1545944595322682092LL;
unsigned int var_4 = 340298927U;
int var_5 = 1152134386;
unsigned int var_6 = 564433394U;
unsigned long long int var_7 = 16139624283148469906ULL;
int var_8 = 1985015971;
long long int var_9 = -4612544267058625405LL;
short var_10 = (short)9535;
unsigned long long int var_11 = 18294616797074756728ULL;
long long int var_12 = -7639656289717068526LL;
signed char var_13 = (signed char)24;
signed char var_14 = (signed char)-37;
signed char var_15 = (signed char)-105;
long long int var_16 = -6160970203444148953LL;
signed char var_17 = (signed char)12;
int zero = 0;
signed char var_18 = (signed char)125;
signed char var_19 = (signed char)104;
long long int var_20 = 576166031823417599LL;
unsigned char var_21 = (unsigned char)180;
unsigned short var_22 = (unsigned short)63457;
int var_23 = 972169704;
unsigned int var_24 = 4158647035U;
short var_25 = (short)30581;
int var_26 = -451844534;
_Bool var_27 = (_Bool)1;
_Bool var_28 = (_Bool)0;
unsigned short var_29 = (unsigned short)44264;
unsigned char var_30 = (unsigned char)183;
short var_31 = (short)3504;
unsigned int var_32 = 499088913U;
unsigned long long int var_33 = 6577015483354257426ULL;
short var_34 = (short)-28735;
int var_35 = 551600520;
signed char var_36 = (signed char)-54;
unsigned char var_37 = (unsigned char)241;
int var_38 = 1671863358;
unsigned int var_39 = 2548486999U;
unsigned long long int var_40 = 15445662261602690744ULL;
unsigned short var_41 = (unsigned short)36335;
signed char var_42 = (signed char)-49;
unsigned long long int var_43 = 17068735156158209277ULL;
int var_44 = 1405341363;
signed char var_45 = (signed char)82;
int var_46 = -682367793;
short var_47 = (short)17040;
_Bool var_48 = (_Bool)0;
_Bool var_49 = (_Bool)1;
signed char var_50 = (signed char)34;
unsigned int var_51 = 1441965616U;
unsigned short var_52 = (unsigned short)34235;
unsigned int var_53 = 4015361939U;
short var_54 = (short)-31880;
unsigned char var_55 = (unsigned char)151;
unsigned char var_56 = (unsigned char)108;
int var_57 = 1271446442;
_Bool var_58 = (_Bool)1;
short var_59 = (short)-1622;
short var_60 = (short)-2562;
long long int var_61 = -9041615348224411097LL;
short var_62 = (short)-14165;
unsigned char var_63 = (unsigned char)234;
short var_64 = (short)24582;
short var_65 = (short)-22911;
short var_66 = (short)-15103;
unsigned char var_67 = (unsigned char)178;
unsigned short var_68 = (unsigned short)32802;
unsigned char var_69 = (unsigned char)151;
unsigned long long int var_70 = 1688293788504750473ULL;
unsigned long long int var_71 = 7297007464231894583ULL;
unsigned char var_72 = (unsigned char)43;
unsigned int var_73 = 2247595705U;
unsigned short var_74 = (unsigned short)53773;
unsigned long long int var_75 = 3343974507713422697ULL;
int var_76 = 1099746445;
unsigned char var_77 = (unsigned char)21;
short var_78 = (short)-6030;
long long int var_79 = 2551419797683423245LL;
unsigned long long int var_80 = 5000144895361349300ULL;
unsigned int var_81 = 3141790372U;
short var_82 = (short)16613;
unsigned int var_83 = 3721634493U;
_Bool var_84 = (_Bool)0;
short var_85 = (short)15182;
unsigned long long int var_86 = 7244487486433940829ULL;
_Bool var_87 = (_Bool)1;
short var_88 = (short)7107;
signed char var_89 = (signed char)108;
unsigned long long int arr_1 [18] ;
short arr_2 [18] ;
unsigned int arr_3 [18] ;
short arr_4 [18] [18] [18] ;
unsigned int arr_5 [18] ;
unsigned char arr_6 [18] ;
int arr_7 [18] [18] [18] ;
long long int arr_8 [18] ;
short arr_10 [18] ;
_Bool arr_11 [18] [18] [18] [18] ;
long long int arr_13 [18] [18] [18] ;
long long int arr_14 [18] [18] [18] [18] [18] [18] ;
unsigned char arr_16 [18] [18] ;
signed char arr_17 [18] [18] [18] [18] ;
unsigned char arr_20 [18] [18] [18] [18] [18] ;
signed char arr_21 [18] [18] [18] [18] [18] [18] ;
unsigned short arr_23 [18] [18] ;
signed char arr_24 [18] [18] [18] [18] [18] [18] ;
unsigned short arr_26 [18] [18] [18] [18] [18] ;
short arr_28 [18] [18] [18] ;
short arr_29 [18] ;
unsigned long long int arr_30 [18] [18] [18] [18] [18] [18] ;
signed char arr_31 [18] [18] [18] [18] [18] [18] ;
int arr_32 [18] [18] [18] [18] [18] [18] ;
short arr_37 [18] [18] [18] [18] [18] ;
unsigned char arr_39 [18] [18] [18] [18] [18] [18] ;
unsigned short arr_40 [18] [18] [18] [18] [18] [18] ;
_Bool arr_48 [18] [18] [18] [18] [18] ;
long long int arr_51 [18] [18] [18] [18] ;
unsigned int arr_54 [18] [18] [18] ;
long long int arr_55 [18] [18] [18] [18] ;
unsigned int arr_59 [18] [18] [18] [18] ;
signed char arr_61 [18] [18] [18] ;
_Bool arr_62 [18] [18] [18] ;
short arr_67 [18] ;
unsigned short arr_71 [18] [18] [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = 13982268079213392165ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (short)26778;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = 3885483056U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (short)-17906;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_5 [i_0] = 3332233415U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_6 [i_0] = (unsigned char)31;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = 823897605;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_8 [i_0] = 335298903807249979LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_10 [i_0] = (short)30067;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = -7004977311174385972LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 18; ++i_5) 
                            arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 760783441911178316LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_16 [i_0] [i_1] = (unsigned char)91;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = (signed char)-19;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        arr_20 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned char)237;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 18; ++i_5) 
                            arr_21 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (signed char)-116;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_23 [i_0] [i_1] = (unsigned short)57943;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 18; ++i_5) 
                            arr_24 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (signed char)-49;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        arr_26 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned short)15515;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_28 [i_0] [i_1] [i_2] = (short)-5464;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_29 [i_0] = (short)4726;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 18; ++i_5) 
                            arr_30 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 11165548921524902821ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 18; ++i_5) 
                            arr_31 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (signed char)-24;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 18; ++i_5) 
                            arr_32 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 329512773;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        arr_37 [i_0] [i_1] [i_2] [i_3] [i_4] = (short)-32524;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 18; ++i_5) 
                            arr_39 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned char)129;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 18; ++i_5) 
                            arr_40 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned short)13623;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        arr_48 [i_0] [i_1] [i_2] [i_3] [i_4] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_51 [i_0] [i_1] [i_2] [i_3] = -4046322063747024654LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_54 [i_0] [i_1] [i_2] = 808740457U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_55 [i_0] [i_1] [i_2] [i_3] = 5912286039505020486LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_59 [i_0] [i_1] [i_2] [i_3] = 630757442U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_61 [i_0] [i_1] [i_2] = (signed char)75;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_62 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_67 [i_0] = (short)21716;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        arr_71 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned short)38416;
}

void checksum() {
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
