#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 14043540406332693693ULL;
unsigned long long int var_2 = 4595658611817584486ULL;
unsigned int var_3 = 2766483937U;
long long int var_4 = -6728572940402702331LL;
int var_5 = 40855116;
int var_7 = -127876582;
unsigned char var_8 = (unsigned char)201;
_Bool var_9 = (_Bool)0;
signed char var_10 = (signed char)-125;
int zero = 0;
unsigned int var_11 = 3681940612U;
unsigned char var_12 = (unsigned char)102;
unsigned int var_13 = 2951754923U;
_Bool var_14 = (_Bool)0;
signed char var_15 = (signed char)59;
unsigned long long int var_16 = 5524097801051801329ULL;
unsigned int var_17 = 2202369706U;
unsigned char var_18 = (unsigned char)15;
signed char var_19 = (signed char)31;
unsigned long long int var_20 = 16703964929583848201ULL;
unsigned long long int var_21 = 169836095184839305ULL;
unsigned int var_22 = 2344482968U;
unsigned long long int var_23 = 13372224046415897717ULL;
_Bool var_24 = (_Bool)0;
signed char var_25 = (signed char)-63;
_Bool var_26 = (_Bool)0;
_Bool var_27 = (_Bool)1;
long long int var_28 = 1387158140298226663LL;
short var_29 = (short)29529;
_Bool var_30 = (_Bool)0;
_Bool var_31 = (_Bool)0;
_Bool var_32 = (_Bool)1;
int var_33 = -1963280326;
unsigned int var_34 = 634971003U;
short var_35 = (short)31082;
unsigned short arr_1 [14] ;
int arr_2 [14] [14] ;
signed char arr_4 [14] [14] [14] ;
unsigned int arr_5 [14] [14] [14] ;
_Bool arr_6 [14] ;
unsigned short arr_8 [14] [14] ;
long long int arr_9 [14] [14] [14] [14] ;
unsigned int arr_14 [14] [14] [14] ;
signed char arr_16 [14] [14] ;
unsigned char arr_17 [14] ;
short arr_18 [14] [14] [14] ;
long long int arr_21 [14] [14] [14] ;
short arr_24 [14] [14] [14] ;
unsigned long long int arr_27 [14] [14] [14] [14] [14] [14] ;
short arr_28 [14] ;
signed char arr_30 [14] ;
long long int arr_34 [14] [14] [14] [14] ;
unsigned int arr_39 [14] [14] [14] ;
_Bool arr_40 [14] [14] [14] ;
unsigned long long int arr_44 [14] [14] [14] ;
signed char arr_55 [14] [14] [14] [14] [14] [14] ;
signed char arr_68 [19] ;
short arr_69 [19] ;
short arr_10 [14] [14] [14] [14] [14] ;
_Bool arr_11 [14] [14] [14] [14] ;
_Bool arr_12 [14] ;
unsigned short arr_20 [14] ;
short arr_35 [14] [14] [14] [14] ;
unsigned char arr_36 [14] [14] ;
unsigned long long int arr_37 [14] [14] [14] [14] ;
long long int arr_47 [14] [14] [14] [14] ;
unsigned char arr_50 [14] [14] [14] [14] [14] ;
unsigned short arr_53 [14] [14] [14] [14] [14] ;
unsigned int arr_57 [14] ;
signed char arr_58 [14] [14] [14] [14] [14] [14] ;
long long int arr_59 [14] [14] [14] [14] ;
unsigned int arr_65 [14] [14] [14] [14] [14] ;
long long int arr_66 [14] [14] [14] [14] [14] [14] [14] ;
unsigned short arr_67 [14] ;
long long int arr_74 [19] [19] ;
unsigned long long int arr_75 [19] [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (unsigned short)42582;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_2 [i_0] [i_1] = -1896214505;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (signed char)48;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 2986189343U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_8 [i_0] [i_1] = (unsigned short)5842;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = 5732845319336024745LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = 594589557U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_16 [i_0] [i_1] = (signed char)78;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_17 [i_0] = (unsigned char)51;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (short)-21464 : (short)-23018;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_21 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 3924921377408243388LL : 5387770119098838301LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_24 [i_0] [i_1] [i_2] = (short)13057;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            arr_27 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_0 % 2 == 0) ? 3494239659585948816ULL : 10753173881926110540ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_28 [i_0] = (short)-16050;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_30 [i_0] = (signed char)-30;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_34 [i_0] [i_1] [i_2] [i_3] = -3619530463097548554LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_39 [i_0] [i_1] [i_2] = 3894853714U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_40 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_44 [i_0] [i_1] [i_2] = 1684945391658814514ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            arr_55 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_3 % 2 == 0) ? (signed char)-35 : (signed char)18;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_68 [i_0] = (signed char)126;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_69 [i_0] = (short)13437;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_3 % 2 == 0) ? (short)-3263 : (short)32279;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_12 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_20 [i_0] = (i_0 % 2 == 0) ? (unsigned short)46795 : (unsigned short)9358;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_35 [i_0] [i_1] [i_2] [i_3] = (short)-22105;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_36 [i_0] [i_1] = (unsigned char)252;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_37 [i_0] [i_1] [i_2] [i_3] = 11657254725182951738ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_47 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? -303275716224185519LL : 1904532081971842651LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_50 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned char)195;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_53 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned short)53535;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_57 [i_0] = (i_0 % 2 == 0) ? 998304547U : 3713260669U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            arr_58 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_4 % 2 == 0) ? (signed char)71 : (signed char)-51;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_59 [i_0] [i_1] [i_2] [i_3] = -661095021438040291LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_65 [i_0] [i_1] [i_2] [i_3] [i_4] = 935862080U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 14; ++i_6) 
                                arr_66 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = -583063698993671569LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_67 [i_0] = (unsigned short)894;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_74 [i_0] [i_1] = 778681469450884842LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_75 [i_0] [i_1] [i_2] = 963101055882860222ULL;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        hash(&seed, arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    hash(&seed, arr_11 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_20 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    hash(&seed, arr_35 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_36 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    hash(&seed, arr_37 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    hash(&seed, arr_47 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        hash(&seed, arr_50 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        hash(&seed, arr_53 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_57 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            hash(&seed, arr_58 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    hash(&seed, arr_59 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        hash(&seed, arr_65 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 14; ++i_6) 
                                hash(&seed, arr_66 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_67 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_74 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                hash(&seed, arr_75 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
