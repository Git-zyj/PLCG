#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-48;
signed char var_1 = (signed char)(-127 - 1);
signed char var_2 = (signed char)-83;
signed char var_3 = (signed char)-105;
unsigned char var_4 = (unsigned char)2;
unsigned int var_5 = 1275532119U;
signed char var_6 = (signed char)6;
_Bool var_7 = (_Bool)0;
unsigned short var_8 = (unsigned short)7711;
unsigned int var_9 = 1155259635U;
signed char var_10 = (signed char)105;
signed char var_11 = (signed char)53;
unsigned int var_12 = 696309289U;
short var_13 = (short)7462;
unsigned char var_14 = (unsigned char)41;
signed char var_15 = (signed char)-60;
unsigned int var_16 = 3981322114U;
int zero = 0;
unsigned int var_17 = 3341465414U;
_Bool var_18 = (_Bool)1;
int var_19 = -354979137;
long long int var_20 = 6422054141962762630LL;
_Bool var_21 = (_Bool)0;
signed char var_22 = (signed char)19;
long long int var_23 = 3313005435456932082LL;
int var_24 = -81542959;
int var_25 = 1593225837;
_Bool var_26 = (_Bool)0;
_Bool var_27 = (_Bool)0;
signed char var_28 = (signed char)-72;
signed char var_29 = (signed char)-104;
unsigned char var_30 = (unsigned char)12;
int var_31 = -1067103733;
signed char var_32 = (signed char)126;
unsigned int var_33 = 4018880238U;
signed char var_34 = (signed char)94;
unsigned int var_35 = 3077597356U;
_Bool var_36 = (_Bool)1;
long long int var_37 = 78472564121969536LL;
long long int var_38 = 5680818167686643281LL;
_Bool var_39 = (_Bool)1;
unsigned int var_40 = 774071271U;
short var_41 = (short)8076;
unsigned short var_42 = (unsigned short)24889;
unsigned int var_43 = 4051802011U;
_Bool var_44 = (_Bool)0;
signed char var_45 = (signed char)20;
unsigned int var_46 = 1712538633U;
int var_47 = 2009213868;
long long int var_48 = -3987581359017039567LL;
unsigned char var_49 = (unsigned char)43;
unsigned short var_50 = (unsigned short)5348;
long long int var_51 = -4883438691545140621LL;
_Bool var_52 = (_Bool)0;
_Bool var_53 = (_Bool)0;
int var_54 = -37290851;
int var_55 = -488912119;
unsigned short var_56 = (unsigned short)37970;
unsigned int var_57 = 1731601323U;
unsigned int var_58 = 3106522236U;
unsigned int var_59 = 3825657656U;
int var_60 = -1967996033;
unsigned char var_61 = (unsigned char)40;
signed char var_62 = (signed char)107;
_Bool var_63 = (_Bool)1;
signed char var_64 = (signed char)-43;
long long int var_65 = -6107786656136030962LL;
unsigned long long int var_66 = 14973797117196321397ULL;
unsigned long long int var_67 = 11482440439807367615ULL;
int var_68 = -776523121;
short var_69 = (short)-32356;
int var_70 = -815423093;
int var_71 = 968346956;
int var_72 = -725252013;
_Bool arr_0 [10] ;
unsigned char arr_2 [10] [10] ;
unsigned int arr_3 [10] [10] ;
signed char arr_5 [10] [10] [10] ;
_Bool arr_6 [10] ;
unsigned int arr_7 [10] ;
unsigned char arr_8 [10] [10] [10] ;
unsigned int arr_9 [10] [10] [10] ;
unsigned int arr_10 [10] [10] [10] ;
signed char arr_14 [10] [10] [10] [10] [10] [10] ;
int arr_16 [10] [10] [10] ;
unsigned char arr_17 [10] [10] [10] ;
int arr_18 [10] [10] ;
unsigned char arr_19 [10] ;
int arr_20 [10] [10] [10] ;
_Bool arr_25 [10] [10] [10] ;
signed char arr_26 [10] [10] [10] ;
int arr_27 [10] ;
long long int arr_35 [10] ;
long long int arr_43 [10] ;
short arr_44 [10] [10] [10] [10] ;
unsigned int arr_49 [10] [10] [10] [10] ;
signed char arr_55 [10] [10] [10] [10] [10] ;
unsigned char arr_57 [10] [10] [10] [10] [10] ;
signed char arr_66 [10] [10] [10] ;
signed char arr_75 [10] [10] [10] [10] [10] [10] [10] ;
int arr_84 [10] [10] [10] [10] ;
unsigned int arr_85 [10] [10] [10] [10] [10] [10] ;
long long int arr_4 [10] [10] ;
_Bool arr_11 [10] [10] ;
unsigned int arr_12 [10] [10] [10] ;
long long int arr_15 [10] [10] [10] [10] [10] ;
unsigned int arr_33 [10] [10] [10] ;
signed char arr_45 [10] ;
unsigned int arr_53 [10] [10] ;
unsigned int arr_58 [10] [10] [10] [10] ;
long long int arr_61 [10] [10] ;
signed char arr_62 [10] [10] ;
unsigned int arr_68 [10] ;
long long int arr_81 [10] [10] [10] ;
unsigned int arr_82 [10] [10] ;
int arr_86 [10] [10] [10] [10] [10] ;
unsigned short arr_87 [10] [10] [10] [10] ;
unsigned long long int arr_90 [10] ;
signed char arr_93 [10] [10] [10] ;
_Bool arr_97 [10] [10] [10] ;
int arr_98 [10] [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)213;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_3 [i_0] [i_1] = 3895254512U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (signed char)69;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_6 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_7 [i_0] = 1940828768U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (unsigned char)175;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = 885766627U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = 1908957388U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 10; ++i_5) 
                            arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (signed char)26;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 1504034331 : 1872745554;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned char)171 : (unsigned char)92;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_18 [i_0] [i_1] = 1807217431;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_19 [i_0] = (unsigned char)249;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_20 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 1951845268 : -431056595;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_25 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_26 [i_0] [i_1] [i_2] = (signed char)45;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_27 [i_0] = -1428072576;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_35 [i_0] = 209162325009139975LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_43 [i_0] = -3226521200703466702LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_44 [i_0] [i_1] [i_2] [i_3] = (short)8966;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_49 [i_0] [i_1] [i_2] [i_3] = 4216536257U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        arr_55 [i_0] [i_1] [i_2] [i_3] [i_4] = (signed char)-51;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        arr_57 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned char)126;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_66 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (signed char)94 : (signed char)90;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 10; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 10; ++i_6) 
                                arr_75 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_0 % 2 == 0) ? (signed char)41 : (signed char)-93;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_84 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? -1949560802 : -1216446023;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 10; ++i_5) 
                            arr_85 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_1 % 2 == 0) ? 1524932711U : 3284367378U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_4 [i_0] [i_1] = -1772600395788026747LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_11 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = 3217615760U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] = -4701468734341113673LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_33 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 3367401796U : 3888039809U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_45 [i_0] = (signed char)7;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_53 [i_0] [i_1] = 1325238599U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_58 [i_0] [i_1] [i_2] [i_3] = 3151515968U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_61 [i_0] [i_1] = 7071539258823554463LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_62 [i_0] [i_1] = (signed char)-57;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_68 [i_0] = (i_0 % 2 == 0) ? 214393467U : 774889989U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_81 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? -6250520963306230179LL : -6579797239080925230LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_82 [i_0] [i_1] = (i_1 % 2 == 0) ? 23382299U : 2941960143U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        arr_86 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_0 % 2 == 0) ? 401133068 : 1340386795;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_87 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (unsigned short)57574 : (unsigned short)63699;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_90 [i_0] = (i_0 % 2 == 0) ? 10741544540917060262ULL : 17583456554617275597ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_93 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (signed char)62 : (signed char)51;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_97 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_98 [i_0] [i_1] [i_2] = 1929734702;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_12 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        hash(&seed, arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_33 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_45 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_53 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    hash(&seed, arr_58 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_61 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_62 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_68 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_81 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_82 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        hash(&seed, arr_86 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    hash(&seed, arr_87 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_90 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_93 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_97 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_98 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
