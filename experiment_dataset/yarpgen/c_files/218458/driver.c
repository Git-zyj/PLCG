#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 242607330U;
unsigned short var_1 = (unsigned short)2477;
unsigned char var_2 = (unsigned char)243;
unsigned int var_3 = 1488504213U;
long long int var_4 = -1795491909421026666LL;
_Bool var_5 = (_Bool)0;
unsigned int var_6 = 1375541135U;
long long int var_7 = -5996953454334281952LL;
signed char var_8 = (signed char)-67;
signed char var_9 = (signed char)25;
long long int var_10 = 1390454755354487669LL;
int var_11 = -1255620294;
int var_12 = 935604772;
long long int var_13 = 8708159645632510674LL;
long long int var_14 = -2104170059905014486LL;
int zero = 0;
unsigned long long int var_15 = 18239058165426586338ULL;
signed char var_16 = (signed char)13;
int var_17 = -1663574576;
long long int var_18 = -5815814594944341728LL;
long long int var_19 = 24221574903014541LL;
unsigned long long int var_20 = 15307681658562176536ULL;
unsigned short var_21 = (unsigned short)46710;
unsigned long long int var_22 = 11682201546264137160ULL;
long long int var_23 = -7676036028990334626LL;
signed char var_24 = (signed char)77;
unsigned int var_25 = 3588817071U;
unsigned int var_26 = 2697801118U;
long long int var_27 = -3174696426325121217LL;
long long int var_28 = -5638289319752754300LL;
int var_29 = 1385712845;
unsigned int var_30 = 2465776050U;
unsigned int var_31 = 4018418955U;
unsigned short var_32 = (unsigned short)55590;
unsigned long long int var_33 = 16094940013444286419ULL;
_Bool var_34 = (_Bool)0;
unsigned long long int var_35 = 3870974910021500569ULL;
unsigned int var_36 = 2703240480U;
unsigned char var_37 = (unsigned char)203;
int var_38 = 567264771;
int var_39 = -1526710736;
int var_40 = 1848247841;
int var_41 = -1399445157;
signed char var_42 = (signed char)15;
long long int var_43 = -4582911120560319684LL;
signed char var_44 = (signed char)39;
unsigned int var_45 = 18357033U;
int var_46 = -1342543176;
unsigned char var_47 = (unsigned char)96;
_Bool var_48 = (_Bool)0;
unsigned char var_49 = (unsigned char)187;
_Bool var_50 = (_Bool)0;
unsigned long long int arr_0 [13] ;
signed char arr_1 [13] ;
unsigned int arr_2 [13] ;
unsigned int arr_3 [13] [13] ;
unsigned short arr_5 [13] [13] [13] ;
unsigned char arr_6 [13] [13] ;
unsigned long long int arr_8 [13] ;
unsigned long long int arr_9 [13] [13] ;
unsigned short arr_10 [13] [13] [13] ;
unsigned short arr_12 [13] [13] [13] ;
unsigned short arr_13 [13] [13] [13] ;
long long int arr_14 [13] [13] [13] ;
unsigned int arr_18 [13] ;
unsigned long long int arr_21 [20] ;
_Bool arr_22 [20] [20] ;
_Bool arr_23 [20] ;
unsigned char arr_25 [20] [20] [20] ;
int arr_26 [20] [20] ;
unsigned long long int arr_27 [20] [20] [20] ;
unsigned short arr_28 [20] [20] [20] [20] ;
unsigned long long int arr_29 [20] [20] [20] [20] [20] [20] ;
unsigned short arr_30 [20] [20] [20] [20] [20] [20] ;
unsigned char arr_35 [20] ;
unsigned int arr_42 [20] [20] [20] [20] [20] [20] ;
unsigned int arr_43 [20] [20] [20] [20] [20] [20] [20] ;
signed char arr_16 [13] [13] [13] [13] ;
unsigned int arr_24 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = 12099072527247484941ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (signed char)-118;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = 695237753U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_3 [i_0] [i_1] = 1578794012U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (unsigned short)44545;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned char)46;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_8 [i_0] = 7531977682776846659ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_9 [i_0] [i_1] = 12428343701505168293ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (unsigned short)4526;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (unsigned short)16529;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (unsigned short)63780;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = 5973942779434401175LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_18 [i_0] = 3082996055U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_21 [i_0] = 522522192297309657ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_22 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_23 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_25 [i_0] [i_1] [i_2] = (unsigned char)21;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_26 [i_0] [i_1] = -1556354969;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_27 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 846526641085730166ULL : 13388373859655374431ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_28 [i_0] [i_1] [i_2] [i_3] = (unsigned short)7787;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 20; ++i_5) 
                            arr_29 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_3 % 2 == 0) ? 976123544877558076ULL : 6981924981322639068ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 20; ++i_5) 
                            arr_30 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_0 % 2 == 0) ? (unsigned short)13944 : (unsigned short)50081;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_35 [i_0] = (unsigned char)73;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 20; ++i_5) 
                            arr_42 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 2800445564U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 20; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 20; ++i_6) 
                                arr_43 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = 2267244083U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_16 [i_0] [i_1] [i_2] [i_3] = (signed char)-68;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_24 [i_0] = 2953344029U;
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
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    hash(&seed, arr_16 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_24 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
