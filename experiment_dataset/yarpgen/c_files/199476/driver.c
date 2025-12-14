#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 364444828;
unsigned int var_1 = 949230649U;
int var_2 = 2146410348;
short var_3 = (short)11731;
int var_4 = 492752157;
short var_5 = (short)5418;
short var_6 = (short)-8043;
unsigned int var_7 = 1457371595U;
unsigned long long int var_8 = 982115098084386022ULL;
signed char var_9 = (signed char)-112;
short var_10 = (short)-6015;
signed char var_11 = (signed char)-24;
int zero = 0;
unsigned long long int var_12 = 93732090704346960ULL;
unsigned int var_13 = 948107379U;
long long int var_14 = -4747626618585705812LL;
_Bool var_15 = (_Bool)1;
short var_16 = (short)-27907;
int var_17 = 1388094985;
int var_18 = 1594829010;
_Bool var_19 = (_Bool)0;
short var_20 = (short)-25613;
_Bool var_21 = (_Bool)1;
unsigned short var_22 = (unsigned short)17264;
unsigned char var_23 = (unsigned char)171;
signed char var_24 = (signed char)62;
unsigned short var_25 = (unsigned short)21124;
int var_26 = 1989522067;
short var_27 = (short)-14812;
long long int var_28 = -5569474233556777315LL;
signed char var_29 = (signed char)17;
unsigned char var_30 = (unsigned char)54;
short var_31 = (short)17744;
_Bool var_32 = (_Bool)0;
unsigned long long int var_33 = 8592243588362528747ULL;
_Bool var_34 = (_Bool)0;
signed char var_35 = (signed char)101;
unsigned int var_36 = 711490720U;
signed char var_37 = (signed char)-108;
signed char var_38 = (signed char)89;
unsigned long long int var_39 = 8693012220649498972ULL;
short var_40 = (short)5908;
unsigned int var_41 = 141457283U;
short var_42 = (short)13359;
short var_43 = (short)5307;
_Bool var_44 = (_Bool)1;
_Bool var_45 = (_Bool)1;
int var_46 = -1902867506;
short var_47 = (short)-9619;
signed char var_48 = (signed char)26;
short var_49 = (short)5252;
long long int var_50 = -877726893608297047LL;
short var_51 = (short)17631;
unsigned long long int var_52 = 14353834435600041308ULL;
unsigned long long int var_53 = 12598105869908932990ULL;
_Bool var_54 = (_Bool)0;
unsigned long long int var_55 = 10714255929317722240ULL;
unsigned char var_56 = (unsigned char)158;
unsigned int var_57 = 2052271999U;
_Bool var_58 = (_Bool)0;
_Bool var_59 = (_Bool)1;
signed char var_60 = (signed char)-126;
signed char var_61 = (signed char)124;
long long int var_62 = -7044298294716176521LL;
unsigned int var_63 = 1354549554U;
short var_64 = (short)10220;
unsigned int var_65 = 1895665704U;
unsigned long long int var_66 = 16306397826686957277ULL;
unsigned char var_67 = (unsigned char)186;
unsigned int var_68 = 1118546335U;
unsigned long long int var_69 = 7903244733456614955ULL;
int var_70 = -195729446;
long long int var_71 = 8954832381103692344LL;
unsigned long long int arr_0 [12] ;
signed char arr_2 [12] [12] ;
unsigned long long int arr_6 [12] [12] ;
unsigned short arr_8 [12] [12] [12] [12] ;
signed char arr_10 [11] ;
signed char arr_11 [11] [11] ;
short arr_12 [11] [11] ;
unsigned long long int arr_17 [11] [11] [11] [11] ;
unsigned char arr_20 [11] [11] [11] [11] [11] [11] ;
unsigned char arr_23 [11] [11] [11] [11] [11] [11] [11] ;
short arr_24 [11] [11] [11] [11] [11] [11] [11] ;
short arr_25 [11] [11] ;
_Bool arr_26 [11] ;
_Bool arr_27 [11] ;
long long int arr_28 [11] ;
short arr_29 [11] [11] [11] [11] ;
int arr_30 [11] [11] [11] [11] ;
signed char arr_31 [11] [11] [11] [11] ;
signed char arr_41 [11] [11] [11] [11] ;
short arr_42 [11] [11] [11] [11] ;
signed char arr_43 [11] [11] ;
unsigned long long int arr_44 [11] ;
unsigned short arr_55 [11] [11] [11] [11] [11] [11] ;
signed char arr_56 [11] ;
unsigned long long int arr_74 [11] [11] [11] ;
_Bool arr_76 [11] [11] [11] [11] ;
int arr_78 [11] [11] [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = 5886354260611124403ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)-6;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_6 [i_0] [i_1] = 13954927859195382343ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (unsigned short)41523;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_10 [i_0] = (signed char)-31;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_11 [i_0] [i_1] = (signed char)32;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_12 [i_0] [i_1] = (short)-29443;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = 12620960377333387489ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 11; ++i_5) 
                            arr_20 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned char)87;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 11; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 11; ++i_6) 
                                arr_23 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (unsigned char)126;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 11; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 11; ++i_6) 
                                arr_24 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (short)14723;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_25 [i_0] [i_1] = (short)-27205;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_26 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_27 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_28 [i_0] = -3524353314347124590LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_29 [i_0] [i_1] [i_2] [i_3] = (short)-7261;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_30 [i_0] [i_1] [i_2] [i_3] = 89616893;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_31 [i_0] [i_1] [i_2] [i_3] = (signed char)-18;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_41 [i_0] [i_1] [i_2] [i_3] = (signed char)-120;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_42 [i_0] [i_1] [i_2] [i_3] = (short)-11947;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_43 [i_0] [i_1] = (signed char)122;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_44 [i_0] = (i_0 % 2 == 0) ? 2272956141440788128ULL : 7087031921043159003ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 11; ++i_5) 
                            arr_55 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned short)13268;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_56 [i_0] = (i_0 % 2 == 0) ? (signed char)-15 : (signed char)-62;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_74 [i_0] [i_1] [i_2] = 14201535834428225059ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_76 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        arr_78 [i_0] [i_1] [i_2] [i_3] [i_4] = 240354655;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
