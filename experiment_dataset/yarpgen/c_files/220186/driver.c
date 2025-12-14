#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 211846926U;
unsigned long long int var_1 = 2229818866493728625ULL;
unsigned int var_2 = 3434274053U;
unsigned short var_3 = (unsigned short)59888;
unsigned short var_4 = (unsigned short)52422;
short var_5 = (short)-17367;
int var_6 = 777052536;
short var_7 = (short)-24197;
_Bool var_8 = (_Bool)0;
unsigned int var_9 = 1061707938U;
unsigned long long int var_10 = 10920528012688571531ULL;
_Bool var_11 = (_Bool)0;
_Bool var_12 = (_Bool)0;
int zero = 0;
long long int var_13 = 453213592767092452LL;
unsigned short var_14 = (unsigned short)15557;
_Bool var_15 = (_Bool)0;
unsigned long long int var_16 = 8590491479607965874ULL;
unsigned int var_17 = 257678296U;
unsigned short var_18 = (unsigned short)28229;
unsigned long long int var_19 = 967275786727053847ULL;
_Bool var_20 = (_Bool)0;
signed char var_21 = (signed char)5;
unsigned short var_22 = (unsigned short)53619;
unsigned int var_23 = 860338188U;
unsigned long long int var_24 = 16825074395113941945ULL;
unsigned short var_25 = (unsigned short)23275;
unsigned short var_26 = (unsigned short)19070;
short var_27 = (short)-12149;
unsigned int var_28 = 1752997562U;
short var_29 = (short)-15372;
short var_30 = (short)-13545;
unsigned long long int var_31 = 12543473413344613954ULL;
signed char var_32 = (signed char)78;
unsigned long long int var_33 = 2500173293139649395ULL;
unsigned short var_34 = (unsigned short)62173;
unsigned long long int var_35 = 15594150908249473615ULL;
short var_36 = (short)-31329;
unsigned int var_37 = 4059008257U;
unsigned long long int var_38 = 9413827344001297402ULL;
unsigned long long int var_39 = 1700977200725180001ULL;
unsigned short var_40 = (unsigned short)52629;
int var_41 = 531498763;
unsigned short var_42 = (unsigned short)13512;
unsigned long long int var_43 = 12398675157729280116ULL;
short var_44 = (short)17108;
unsigned short var_45 = (unsigned short)51415;
_Bool var_46 = (_Bool)1;
short var_47 = (short)-31727;
short var_48 = (short)330;
_Bool var_49 = (_Bool)1;
unsigned short var_50 = (unsigned short)11645;
unsigned short var_51 = (unsigned short)59301;
_Bool arr_0 [12] [12] ;
unsigned long long int arr_1 [12] [12] ;
unsigned short arr_4 [12] [12] ;
_Bool arr_5 [12] [12] [12] ;
_Bool arr_6 [12] [12] [12] [12] ;
unsigned int arr_7 [12] [12] [12] [12] ;
unsigned int arr_11 [14] ;
unsigned int arr_18 [14] [14] [14] ;
unsigned short arr_21 [11] [11] ;
long long int arr_27 [10] [10] [10] ;
int arr_46 [15] ;
unsigned short arr_47 [15] ;
short arr_49 [15] [15] ;
unsigned short arr_51 [15] [15] ;
unsigned short arr_52 [15] [15] [15] [15] ;
int arr_59 [15] [15] [15] [15] ;
unsigned int arr_60 [15] [15] ;
unsigned short arr_63 [15] [15] ;
long long int arr_64 [15] ;
_Bool arr_65 [15] ;
unsigned short arr_67 [15] [15] [15] ;
signed char arr_68 [15] [15] ;
unsigned long long int arr_74 [15] [15] [15] [15] ;
unsigned int arr_75 [15] [15] [15] [15] [15] ;
short arr_77 [15] [15] [15] [15] [15] [15] ;
unsigned short arr_82 [15] [15] ;
unsigned int arr_2 [12] ;
short arr_8 [12] [12] [12] [12] ;
short arr_9 [12] [12] ;
_Bool arr_19 [14] [14] ;
unsigned short arr_28 [10] ;
unsigned short arr_31 [10] [10] ;
unsigned short arr_45 [10] ;
int arr_48 [15] [15] ;
unsigned int arr_53 [15] [15] [15] [15] ;
unsigned long long int arr_58 [15] [15] [15] [15] ;
unsigned int arr_71 [15] [15] [15] [15] ;
long long int arr_78 [15] [15] [15] [15] [15] ;
unsigned short arr_79 [15] [15] [15] [15] [15] [15] ;
unsigned int arr_80 [15] ;
unsigned int arr_81 [15] ;
unsigned short arr_84 [15] ;
_Bool arr_87 [15] [15] ;
unsigned int arr_88 [15] [15] ;
unsigned long long int arr_89 [15] [15] ;
unsigned short arr_90 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_1 [i_0] [i_1] = 9447101568879077928ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)36484;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = 3884577617U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_11 [i_0] = 1212680144U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = 2538293206U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_21 [i_0] [i_1] = (unsigned short)3083;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_27 [i_0] [i_1] [i_2] = 7396921190414770592LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_46 [i_0] = -487876778;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_47 [i_0] = (unsigned short)59327;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_49 [i_0] [i_1] = (short)-7403;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_51 [i_0] [i_1] = (unsigned short)58695;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_52 [i_0] [i_1] [i_2] [i_3] = (unsigned short)54574;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_59 [i_0] [i_1] [i_2] [i_3] = -1109345735;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_60 [i_0] [i_1] = 3762430284U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_63 [i_0] [i_1] = (unsigned short)44926;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_64 [i_0] = -8362342142191837318LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_65 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_67 [i_0] [i_1] [i_2] = (unsigned short)58234;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_68 [i_0] [i_1] = (signed char)-50;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_74 [i_0] [i_1] [i_2] [i_3] = 7492274066745849298ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        arr_75 [i_0] [i_1] [i_2] [i_3] [i_4] = 3121229840U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            arr_77 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (short)19454;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_82 [i_0] [i_1] = (unsigned short)11229;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = 254040040U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (short)1633;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_9 [i_0] [i_1] = (short)2118;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_19 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_28 [i_0] = (unsigned short)28797;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_31 [i_0] [i_1] = (unsigned short)57228;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_45 [i_0] = (i_0 % 2 == 0) ? (unsigned short)51698 : (unsigned short)3099;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_48 [i_0] [i_1] = 1784996838;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_53 [i_0] [i_1] [i_2] [i_3] = 2610860304U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_58 [i_0] [i_1] [i_2] [i_3] = 18324665414655085511ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_71 [i_0] [i_1] [i_2] [i_3] = 3703949515U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        arr_78 [i_0] [i_1] [i_2] [i_3] [i_4] = -1894342039495329040LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            arr_79 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned short)16803;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_80 [i_0] = 326200287U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_81 [i_0] = 674818988U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_84 [i_0] = (unsigned short)57534;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_87 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_88 [i_0] [i_1] = 3934315819U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_89 [i_0] [i_1] = 2672010488488588711ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_90 [i_0] = (unsigned short)40471;
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
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    hash(&seed, arr_8 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_19 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_28 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_31 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_45 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_48 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    hash(&seed, arr_53 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    hash(&seed, arr_58 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    hash(&seed, arr_71 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        hash(&seed, arr_78 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            hash(&seed, arr_79 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_80 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_81 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_84 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_87 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_88 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_89 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_90 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
