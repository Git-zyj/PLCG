#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)18608;
unsigned int var_1 = 420752381U;
unsigned short var_2 = (unsigned short)47469;
signed char var_3 = (signed char)108;
unsigned int var_4 = 3862868182U;
unsigned int var_5 = 3214218864U;
int var_6 = -2097669432;
long long int var_7 = 2432738258952789926LL;
signed char var_8 = (signed char)-107;
long long int var_9 = 6593671899502845196LL;
unsigned int var_10 = 3524657926U;
int var_11 = -14595431;
int var_12 = -1245493800;
signed char var_13 = (signed char)54;
int zero = 0;
int var_14 = -1348672527;
unsigned short var_15 = (unsigned short)47621;
unsigned int var_16 = 1262738806U;
int var_17 = 262084926;
long long int var_18 = 3446344969308638101LL;
unsigned short var_19 = (unsigned short)23873;
unsigned int var_20 = 3470865979U;
long long int var_21 = -6468689527605638344LL;
long long int var_22 = 2671839847678907507LL;
signed char var_23 = (signed char)38;
signed char var_24 = (signed char)-54;
unsigned int var_25 = 1845716273U;
signed char var_26 = (signed char)37;
int var_27 = 1404569819;
unsigned int var_28 = 912283355U;
signed char var_29 = (signed char)60;
unsigned short var_30 = (unsigned short)5943;
signed char var_31 = (signed char)4;
signed char var_32 = (signed char)96;
signed char var_33 = (signed char)77;
long long int var_34 = -7138858529789589312LL;
unsigned int var_35 = 1933185404U;
unsigned short var_36 = (unsigned short)2899;
unsigned short var_37 = (unsigned short)3492;
unsigned short var_38 = (unsigned short)50549;
unsigned int var_39 = 314718823U;
int var_40 = 1010733878;
int var_41 = 1167011950;
unsigned short var_42 = (unsigned short)44867;
long long int var_43 = 2729445963324313906LL;
unsigned int var_44 = 2195203543U;
signed char var_45 = (signed char)-126;
unsigned int var_46 = 2763464593U;
long long int var_47 = -6196163876321983005LL;
unsigned int var_48 = 1850305744U;
signed char arr_1 [10] ;
long long int arr_3 [10] [10] [10] ;
unsigned int arr_4 [10] ;
long long int arr_8 [10] [10] ;
long long int arr_13 [10] [10] [10] [10] [10] ;
long long int arr_14 [10] [10] [10] [10] ;
int arr_16 [10] [10] [10] [10] [10] ;
unsigned int arr_21 [10] [10] [10] ;
signed char arr_23 [21] ;
long long int arr_24 [21] [21] ;
signed char arr_25 [21] [21] ;
int arr_26 [21] [21] ;
unsigned int arr_27 [21] ;
long long int arr_28 [21] [21] [21] ;
unsigned short arr_29 [21] [21] [21] ;
int arr_30 [21] [21] [21] ;
int arr_31 [21] [21] [21] [21] [21] ;
unsigned short arr_32 [21] [21] [21] [21] [21] [21] ;
unsigned short arr_33 [21] [21] [21] ;
int arr_34 [21] [21] [21] [21] ;
signed char arr_36 [19] ;
int arr_37 [19] ;
unsigned int arr_41 [20] ;
unsigned int arr_42 [20] ;
unsigned int arr_43 [20] [20] [20] ;
unsigned short arr_44 [20] [20] ;
int arr_45 [20] [20] ;
unsigned int arr_46 [20] ;
long long int arr_50 [20] [20] ;
unsigned int arr_51 [20] [20] [20] [20] [20] ;
unsigned short arr_54 [20] [20] [20] ;
unsigned int arr_58 [20] [20] ;
long long int arr_59 [20] ;
long long int arr_64 [20] [20] [20] ;
unsigned short arr_69 [20] [20] [20] ;
signed char arr_75 [20] [20] [20] ;
long long int arr_80 [20] ;
long long int arr_89 [25] ;
long long int arr_90 [25] ;
long long int arr_91 [25] ;
signed char arr_2 [10] ;
unsigned short arr_10 [10] [10] [10] [10] [10] [10] ;
long long int arr_11 [10] [10] [10] [10] [10] ;
unsigned int arr_35 [21] [21] ;
long long int arr_39 [19] ;
signed char arr_40 [19] ;
unsigned short arr_47 [20] [20] [20] ;
signed char arr_52 [20] ;
int arr_53 [20] [20] ;
unsigned short arr_60 [20] [20] ;
int arr_65 [20] [20] ;
unsigned int arr_66 [20] [20] ;
signed char arr_67 [20] ;
unsigned int arr_70 [20] [20] [20] [20] ;
unsigned short arr_71 [20] [20] [20] ;
signed char arr_76 [20] ;
unsigned short arr_77 [20] ;
unsigned short arr_78 [20] [20] [20] ;
signed char arr_79 [20] ;
unsigned int arr_84 [20] [20] ;
unsigned short arr_85 [20] [20] [20] ;
long long int arr_88 [10] ;
unsigned short arr_92 [25] ;
long long int arr_93 [25] ;
signed char arr_94 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (signed char)-43;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 2920153675219651184LL : 1179753463047628761LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 847922915U : 2246401973U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_8 [i_0] [i_1] = -7926321796252948833LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] = -3422323647620920566LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_14 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 7400581619436989263LL : -5759392127372816499LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] = -538505570;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_21 [i_0] [i_1] [i_2] = 51205639U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_23 [i_0] = (i_0 % 2 == 0) ? (signed char)-80 : (signed char)-35;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_24 [i_0] [i_1] = 3800537499052502926LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_25 [i_0] [i_1] = (signed char)11;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_26 [i_0] [i_1] = 621724374;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_27 [i_0] = 65548863U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_28 [i_0] [i_1] [i_2] = -6565068811857670094LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_29 [i_0] [i_1] [i_2] = (unsigned short)42155;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_30 [i_0] [i_1] [i_2] = 1727184711;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        arr_31 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? 8530397 : 1455483699;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 21; ++i_5) 
                            arr_32 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned short)28340;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_33 [i_0] [i_1] [i_2] = (unsigned short)35099;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_34 [i_0] [i_1] [i_2] [i_3] = -950759717;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_36 [i_0] = (signed char)90;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_37 [i_0] = -1875714185;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_41 [i_0] = 815130973U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_42 [i_0] = 3906927322U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_43 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 1827635091U : 3587894423U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_44 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)55537 : (unsigned short)15277;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_45 [i_0] [i_1] = -1314846966;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_46 [i_0] = 3236457615U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_50 [i_0] [i_1] = -4750182755795415801LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        arr_51 [i_0] [i_1] [i_2] [i_3] [i_4] = 2013725998U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_54 [i_0] [i_1] [i_2] = (unsigned short)43601;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_58 [i_0] [i_1] = (i_0 % 2 == 0) ? 3769809197U : 62529708U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_59 [i_0] = (i_0 % 2 == 0) ? 8285367525138032959LL : 7457392938582709696LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_64 [i_0] [i_1] [i_2] = -523736860217190446LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_69 [i_0] [i_1] [i_2] = (unsigned short)38486;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_75 [i_0] [i_1] [i_2] = (signed char)117;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_80 [i_0] = -4406791801404806178LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_89 [i_0] = 8688402287155724356LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_90 [i_0] = 2854510628558713116LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_91 [i_0] = 2587018702339875448LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (signed char)-77 : (signed char)-97;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 10; ++i_5) 
                            arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_2 % 2 == 0) ? (unsigned short)7570 : (unsigned short)12537;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? -8850578207507151337LL : -1129703373440933869LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_35 [i_0] [i_1] = (i_0 % 2 == 0) ? 2074522915U : 3458370789U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_39 [i_0] = (i_0 % 2 == 0) ? 1113695640841969278LL : -6553201399074067630LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_40 [i_0] = (i_0 % 2 == 0) ? (signed char)17 : (signed char)106;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_47 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned short)22891 : (unsigned short)45258;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_52 [i_0] = (i_0 % 2 == 0) ? (signed char)25 : (signed char)-3;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_53 [i_0] [i_1] = (i_1 % 2 == 0) ? -1896749752 : -647088229;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_60 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)36993 : (unsigned short)39651;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_65 [i_0] [i_1] = (i_0 % 2 == 0) ? -1344668029 : 162475036;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_66 [i_0] [i_1] = (i_1 % 2 == 0) ? 2857243495U : 603791838U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_67 [i_0] = (i_0 % 2 == 0) ? (signed char)-80 : (signed char)38;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_70 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? 2055160644U : 2154997408U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_71 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned short)16590 : (unsigned short)58364;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_76 [i_0] = (i_0 % 2 == 0) ? (signed char)22 : (signed char)107;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_77 [i_0] = (i_0 % 2 == 0) ? (unsigned short)55059 : (unsigned short)2310;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_78 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned short)39599 : (unsigned short)34693;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_79 [i_0] = (i_0 % 2 == 0) ? (signed char)-50 : (signed char)-47;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_84 [i_0] [i_1] = (i_1 % 2 == 0) ? 3271887311U : 1392155181U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_85 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned short)13494 : (unsigned short)60938;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_88 [i_0] = -5867890308557974083LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_92 [i_0] = (unsigned short)6730;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_93 [i_0] = 8795603084028426731LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_94 [i_0] = (signed char)23;
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
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 10; ++i_5) 
                            hash(&seed, arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        hash(&seed, arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_35 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_39 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_40 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                hash(&seed, arr_47 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_52 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_53 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_60 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_65 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_66 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_67 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    hash(&seed, arr_70 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                hash(&seed, arr_71 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_76 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_77 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                hash(&seed, arr_78 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_79 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_84 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                hash(&seed, arr_85 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_88 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_92 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_93 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_94 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
