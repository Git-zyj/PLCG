#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2685030204U;
unsigned int var_3 = 2099726036U;
unsigned int var_5 = 2029292251U;
unsigned long long int var_7 = 8495655793166149171ULL;
unsigned int var_8 = 1659830809U;
_Bool var_9 = (_Bool)1;
signed char var_10 = (signed char)-112;
signed char var_11 = (signed char)-108;
unsigned int var_12 = 4048696369U;
long long int var_13 = 678236142987506961LL;
unsigned int var_14 = 2925608654U;
int zero = 0;
long long int var_15 = -3772047587821230517LL;
_Bool var_16 = (_Bool)0;
unsigned long long int var_17 = 15396422549725185963ULL;
long long int var_18 = -631366123310527268LL;
int var_19 = 989932797;
long long int var_20 = 4731021934917242545LL;
unsigned long long int var_21 = 16475491476297896839ULL;
unsigned int var_22 = 3983649843U;
unsigned int var_23 = 3945281138U;
unsigned short var_24 = (unsigned short)46579;
int var_25 = -220794820;
unsigned long long int var_26 = 12997652291290826686ULL;
unsigned int var_27 = 3833053229U;
long long int var_28 = -1201143446008933927LL;
unsigned int var_29 = 3213421860U;
long long int var_30 = 9151184133564196726LL;
int var_31 = 1289558953;
long long int var_32 = 8895664415948541013LL;
long long int var_33 = -5981727737768576833LL;
long long int var_34 = 6012636214991621523LL;
int var_35 = 1912095487;
unsigned long long int var_36 = 9142425172655674093ULL;
unsigned int var_37 = 2026812151U;
unsigned long long int var_38 = 14388674732386419197ULL;
short var_39 = (short)-3748;
unsigned int var_40 = 1800420140U;
long long int var_41 = -1672825396078819013LL;
_Bool var_42 = (_Bool)1;
unsigned long long int var_43 = 6952599354782009688ULL;
signed char var_44 = (signed char)34;
long long int var_45 = -5081477653490726891LL;
unsigned int var_46 = 2898327450U;
unsigned short var_47 = (unsigned short)17383;
unsigned int var_48 = 2682185735U;
long long int var_49 = -686367694318079326LL;
unsigned short var_50 = (unsigned short)14827;
short var_51 = (short)-3741;
long long int arr_0 [13] ;
unsigned int arr_1 [13] ;
unsigned long long int arr_3 [13] [13] [13] ;
unsigned int arr_5 [13] [13] [13] ;
unsigned int arr_6 [21] ;
unsigned int arr_7 [21] ;
_Bool arr_8 [21] ;
unsigned short arr_9 [21] ;
long long int arr_10 [21] [21] ;
short arr_11 [21] ;
unsigned int arr_18 [17] [17] [17] ;
unsigned int arr_21 [17] [17] ;
unsigned long long int arr_22 [17] ;
short arr_23 [17] [17] [17] [17] [17] ;
unsigned int arr_26 [17] [17] [17] [17] [17] [17] [17] ;
unsigned long long int arr_28 [25] [25] ;
unsigned long long int arr_29 [25] [25] ;
unsigned long long int arr_30 [25] ;
long long int arr_31 [25] [25] ;
_Bool arr_32 [25] ;
short arr_33 [25] [25] [25] ;
unsigned long long int arr_34 [25] [25] [25] ;
short arr_35 [25] [25] [25] [25] ;
long long int arr_36 [25] [25] [25] ;
short arr_37 [25] [25] [25] [25] ;
unsigned long long int arr_38 [25] ;
unsigned long long int arr_39 [25] ;
unsigned short arr_40 [25] [25] ;
unsigned long long int arr_43 [25] [25] [25] ;
_Bool arr_45 [25] ;
_Bool arr_47 [25] ;
long long int arr_48 [25] ;
unsigned int arr_49 [25] [25] [25] ;
_Bool arr_56 [13] [13] ;
int arr_12 [21] ;
long long int arr_15 [21] [21] ;
short arr_20 [17] ;
int arr_41 [25] [25] ;
long long int arr_42 [25] [25] ;
short arr_51 [25] ;
short arr_52 [25] [25] ;
short arr_53 [25] ;
int arr_63 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 3787600588320013071LL : 7259488847783782854LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 2111481738U : 3669789742U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 12956204346439031964ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 2278998004U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_6 [i_0] = 713501023U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_7 [i_0] = 1931100995U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_8 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_9 [i_0] = (unsigned short)39867;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_10 [i_0] [i_1] = -4407548599324538441LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_11 [i_0] = (short)-704;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = 634730416U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_21 [i_0] [i_1] = (i_0 % 2 == 0) ? 2445616521U : 2877464408U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_22 [i_0] = (i_0 % 2 == 0) ? 17046853567065548336ULL : 9598580214289726558ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        arr_23 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_1 % 2 == 0) ? (short)-8680 : (short)-21006;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 17; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 17; ++i_6) 
                                arr_26 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_0 % 2 == 0) ? 3442914841U : 1267903630U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_28 [i_0] [i_1] = (i_0 % 2 == 0) ? 15011923346295924955ULL : 825535588701863558ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_29 [i_0] [i_1] = (i_1 % 2 == 0) ? 12868062334175759106ULL : 4379615199297556210ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_30 [i_0] = 16942621034888014503ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_31 [i_0] [i_1] = (i_1 % 2 == 0) ? -8652007034314655831LL : 167169790382101431LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_32 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_33 [i_0] [i_1] [i_2] = (short)-12855;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_34 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 5702540123266079526ULL : 9285563337039201490ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_35 [i_0] [i_1] [i_2] [i_3] = (short)28486;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_36 [i_0] [i_1] [i_2] = -5900821167805498167LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_37 [i_0] [i_1] [i_2] [i_3] = (short)5300;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_38 [i_0] = 12664913915625334238ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_39 [i_0] = (i_0 % 2 == 0) ? 8127443004279413183ULL : 14849591434250143633ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_40 [i_0] [i_1] = (unsigned short)18227;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_43 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 16095465881414596109ULL : 6611192673500950508ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_45 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_47 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_48 [i_0] = -806200522315314643LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_49 [i_0] [i_1] [i_2] = 3189726151U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_56 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_12 [i_0] = 348586474;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_15 [i_0] [i_1] = 5075497399618493642LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_20 [i_0] = (i_0 % 2 == 0) ? (short)19441 : (short)5719;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_41 [i_0] [i_1] = (i_1 % 2 == 0) ? -1460340764 : -1654336518;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_42 [i_0] [i_1] = (i_0 % 2 == 0) ? 7818416207553524030LL : 7658728817466520391LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_51 [i_0] = (i_0 % 2 == 0) ? (short)-17575 : (short)-19548;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_52 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)29329 : (short)7162;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_53 [i_0] = (i_0 % 2 == 0) ? (short)-29824 : (short)-4477;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_63 [i_0] = -611057703;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_15 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_20 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_41 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_42 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_51 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_52 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_53 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_63 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
