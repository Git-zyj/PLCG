#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3958371859U;
int var_2 = -1321354194;
signed char var_4 = (signed char)-100;
short var_5 = (short)-7332;
long long int var_8 = -8072460580600511456LL;
_Bool var_9 = (_Bool)1;
int zero = 0;
int var_10 = 1580074147;
long long int var_11 = -8711539803610172933LL;
short var_12 = (short)31124;
long long int var_13 = -6030113179594820617LL;
unsigned int var_14 = 224632998U;
int var_15 = 497928087;
int var_16 = -1270145857;
short var_17 = (short)-28496;
unsigned int var_18 = 599979817U;
int var_19 = 1016863031;
signed char var_20 = (signed char)66;
long long int var_21 = -6382546297601204524LL;
unsigned int var_22 = 3665704467U;
int var_23 = 804730443;
long long int var_24 = 4296260008464344085LL;
long long int var_25 = 8273784925264615977LL;
long long int var_26 = 6821229414003126991LL;
long long int var_27 = -3314743008122553535LL;
signed char var_28 = (signed char)120;
long long int var_29 = -4473455338623122991LL;
short var_30 = (short)-22188;
unsigned int var_31 = 2319713391U;
int var_32 = -246426965;
unsigned int var_33 = 2028916163U;
long long int var_34 = -5123391344112894760LL;
signed char var_35 = (signed char)22;
int var_36 = 778802446;
long long int var_37 = 5725379360453123117LL;
_Bool var_38 = (_Bool)1;
unsigned int var_39 = 1665661878U;
long long int var_40 = 8823154280043128058LL;
long long int var_41 = 1348443576929639960LL;
int var_42 = 92325310;
long long int var_43 = -1189622714956360709LL;
_Bool var_44 = (_Bool)0;
_Bool var_45 = (_Bool)0;
long long int var_46 = 7173293959725523123LL;
unsigned int var_47 = 258754352U;
long long int var_48 = -5876194123039215311LL;
int var_49 = -1957616124;
signed char var_50 = (signed char)-22;
long long int var_51 = -3265317410006389273LL;
signed char var_52 = (signed char)-18;
long long int var_53 = 8760275311125949075LL;
int var_54 = 374643533;
long long int var_55 = -3134753802608907580LL;
unsigned int var_56 = 318959745U;
int var_57 = -1103440167;
long long int arr_0 [14] [14] ;
unsigned int arr_1 [14] ;
unsigned int arr_3 [23] ;
long long int arr_4 [23] [23] ;
signed char arr_5 [17] [17] ;
short arr_6 [17] [17] ;
long long int arr_7 [17] [17] ;
long long int arr_8 [17] [17] [17] ;
unsigned int arr_9 [17] ;
long long int arr_10 [17] [17] ;
long long int arr_14 [17] [17] [17] [17] ;
signed char arr_16 [17] [17] [17] [17] [17] [17] ;
long long int arr_19 [17] [17] [17] [17] [17] [17] [17] ;
unsigned int arr_21 [17] [17] ;
long long int arr_23 [17] [17] [17] [17] [17] ;
signed char arr_24 [17] [17] [17] [17] ;
long long int arr_30 [17] [17] ;
long long int arr_35 [24] [24] ;
long long int arr_36 [24] [24] ;
long long int arr_37 [24] ;
unsigned int arr_46 [25] [25] ;
unsigned int arr_50 [25] ;
int arr_2 [14] ;
signed char arr_18 [17] [17] ;
long long int arr_29 [17] [17] [17] [17] [17] [17] ;
signed char arr_41 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_0 [i_0] [i_1] = -2090175774759943499LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = 2830366926U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = 1236703377U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? -5703855193870232005LL : -4394087303563570439LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)1 : (signed char)-55;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_6 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)1785 : (short)8249;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_7 [i_0] [i_1] = 5992254904492834473LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = -6018387821003488266LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_9 [i_0] = 1574248669U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_10 [i_0] [i_1] = -5765873922208299757LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_14 [i_0] [i_1] [i_2] [i_3] = 6628936886265511794LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 17; ++i_5) 
                            arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (signed char)-81;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 17; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 17; ++i_6) 
                                arr_19 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_2 % 2 == 0) ? -2746619012396299629LL : -6831256999175007718LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_21 [i_0] [i_1] = 3464279788U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        arr_23 [i_0] [i_1] [i_2] [i_3] [i_4] = -2979641052680770042LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_24 [i_0] [i_1] [i_2] [i_3] = (signed char)121;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_30 [i_0] [i_1] = -2580088869167889017LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_35 [i_0] [i_1] = -1666492948931833599LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_36 [i_0] [i_1] = -4619222908340117375LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_37 [i_0] = -6667413578599851370LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_46 [i_0] [i_1] = (i_0 % 2 == 0) ? 2934588903U : 3809639316U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_50 [i_0] = 1963314755U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = 1588120271;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_18 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)-65 : (signed char)-66;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 17; ++i_5) 
                            arr_29 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_2 % 2 == 0) ? 6070052271474946674LL : 9027308339389821651LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_41 [i_0] = (signed char)99;
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
    hash(&seed, var_50);
    hash(&seed, var_51);
    hash(&seed, var_52);
    hash(&seed, var_53);
    hash(&seed, var_54);
    hash(&seed, var_55);
    hash(&seed, var_56);
    hash(&seed, var_57);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_18 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 17; ++i_5) 
                            hash(&seed, arr_29 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_41 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
