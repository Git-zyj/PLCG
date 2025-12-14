#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14913143289901914256ULL;
short var_1 = (short)3489;
int var_3 = -1857563354;
long long int var_4 = 3609668313285325297LL;
unsigned long long int var_5 = 14130693614697613416ULL;
int var_6 = 791164041;
unsigned char var_7 = (unsigned char)64;
unsigned char var_8 = (unsigned char)89;
short var_9 = (short)25574;
unsigned char var_10 = (unsigned char)152;
unsigned char var_11 = (unsigned char)36;
unsigned long long int var_12 = 3250476708754135624ULL;
short var_13 = (short)-241;
int var_14 = -1479635948;
long long int var_15 = 2954627096759559243LL;
int zero = 0;
short var_16 = (short)-25387;
unsigned long long int var_17 = 8795711286388840215ULL;
unsigned char var_18 = (unsigned char)166;
unsigned long long int var_19 = 15631680262009697540ULL;
short var_20 = (short)-2305;
short var_21 = (short)31887;
unsigned long long int var_22 = 10606859273258433635ULL;
short var_23 = (short)-26173;
unsigned char var_24 = (unsigned char)100;
unsigned char var_25 = (unsigned char)38;
short var_26 = (short)-28462;
short var_27 = (short)27448;
unsigned long long int var_28 = 7447401348986020199ULL;
long long int var_29 = -5119794800712861042LL;
int var_30 = 451657171;
short var_31 = (short)1344;
unsigned long long int var_32 = 9802508339045908498ULL;
long long int var_33 = 1249788651119822634LL;
short var_34 = (short)5521;
int var_35 = 846664948;
short var_36 = (short)14112;
unsigned char var_37 = (unsigned char)110;
unsigned long long int var_38 = 1687808343547331581ULL;
short var_39 = (short)23577;
unsigned char var_40 = (unsigned char)92;
short var_41 = (short)18332;
unsigned int var_42 = 1919637474U;
short var_43 = (short)-8891;
unsigned int var_44 = 3622642202U;
short var_45 = (short)14715;
long long int var_46 = -6930394974693674613LL;
short var_47 = (short)-15980;
unsigned long long int var_48 = 8946276932443951586ULL;
unsigned long long int var_49 = 11509279196775504067ULL;
int var_50 = -545839856;
long long int var_51 = 1208081473557048553LL;
long long int var_52 = -3526850649147397530LL;
unsigned long long int var_53 = 12184518404858723006ULL;
unsigned long long int var_54 = 6991766431667696874ULL;
short var_55 = (short)-21135;
unsigned long long int var_56 = 4674509472480943314ULL;
short var_57 = (short)-14501;
short var_58 = (short)26936;
short var_59 = (short)11650;
short var_60 = (short)-5940;
long long int var_61 = -5168728001463442204LL;
long long int var_62 = 3334119276690318961LL;
short var_63 = (short)-17799;
short var_64 = (short)22765;
unsigned int var_65 = 2987794671U;
short var_66 = (short)-27042;
short var_67 = (short)-19733;
unsigned long long int var_68 = 7803769305116726712ULL;
short var_69 = (short)-13078;
unsigned long long int var_70 = 15006740624539051368ULL;
unsigned char var_71 = (unsigned char)184;
unsigned long long int var_72 = 13660156196870558319ULL;
short arr_0 [16] [16] ;
int arr_1 [16] ;
short arr_2 [16] ;
unsigned char arr_3 [16] [16] ;
short arr_4 [16] ;
short arr_7 [16] [16] ;
short arr_9 [16] [16] [16] ;
short arr_10 [16] [16] ;
unsigned char arr_11 [16] [16] [16] [16] [16] ;
unsigned long long int arr_13 [16] [16] [16] [16] [16] ;
long long int arr_15 [16] [16] [16] [16] ;
int arr_16 [16] [16] [16] [16] [16] ;
unsigned int arr_17 [16] [16] [16] [16] [16] ;
long long int arr_18 [16] [16] [16] [16] ;
short arr_19 [16] [16] [16] [16] [16] ;
unsigned char arr_20 [16] [16] [16] [16] [16] ;
unsigned int arr_26 [14] ;
unsigned char arr_29 [25] ;
unsigned long long int arr_30 [25] [25] ;
unsigned long long int arr_35 [14] [14] ;
short arr_38 [14] [14] [14] ;
short arr_40 [14] [14] ;
short arr_45 [14] [14] [14] ;
unsigned long long int arr_46 [14] [14] ;
long long int arr_48 [14] [14] [14] ;
unsigned long long int arr_49 [14] [14] ;
long long int arr_50 [14] [14] [14] [14] ;
unsigned char arr_51 [14] [14] [14] [14] ;
short arr_54 [14] [14] [14] [14] [14] ;
unsigned char arr_55 [14] [14] [14] [14] [14] ;
short arr_57 [14] [14] [14] [14] [14] [14] [14] ;
short arr_62 [14] [14] [14] [14] ;
short arr_66 [14] [14] [14] [14] ;
short arr_72 [10] ;
short arr_73 [10] ;
unsigned long long int arr_77 [10] [10] ;
short arr_80 [10] [10] [10] ;
long long int arr_110 [10] ;
unsigned char arr_112 [10] ;
unsigned long long int arr_119 [18] ;
unsigned long long int arr_121 [18] ;
short arr_126 [18] [18] [18] [18] ;
long long int arr_127 [18] [18] [18] [18] ;
unsigned long long int arr_135 [18] [18] [18] [18] [18] [18] ;
unsigned char arr_5 [16] ;
short arr_14 [16] [16] [16] [16] ;
unsigned long long int arr_24 [16] [16] [16] [16] ;
short arr_25 [16] [16] ;
short arr_28 [14] ;
unsigned char arr_31 [25] ;
short arr_32 [25] ;
short arr_33 [25] ;
unsigned char arr_41 [14] ;
short arr_42 [14] [14] ;
unsigned int arr_52 [14] [14] [14] [14] [14] ;
unsigned int arr_58 [14] [14] ;
short arr_59 [14] [14] [14] [14] [14] ;
short arr_60 [14] [14] [14] [14] [14] [14] ;
unsigned char arr_61 [14] [14] ;
short arr_68 [14] [14] [14] ;
int arr_69 [14] ;
unsigned char arr_70 [14] ;
unsigned char arr_74 [10] [10] ;
long long int arr_75 [10] [10] ;
unsigned long long int arr_88 [10] ;
unsigned char arr_91 [10] [10] [10] ;
short arr_92 [10] ;
short arr_101 [10] [10] [10] [10] [10] [10] ;
unsigned int arr_104 [10] ;
int arr_117 [13] ;
unsigned char arr_129 [18] [18] [18] [18] ;
unsigned char arr_130 [18] [18] [18] ;
unsigned long long int arr_136 [18] [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = (short)-11221;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = 1328851681;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (short)-29537;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)175;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = (short)3621;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_7 [i_0] [i_1] = (short)-21990;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (short)-186;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_10 [i_0] [i_1] = (short)-20435;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned char)252;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] = 12205290494905795318ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_15 [i_0] [i_1] [i_2] [i_3] = -6932510824492255593LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] = -1167931737;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] = 247991260U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_18 [i_0] [i_1] [i_2] [i_3] = -8393773307669918063LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        arr_19 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_0 % 2 == 0) ? (short)13798 : (short)21143;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        arr_20 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned char)219;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_26 [i_0] = 4134403637U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_29 [i_0] = (unsigned char)122;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_30 [i_0] [i_1] = 6757725231860380709ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_35 [i_0] [i_1] = 8560420294439981334ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_38 [i_0] [i_1] [i_2] = (short)-21723;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_40 [i_0] [i_1] = (short)-21695;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_45 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (short)343 : (short)7223;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_46 [i_0] [i_1] = (i_0 % 2 == 0) ? 8639516978624395672ULL : 3418625630544047408ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_48 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? -677912642081669189LL : -107325228217991526LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_49 [i_0] [i_1] = (i_0 % 2 == 0) ? 6761900432779387223ULL : 5656666966184124111ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_50 [i_0] [i_1] [i_2] [i_3] = -827909479671872573LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_51 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (unsigned char)37 : (unsigned char)116;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_54 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_1 % 2 == 0) ? (short)14388 : (short)-9092;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_55 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned char)213;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 14; ++i_6) 
                                arr_57 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (short)13011;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_62 [i_0] [i_1] [i_2] [i_3] = (short)-20836;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_66 [i_0] [i_1] [i_2] [i_3] = (short)32157;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_72 [i_0] = (short)-12946;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_73 [i_0] = (short)17148;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_77 [i_0] [i_1] = 13458467050250069835ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_80 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (short)-20324 : (short)-26272;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_110 [i_0] = 6720098766946502540LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_112 [i_0] = (unsigned char)113;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_119 [i_0] = 15722805933279572475ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_121 [i_0] = 9559571352114397442ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_126 [i_0] [i_1] [i_2] [i_3] = (short)29362;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_127 [i_0] [i_1] [i_2] [i_3] = 1339958864472326008LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 18; ++i_5) 
                            arr_135 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 5865590363015325766ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = (unsigned char)132;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_14 [i_0] [i_1] [i_2] [i_3] = (short)-20000;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_24 [i_0] [i_1] [i_2] [i_3] = 13763117306732897362ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_25 [i_0] [i_1] = (short)7862;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_28 [i_0] = (short)-23270;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_31 [i_0] = (unsigned char)251;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_32 [i_0] = (short)15748;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_33 [i_0] = (short)24884;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_41 [i_0] = (unsigned char)20;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_42 [i_0] [i_1] = (short)-15237;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_52 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? 3901619815U : 1758293577U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_58 [i_0] [i_1] = (i_1 % 2 == 0) ? 413369158U : 935968198U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_59 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_3 % 2 == 0) ? (short)-20223 : (short)-5106;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            arr_60 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_4 % 2 == 0) ? (short)-2446 : (short)-11622;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_61 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)74 : (unsigned char)188;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_68 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (short)9836 : (short)-4549;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_69 [i_0] = -717701892;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_70 [i_0] = (unsigned char)12;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_74 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)127 : (unsigned char)123;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_75 [i_0] [i_1] = (i_0 % 2 == 0) ? -7384448758111903357LL : 772319804532470950LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_88 [i_0] = (i_0 % 2 == 0) ? 5723870799146956909ULL : 18399906496451747757ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_91 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned char)255 : (unsigned char)114;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_92 [i_0] = (i_0 % 2 == 0) ? (short)-29837 : (short)2146;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 10; ++i_5) 
                            arr_101 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_2 % 2 == 0) ? (short)-30788 : (short)5480;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_104 [i_0] = (i_0 % 2 == 0) ? 3453718646U : 679256426U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_117 [i_0] = -1695054011;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_129 [i_0] [i_1] [i_2] [i_3] = (unsigned char)230;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_130 [i_0] [i_1] [i_2] = (unsigned char)63;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_136 [i_0] [i_1] [i_2] [i_3] = 6668460102673995639ULL;
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
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    hash(&seed, arr_14 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    hash(&seed, arr_24 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_25 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_28 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_31 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_32 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_33 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_41 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_42 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        hash(&seed, arr_52 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_58 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        hash(&seed, arr_59 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            hash(&seed, arr_60 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_61 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                hash(&seed, arr_68 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_69 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_70 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_74 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_75 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_88 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_91 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_92 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 10; ++i_5) 
                            hash(&seed, arr_101 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_104 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_117 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    hash(&seed, arr_129 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                hash(&seed, arr_130 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    hash(&seed, arr_136 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
