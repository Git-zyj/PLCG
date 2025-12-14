#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)20562;
_Bool var_1 = (_Bool)0;
_Bool var_2 = (_Bool)1;
unsigned short var_3 = (unsigned short)57842;
signed char var_4 = (signed char)-107;
_Bool var_5 = (_Bool)0;
_Bool var_6 = (_Bool)1;
unsigned long long int var_7 = 18024370161222395090ULL;
signed char var_8 = (signed char)-59;
unsigned short var_9 = (unsigned short)8224;
int zero = 0;
unsigned int var_10 = 33518987U;
_Bool var_11 = (_Bool)1;
signed char var_12 = (signed char)-91;
unsigned char var_13 = (unsigned char)198;
signed char var_14 = (signed char)13;
_Bool var_15 = (_Bool)1;
unsigned short var_16 = (unsigned short)9783;
signed char var_17 = (signed char)-80;
signed char var_18 = (signed char)-34;
unsigned int var_19 = 3938137947U;
unsigned int var_20 = 3045501440U;
unsigned long long int var_21 = 17673970173672951050ULL;
int var_22 = 482679672;
unsigned int var_23 = 1794763696U;
unsigned int var_24 = 2004709915U;
unsigned char var_25 = (unsigned char)246;
int var_26 = -1821978869;
unsigned int var_27 = 257127138U;
signed char var_28 = (signed char)-71;
signed char var_29 = (signed char)86;
signed char var_30 = (signed char)-10;
signed char var_31 = (signed char)-59;
unsigned int var_32 = 574609500U;
_Bool var_33 = (_Bool)0;
signed char var_34 = (signed char)-47;
signed char var_35 = (signed char)13;
signed char var_36 = (signed char)-115;
unsigned int var_37 = 1138031613U;
long long int var_38 = -8620960609139438425LL;
signed char var_39 = (signed char)-90;
unsigned short var_40 = (unsigned short)10802;
unsigned short var_41 = (unsigned short)49882;
signed char var_42 = (signed char)71;
unsigned long long int var_43 = 4415572905921236565ULL;
unsigned int var_44 = 28141926U;
_Bool var_45 = (_Bool)1;
unsigned int var_46 = 1277525579U;
short var_47 = (short)-28333;
_Bool var_48 = (_Bool)1;
unsigned int var_49 = 355292762U;
_Bool arr_2 [18] ;
signed char arr_3 [18] ;
unsigned char arr_8 [10] [10] [10] ;
_Bool arr_9 [10] ;
unsigned long long int arr_25 [10] [10] [10] ;
_Bool arr_26 [10] [10] [10] [10] ;
unsigned char arr_32 [10] [10] [10] ;
long long int arr_33 [10] [10] [10] ;
_Bool arr_37 [10] [10] ;
unsigned int arr_45 [10] [10] [10] ;
unsigned int arr_50 [10] [10] [10] [10] [10] [10] ;
signed char arr_55 [10] [10] [10] [10] [10] [10] ;
_Bool arr_56 [10] [10] [10] [10] [10] [10] ;
signed char arr_60 [10] [10] [10] [10] [10] ;
_Bool arr_64 [10] [10] [10] ;
_Bool arr_65 [10] [10] [10] [10] [10] [10] ;
unsigned int arr_66 [10] [10] [10] [10] [10] ;
unsigned short arr_67 [10] [10] ;
int arr_70 [10] ;
unsigned char arr_75 [10] [10] ;
_Bool arr_79 [10] [10] [10] ;
signed char arr_80 [10] [10] [10] ;
unsigned int arr_83 [10] ;
_Bool arr_84 [10] ;
signed char arr_85 [10] [10] ;
unsigned int arr_93 [10] [10] [10] [10] ;
signed char arr_94 [10] [10] [10] [10] ;
unsigned char arr_101 [13] [13] [13] ;
unsigned int arr_102 [13] ;
unsigned long long int arr_106 [13] ;
signed char arr_107 [13] ;
_Bool arr_120 [13] [13] [13] [13] [13] ;
signed char arr_121 [13] [13] [13] [13] [13] [13] ;
signed char arr_122 [13] [13] ;
unsigned char arr_123 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (signed char)-127;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (unsigned char)34;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_9 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_25 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 2027561142341713726ULL : 11870417569846471544ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_26 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_32 [i_0] [i_1] [i_2] = (unsigned char)96;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_33 [i_0] [i_1] [i_2] = 2946312194463812204LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_37 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_45 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 3536727705U : 2933785322U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 10; ++i_5) 
                            arr_50 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_0 % 2 == 0) ? 464701753U : 2419921111U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 10; ++i_5) 
                            arr_55 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_3 % 2 == 0) ? (signed char)-90 : (signed char)6;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 10; ++i_5) 
                            arr_56 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        arr_60 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? (signed char)49 : (signed char)126;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_64 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 10; ++i_5) 
                            arr_65 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_1 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        arr_66 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? 3379666170U : 3762063028U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_67 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)38651 : (unsigned short)59130;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_70 [i_0] = (i_0 % 2 == 0) ? -1055486432 : -1172351962;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_75 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)47 : (unsigned char)198;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_79 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_80 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (signed char)-59 : (signed char)-81;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_83 [i_0] = (i_0 % 2 == 0) ? 2018159904U : 4016429389U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_84 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_85 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)84 : (signed char)-46;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_93 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 197579859U : 3143723196U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_94 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (signed char)-61 : (signed char)-29;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_101 [i_0] [i_1] [i_2] = (unsigned char)194;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_102 [i_0] = 3218598284U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_106 [i_0] = 10318156311231390947ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_107 [i_0] = (signed char)118;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        arr_120 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            arr_121 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_5 % 2 == 0) ? (signed char)118 : (signed char)-103;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_122 [i_0] [i_1] = (signed char)-42;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_123 [i_0] = (unsigned char)247;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_8 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_25 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    hash(&seed, arr_26 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_32 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_33 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_37 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_45 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 10; ++i_5) 
                            hash(&seed, arr_50 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 10; ++i_5) 
                            hash(&seed, arr_55 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 10; ++i_5) 
                            hash(&seed, arr_56 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        hash(&seed, arr_60 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_64 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 10; ++i_5) 
                            hash(&seed, arr_65 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        hash(&seed, arr_66 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_67 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_70 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_75 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_79 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_80 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_83 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_84 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_85 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    hash(&seed, arr_93 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    hash(&seed, arr_94 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                hash(&seed, arr_101 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_102 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_106 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_107 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        hash(&seed, arr_120 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            hash(&seed, arr_121 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_122 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_123 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
