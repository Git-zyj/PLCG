#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
signed char var_5 = (signed char)-89;
int var_7 = -1375401678;
unsigned long long int var_8 = 10379109924624453838ULL;
int var_10 = 1769453301;
unsigned int var_11 = 3353137381U;
unsigned short var_12 = (unsigned short)6145;
_Bool var_13 = (_Bool)0;
long long int var_15 = 7587021482417882638LL;
int zero = 0;
signed char var_16 = (signed char)-52;
signed char var_17 = (signed char)-97;
unsigned int var_18 = 4242514632U;
long long int var_19 = 1436843052827292322LL;
short var_20 = (short)16814;
_Bool var_21 = (_Bool)0;
long long int var_22 = 6973931322693813867LL;
unsigned short var_23 = (unsigned short)28674;
long long int var_24 = 5581260257200707729LL;
unsigned int var_25 = 2617664355U;
int var_26 = 979564717;
unsigned int var_27 = 1920926174U;
_Bool var_28 = (_Bool)1;
unsigned int var_29 = 3376299173U;
unsigned int var_30 = 497324180U;
unsigned char var_31 = (unsigned char)226;
unsigned short var_32 = (unsigned short)33137;
unsigned short var_33 = (unsigned short)22627;
unsigned short var_34 = (unsigned short)24441;
unsigned long long int var_35 = 340257171927462733ULL;
long long int var_36 = -7052481399028512520LL;
unsigned long long int var_37 = 11477653194147489203ULL;
int var_38 = -1883792915;
int var_39 = -1236465112;
unsigned char var_40 = (unsigned char)106;
int var_41 = -366879797;
signed char var_42 = (signed char)67;
int var_43 = 1833942303;
int var_44 = 1829646671;
unsigned int var_45 = 4268479142U;
unsigned char var_46 = (unsigned char)160;
long long int var_47 = -4240588261018371611LL;
int arr_0 [16] [16] ;
short arr_1 [16] [16] ;
long long int arr_2 [16] ;
signed char arr_3 [16] [16] [16] ;
unsigned int arr_5 [16] ;
unsigned char arr_6 [16] [16] [16] ;
unsigned char arr_8 [16] [16] [16] ;
signed char arr_9 [16] ;
int arr_11 [16] [16] [16] ;
unsigned char arr_12 [16] [16] [16] ;
unsigned long long int arr_13 [16] [16] [16] ;
unsigned long long int arr_14 [16] [16] [16] ;
int arr_15 [16] [16] [16] [16] [16] [16] ;
short arr_16 [16] [16] [16] [16] ;
_Bool arr_17 [16] [16] [16] ;
unsigned long long int arr_23 [16] [16] [16] [16] [16] [16] ;
long long int arr_25 [16] [16] [16] ;
unsigned long long int arr_26 [16] [16] [16] [16] [16] [16] [16] ;
signed char arr_27 [16] [16] [16] [16] [16] [16] ;
_Bool arr_32 [16] [16] [16] [16] [16] ;
short arr_38 [16] [16] [16] [16] ;
unsigned short arr_40 [16] [16] [16] [16] [16] [16] [16] ;
int arr_43 [16] [16] [16] ;
unsigned int arr_44 [16] [16] [16] [16] [16] [16] [16] ;
_Bool arr_46 [16] [16] [16] [16] [16] ;
unsigned int arr_53 [16] [16] [16] [16] ;
int arr_4 [16] ;
short arr_7 [16] [16] [16] [16] ;
signed char arr_10 [16] [16] [16] [16] ;
signed char arr_18 [16] [16] [16] [16] [16] ;
unsigned char arr_21 [16] [16] [16] [16] [16] ;
unsigned short arr_28 [16] [16] [16] [16] [16] ;
_Bool arr_29 [16] [16] [16] [16] [16] ;
long long int arr_34 [16] [16] ;
int arr_41 [16] [16] [16] [16] [16] [16] ;
_Bool arr_42 [16] [16] [16] [16] ;
unsigned char arr_45 [16] [16] [16] ;
short arr_48 [16] [16] [16] [16] [16] [16] ;
long long int arr_51 [16] [16] [16] [16] [16] ;
unsigned char arr_52 [16] [16] [16] [16] ;
short arr_60 [16] ;
_Bool arr_67 [16] [16] [16] [16] [16] [16] ;
_Bool arr_68 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = -1608325582;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_1 [i_0] [i_1] = (short)10210;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = 6656447546873125103LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (signed char)-47;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = 3362242144U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned char)152 : (unsigned char)20;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (unsigned char)79;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_9 [i_0] = (signed char)-7;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? -13019872 : 1091483066;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (unsigned char)208;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = 8444210976814931022ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = 14598266926906045157ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 16; ++i_5) 
                            arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 42317007;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_16 [i_0] [i_1] [i_2] [i_3] = (short)15044;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 16; ++i_5) 
                            arr_23 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 6228227367532694927ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_25 [i_0] [i_1] [i_2] = 843556160540359631LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 16; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 16; ++i_6) 
                                arr_26 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = 200072254881754577ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 16; ++i_5) 
                            arr_27 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (signed char)88;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        arr_32 [i_0] [i_1] [i_2] [i_3] [i_4] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_38 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (short)22097 : (short)31602;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 16; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 16; ++i_6) 
                                arr_40 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (unsigned short)17816;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_43 [i_0] [i_1] [i_2] = 49455966;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 16; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 16; ++i_6) 
                                arr_44 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_1 % 2 == 0) ? 3268749945U : 2875651412U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        arr_46 [i_0] [i_1] [i_2] [i_3] [i_4] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_53 [i_0] [i_1] [i_2] [i_3] = 468263286U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? -877078521 : 1966844044;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (short)-22707 : (short)22241;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (signed char)115 : (signed char)118;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        arr_18 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_4 % 2 == 0) ? (signed char)-39 : (signed char)-12;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        arr_21 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_4 % 2 == 0) ? (unsigned char)174 : (unsigned char)211;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        arr_28 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_3 % 2 == 0) ? (unsigned short)38833 : (unsigned short)42879;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        arr_29 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_34 [i_0] [i_1] = (i_1 % 2 == 0) ? 4346857131259150835LL : -3046888345084429186LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 16; ++i_5) 
                            arr_41 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_0 % 2 == 0) ? 1551483851 : -204116818;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_42 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_45 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned char)161 : (unsigned char)23;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 16; ++i_5) 
                            arr_48 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_1 % 2 == 0) ? (short)-21605 : (short)24253;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        arr_51 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_1 % 2 == 0) ? -5560127440821342730LL : -2549393382972573336LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_52 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (unsigned char)184 : (unsigned char)51;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_60 [i_0] = (i_0 % 2 == 0) ? (short)18024 : (short)27422;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 16; ++i_5) 
                            arr_67 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_1 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_68 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
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
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    hash(&seed, arr_7 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    hash(&seed, arr_10 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        hash(&seed, arr_18 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        hash(&seed, arr_21 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        hash(&seed, arr_28 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        hash(&seed, arr_29 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_34 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 16; ++i_5) 
                            hash(&seed, arr_41 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    hash(&seed, arr_42 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                hash(&seed, arr_45 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 16; ++i_5) 
                            hash(&seed, arr_48 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        hash(&seed, arr_51 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    hash(&seed, arr_52 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_60 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 16; ++i_5) 
                            hash(&seed, arr_67 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_68 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
