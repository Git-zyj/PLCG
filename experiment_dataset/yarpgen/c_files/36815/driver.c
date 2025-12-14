#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)52;
_Bool var_1 = (_Bool)0;
_Bool var_2 = (_Bool)0;
unsigned long long int var_3 = 5825501235537516356ULL;
unsigned short var_4 = (unsigned short)3583;
_Bool var_5 = (_Bool)0;
unsigned int var_6 = 1119622271U;
short var_7 = (short)4029;
unsigned long long int var_8 = 7099696489863509933ULL;
unsigned char var_9 = (unsigned char)226;
short var_10 = (short)21578;
unsigned short var_11 = (unsigned short)6976;
unsigned char var_12 = (unsigned char)37;
unsigned short var_13 = (unsigned short)47191;
_Bool var_14 = (_Bool)0;
unsigned char var_15 = (unsigned char)151;
int zero = 0;
short var_16 = (short)-25168;
unsigned int var_17 = 2902751703U;
unsigned int var_18 = 708822878U;
unsigned char var_19 = (unsigned char)49;
_Bool var_20 = (_Bool)0;
_Bool var_21 = (_Bool)0;
unsigned long long int var_22 = 9027701628548174094ULL;
unsigned short var_23 = (unsigned short)50905;
unsigned long long int var_24 = 8614639711231788639ULL;
short var_25 = (short)-26196;
unsigned char var_26 = (unsigned char)239;
_Bool var_27 = (_Bool)0;
unsigned short var_28 = (unsigned short)9119;
_Bool var_29 = (_Bool)1;
long long int var_30 = -4730741185942954572LL;
unsigned long long int var_31 = 4043306450046066996ULL;
unsigned long long int var_32 = 2930309575456880014ULL;
unsigned long long int var_33 = 4349317062233404180ULL;
long long int var_34 = -4540100775506393828LL;
int var_35 = -133366153;
signed char var_36 = (signed char)105;
unsigned int var_37 = 2439627203U;
unsigned int var_38 = 1040945745U;
unsigned short var_39 = (unsigned short)27620;
unsigned int var_40 = 1046779495U;
signed char var_41 = (signed char)90;
short var_42 = (short)-18188;
unsigned char var_43 = (unsigned char)2;
int var_44 = 1862040818;
signed char var_45 = (signed char)85;
unsigned char var_46 = (unsigned char)143;
long long int var_47 = 5285488929100332911LL;
_Bool var_48 = (_Bool)0;
long long int var_49 = 2633060673968804180LL;
unsigned long long int var_50 = 5191672490905932217ULL;
unsigned char var_51 = (unsigned char)191;
unsigned short var_52 = (unsigned short)7966;
unsigned char var_53 = (unsigned char)21;
unsigned int var_54 = 327660302U;
unsigned long long int var_55 = 13055553763821174777ULL;
unsigned int var_56 = 2231547228U;
unsigned long long int var_57 = 8089779154064611070ULL;
_Bool var_58 = (_Bool)1;
unsigned int var_59 = 67150886U;
unsigned char var_60 = (unsigned char)31;
short var_61 = (short)-17825;
unsigned short var_62 = (unsigned short)5922;
unsigned long long int var_63 = 7619747905783850817ULL;
_Bool var_64 = (_Bool)1;
unsigned long long int var_65 = 1162191003401701646ULL;
unsigned int var_66 = 151956466U;
unsigned short var_67 = (unsigned short)13621;
long long int var_68 = -4128570794138729482LL;
unsigned long long int var_69 = 7853449341008633112ULL;
short var_70 = (short)7915;
_Bool var_71 = (_Bool)0;
short var_72 = (short)20170;
unsigned short var_73 = (unsigned short)63734;
int var_74 = -2133811178;
unsigned char var_75 = (unsigned char)178;
_Bool var_76 = (_Bool)0;
unsigned short var_77 = (unsigned short)51710;
short var_78 = (short)5153;
unsigned long long int var_79 = 5465561060390525983ULL;
_Bool var_80 = (_Bool)0;
unsigned long long int var_81 = 4394915631440781452ULL;
unsigned char arr_13 [24] ;
unsigned int arr_24 [24] [24] [24] [24] [24] [24] ;
_Bool arr_28 [24] [24] [24] [24] ;
unsigned short arr_33 [24] [24] [24] [24] [24] [24] ;
int arr_34 [24] [24] [24] [24] [24] ;
_Bool arr_38 [24] [24] ;
long long int arr_44 [24] ;
unsigned int arr_47 [24] [24] [24] ;
unsigned char arr_52 [24] [24] ;
unsigned int arr_68 [24] [24] ;
unsigned int arr_74 [24] [24] ;
signed char arr_87 [24] [24] [24] ;
unsigned short arr_99 [24] [24] [24] [24] ;
unsigned long long int arr_102 [24] [24] ;
long long int arr_103 [24] [24] ;
unsigned short arr_106 [24] [24] [24] ;
unsigned long long int arr_107 [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? (unsigned char)64 : (unsigned char)176;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 24; ++i_5) 
                            arr_24 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_5 % 2 == 0) ? 2505624087U : 4224344856U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_28 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 24; ++i_5) 
                            arr_33 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned short)36576;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        arr_34 [i_0] [i_1] [i_2] [i_3] [i_4] = 407234072;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_38 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_44 [i_0] = -517819521568452256LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_47 [i_0] [i_1] [i_2] = 1941712661U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_52 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)200 : (unsigned char)100;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_68 [i_0] [i_1] = 2173746875U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_74 [i_0] [i_1] = (i_0 % 2 == 0) ? 3393037986U : 4005018282U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_87 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (signed char)-103 : (signed char)121;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_99 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (unsigned short)12956 : (unsigned short)19083;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_102 [i_0] [i_1] = 6152908177379860834ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_103 [i_0] [i_1] = -3630739786575510411LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_106 [i_0] [i_1] [i_2] = (unsigned short)47581;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_107 [i_0] [i_1] [i_2] = 8369397601782150646ULL;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 24; ++i_5) 
                            hash(&seed, arr_24 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    hash(&seed, arr_28 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 24; ++i_5) 
                            hash(&seed, arr_33 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        hash(&seed, arr_34 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_38 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_44 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                hash(&seed, arr_47 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_52 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_68 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_74 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                hash(&seed, arr_87 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    hash(&seed, arr_99 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_102 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_103 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                hash(&seed, arr_106 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                hash(&seed, arr_107 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
