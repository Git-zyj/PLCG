#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)20503;
signed char var_1 = (signed char)60;
int var_2 = 748308842;
long long int var_3 = -8123512601975147987LL;
unsigned long long int var_4 = 16464128830513024610ULL;
signed char var_5 = (signed char)-72;
unsigned int var_6 = 2206141395U;
_Bool var_7 = (_Bool)1;
short var_8 = (short)-4416;
unsigned int var_9 = 1501164605U;
unsigned int var_10 = 4247536989U;
unsigned int var_11 = 1760478793U;
unsigned long long int var_12 = 133834550857076326ULL;
unsigned short var_13 = (unsigned short)31513;
unsigned long long int var_14 = 15446968781307435408ULL;
unsigned char var_15 = (unsigned char)205;
long long int var_16 = -739564274467274168LL;
int var_17 = -861855200;
unsigned long long int var_18 = 1902191777946225199ULL;
int zero = 0;
signed char var_19 = (signed char)85;
_Bool var_20 = (_Bool)1;
unsigned char var_21 = (unsigned char)142;
unsigned long long int var_22 = 11745778052161872434ULL;
signed char var_23 = (signed char)-127;
unsigned short var_24 = (unsigned short)13814;
unsigned long long int var_25 = 8970748666842779541ULL;
long long int var_26 = 6735167063212034263LL;
short var_27 = (short)-14817;
_Bool var_28 = (_Bool)0;
signed char var_29 = (signed char)-103;
unsigned int var_30 = 4069240261U;
unsigned char var_31 = (unsigned char)64;
unsigned short var_32 = (unsigned short)27415;
signed char var_33 = (signed char)-98;
unsigned int var_34 = 695272868U;
long long int var_35 = -1106209652205066701LL;
unsigned char var_36 = (unsigned char)209;
long long int var_37 = 5954990921637321515LL;
int var_38 = 1128035083;
long long int var_39 = -1842282593336233449LL;
_Bool var_40 = (_Bool)0;
unsigned char var_41 = (unsigned char)7;
short var_42 = (short)7067;
short var_43 = (short)4680;
unsigned short var_44 = (unsigned short)51348;
signed char var_45 = (signed char)102;
_Bool var_46 = (_Bool)1;
signed char var_47 = (signed char)-67;
unsigned char var_48 = (unsigned char)248;
short var_49 = (short)31447;
unsigned int var_50 = 2764286854U;
unsigned int var_51 = 447041529U;
unsigned char arr_0 [13] ;
signed char arr_1 [13] ;
int arr_2 [13] [13] [13] ;
signed char arr_3 [13] ;
unsigned char arr_4 [13] [13] [13] ;
short arr_5 [13] [13] [13] ;
signed char arr_6 [13] [13] [13] [13] ;
unsigned char arr_7 [13] [13] [13] [13] ;
signed char arr_8 [13] [13] [13] [13] ;
signed char arr_9 [13] [13] [13] [13] ;
short arr_10 [13] [13] [13] ;
short arr_12 [13] [13] [13] ;
long long int arr_13 [13] [13] [13] [13] [13] [13] ;
unsigned int arr_14 [13] ;
long long int arr_16 [13] [13] [13] [13] [13] [13] ;
long long int arr_17 [13] [13] [13] [13] [13] [13] ;
signed char arr_19 [13] [13] [13] [13] [13] ;
_Bool arr_20 [13] [13] [13] [13] [13] ;
signed char arr_25 [13] [13] [13] [13] ;
_Bool arr_28 [25] ;
unsigned char arr_29 [25] ;
long long int arr_30 [25] [25] ;
_Bool arr_31 [25] ;
unsigned long long int arr_32 [25] ;
long long int arr_33 [25] [25] [25] ;
unsigned int arr_34 [25] ;
unsigned short arr_35 [25] [25] [25] [25] ;
unsigned char arr_36 [25] [25] [25] ;
unsigned long long int arr_37 [25] [25] [25] [25] ;
int arr_38 [25] [25] ;
long long int arr_40 [25] [25] [25] [25] [25] [25] ;
long long int arr_41 [25] ;
unsigned short arr_42 [25] [25] [25] [25] ;
short arr_44 [25] [25] [25] [25] [25] [25] ;
signed char arr_45 [25] [25] [25] [25] [25] [25] ;
unsigned char arr_47 [25] [25] [25] [25] [25] [25] ;
unsigned long long int arr_48 [16] ;
signed char arr_49 [16] ;
long long int arr_50 [16] ;
long long int arr_51 [16] [16] ;
unsigned long long int arr_52 [16] [16] ;
unsigned long long int arr_54 [16] ;
unsigned char arr_55 [16] [16] ;
unsigned char arr_56 [16] [16] ;
int arr_59 [16] [16] ;
unsigned long long int arr_60 [16] [16] ;
unsigned int arr_61 [16] [16] [16] [16] [16] [16] ;
unsigned int arr_65 [16] [16] [16] ;
unsigned short arr_68 [16] [16] [16] ;
signed char arr_15 [13] [13] [13] [13] [13] ;
signed char arr_18 [13] [13] ;
unsigned long long int arr_21 [13] ;
int arr_22 [13] ;
long long int arr_39 [25] [25] [25] ;
long long int arr_63 [16] [16] [16] [16] [16] ;
long long int arr_64 [16] [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (unsigned char)178 : (unsigned char)130;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (signed char)23 : (signed char)125;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 1779741507 : -2134703933;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (signed char)29;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned char)147 : (unsigned char)68;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (short)-5043 : (short)-9804;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (signed char)94;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (unsigned char)198;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (signed char)72;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (signed char)-81 : (signed char)125;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (short)-6364;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (short)-11481 : (short)-28205;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_5 % 2 == 0) ? -8267665395714026297LL : 4167703568695479905LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_14 [i_0] = 285098859U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_5 % 2 == 0) ? 8142837337877444349LL : -8594258398493671525LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 4087428934413361639LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        arr_19 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? (signed char)75 : (signed char)-17;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        arr_20 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_25 [i_0] [i_1] [i_2] [i_3] = (signed char)99;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_28 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_29 [i_0] = (unsigned char)46;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_30 [i_0] [i_1] = (i_1 % 2 == 0) ? 6521943292704167387LL : -7100489904690266006LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_31 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_32 [i_0] = (i_0 % 2 == 0) ? 7770690341499109562ULL : 1919302856501651079ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_33 [i_0] [i_1] [i_2] = -7056540049281290781LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_34 [i_0] = 846491059U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_35 [i_0] [i_1] [i_2] [i_3] = (unsigned short)18646;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_36 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned char)251 : (unsigned char)132;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_37 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 8380380702858486954ULL : 11151061013574390345ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_38 [i_0] [i_1] = 1220379761;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 25; ++i_5) 
                            arr_40 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 3365295487328279188LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_41 [i_0] = -4289110416556311767LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_42 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (unsigned short)36296 : (unsigned short)13796;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 25; ++i_5) 
                            arr_44 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (short)11298;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 25; ++i_5) 
                            arr_45 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_0 % 2 == 0) ? (signed char)-72 : (signed char)-77;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 25; ++i_5) 
                            arr_47 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned char)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_48 [i_0] = (i_0 % 2 == 0) ? 7065599587489539967ULL : 6024879716453851681ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_49 [i_0] = (i_0 % 2 == 0) ? (signed char)-55 : (signed char)8;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_50 [i_0] = 325832831312318419LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_51 [i_0] [i_1] = 3014318713257233826LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_52 [i_0] [i_1] = (i_1 % 2 == 0) ? 5808455474218919100ULL : 48081957803856945ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_54 [i_0] = 16226904065612622217ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_55 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)126 : (unsigned char)237;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_56 [i_0] [i_1] = (unsigned char)117;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_59 [i_0] [i_1] = -1990496409;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_60 [i_0] [i_1] = (i_0 % 2 == 0) ? 9566240124008643598ULL : 9331247430715628543ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 16; ++i_5) 
                            arr_61 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_4 % 2 == 0) ? 1906038029U : 1531264491U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_65 [i_0] [i_1] [i_2] = 3564314956U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_68 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned short)40650 : (unsigned short)23902;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_1 % 2 == 0) ? (signed char)58 : (signed char)83;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_18 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)61 : (signed char)-40;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_21 [i_0] = (i_0 % 2 == 0) ? 14582325525772469260ULL : 13403307232275889776ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_22 [i_0] = (i_0 % 2 == 0) ? -1318810078 : 1075637477;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_39 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 4893228315315320707LL : -7284204019916515834LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        arr_63 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_4 % 2 == 0) ? 4158029272654742195LL : -612045329297643795LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_64 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 3073259258096457593LL : -5931483265344582428LL;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        hash(&seed, arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_18 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_21 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_22 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                hash(&seed, arr_39 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        hash(&seed, arr_63 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                hash(&seed, arr_64 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
