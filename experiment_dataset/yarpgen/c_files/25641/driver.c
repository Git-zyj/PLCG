#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 294673974;
unsigned long long int var_1 = 14256081068973121182ULL;
unsigned int var_2 = 2529415524U;
unsigned short var_3 = (unsigned short)54644;
long long int var_5 = 6117402865976814017LL;
long long int var_6 = 4119358769332719653LL;
unsigned char var_7 = (unsigned char)51;
unsigned int var_8 = 1089820862U;
unsigned int var_10 = 2782210261U;
int var_12 = 1148957930;
unsigned int var_13 = 194951557U;
int var_14 = 88868402;
signed char var_16 = (signed char)33;
int zero = 0;
unsigned char var_17 = (unsigned char)240;
signed char var_18 = (signed char)88;
long long int var_19 = 2152316947726380317LL;
long long int var_20 = 2145799411358312563LL;
int var_21 = 286686724;
long long int var_22 = 2638381207077250740LL;
unsigned short var_23 = (unsigned short)64767;
unsigned char var_24 = (unsigned char)132;
unsigned char var_25 = (unsigned char)210;
unsigned long long int var_26 = 9038501987572011571ULL;
unsigned char var_27 = (unsigned char)243;
unsigned short var_28 = (unsigned short)27333;
unsigned short var_29 = (unsigned short)43385;
unsigned short var_30 = (unsigned short)7315;
unsigned short var_31 = (unsigned short)27610;
unsigned short var_32 = (unsigned short)19324;
short var_33 = (short)9108;
long long int var_34 = 3355500962440528277LL;
int var_35 = -318811170;
short var_36 = (short)-7734;
short var_37 = (short)-30628;
long long int var_38 = 5489867858144081877LL;
int var_39 = -1600086836;
int var_40 = -18230730;
int var_41 = -1073314708;
short var_42 = (short)8978;
long long int var_43 = -6500077281789033149LL;
unsigned long long int var_44 = 6463937449981095082ULL;
unsigned long long int var_45 = 10117215059104970144ULL;
unsigned short var_46 = (unsigned short)51451;
unsigned int var_47 = 2312821665U;
unsigned char var_48 = (unsigned char)66;
short var_49 = (short)-3751;
unsigned char var_50 = (unsigned char)18;
short var_51 = (short)-21177;
int var_52 = -1606805611;
unsigned int var_53 = 2409455605U;
unsigned int var_54 = 439553542U;
unsigned short var_55 = (unsigned short)29710;
unsigned char var_56 = (unsigned char)23;
unsigned char var_57 = (unsigned char)51;
unsigned long long int var_58 = 16944643564765607945ULL;
signed char var_59 = (signed char)65;
unsigned char var_60 = (unsigned char)24;
unsigned char var_61 = (unsigned char)254;
int var_62 = 55298123;
unsigned short var_63 = (unsigned short)52757;
_Bool var_64 = (_Bool)1;
unsigned int var_65 = 1935975293U;
unsigned long long int arr_0 [24] ;
long long int arr_1 [24] [24] ;
int arr_2 [24] ;
unsigned int arr_3 [24] ;
int arr_5 [24] ;
int arr_7 [24] [24] ;
signed char arr_8 [24] ;
signed char arr_9 [24] ;
int arr_10 [24] ;
long long int arr_11 [24] [24] [24] ;
unsigned short arr_12 [24] [24] [24] [24] ;
signed char arr_13 [24] [24] [24] [24] [24] ;
short arr_17 [24] ;
_Bool arr_20 [24] [24] [24] ;
unsigned char arr_22 [24] [24] [24] [24] [24] ;
unsigned char arr_23 [24] [24] [24] [24] ;
long long int arr_24 [21] ;
_Bool arr_25 [21] [21] ;
unsigned long long int arr_27 [18] ;
int arr_30 [18] [18] [18] ;
signed char arr_35 [18] [18] ;
int arr_38 [18] [18] [18] ;
int arr_39 [18] [18] [18] [18] ;
short arr_46 [18] [18] [18] [18] [18] ;
int arr_50 [18] [18] ;
unsigned long long int arr_53 [18] [18] ;
short arr_56 [18] [18] ;
unsigned char arr_58 [18] ;
long long int arr_64 [18] [18] [18] [18] ;
short arr_75 [18] [18] ;
int arr_82 [18] [18] [18] [18] [18] ;
short arr_33 [18] [18] [18] [18] ;
unsigned short arr_54 [18] [18] ;
int arr_74 [18] ;
unsigned char arr_94 [18] [18] [18] [18] [18] ;
unsigned char arr_95 [18] [18] [18] [18] ;
signed char arr_98 [23] ;
long long int arr_106 [23] [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = 1897875393826986538ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = 6825643951764951091LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = -1332394980;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = 3666199498U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = 1925202588;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_7 [i_0] [i_1] = 103056786;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_8 [i_0] = (signed char)84;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_9 [i_0] = (signed char)-114;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_10 [i_0] = 779149279;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = 6433708843652583433LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = (unsigned short)28588;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] = (signed char)-35;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_17 [i_0] = (short)-30534;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_20 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        arr_22 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? (unsigned char)21 : (unsigned char)164;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_23 [i_0] [i_1] [i_2] [i_3] = (unsigned char)77;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_24 [i_0] = -5074547789323651979LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_25 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_27 [i_0] = 14437408677564966180ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_30 [i_0] [i_1] [i_2] = -2014966600;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_35 [i_0] [i_1] = (signed char)-115;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_38 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 259204552 : -1187758674;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_39 [i_0] [i_1] [i_2] [i_3] = 1816596570;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        arr_46 [i_0] [i_1] [i_2] [i_3] [i_4] = (short)-32145;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_50 [i_0] [i_1] = 1724101485;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_53 [i_0] [i_1] = 11525858444232800283ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_56 [i_0] [i_1] = (short)-27917;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_58 [i_0] = (unsigned char)141;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_64 [i_0] [i_1] [i_2] [i_3] = 849983573610783946LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_75 [i_0] [i_1] = (short)-28739;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        arr_82 [i_0] [i_1] [i_2] [i_3] [i_4] = -2486351;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_33 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (short)-27309 : (short)3758;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_54 [i_0] [i_1] = (unsigned short)35398;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_74 [i_0] = (i_0 % 2 == 0) ? 1018916359 : -1546021425;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        arr_94 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_3 % 2 == 0) ? (unsigned char)83 : (unsigned char)191;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_95 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (unsigned char)208 : (unsigned char)244;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_98 [i_0] = (i_0 % 2 == 0) ? (signed char)5 : (signed char)13;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_106 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? -2630153182592611669LL : -2208736574784973264LL;
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
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    hash(&seed, arr_33 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_54 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_74 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        hash(&seed, arr_94 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    hash(&seed, arr_95 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_98 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    hash(&seed, arr_106 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
