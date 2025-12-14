#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)163;
unsigned short var_1 = (unsigned short)21720;
unsigned long long int var_2 = 3062154764379712066ULL;
unsigned short var_3 = (unsigned short)21284;
unsigned char var_4 = (unsigned char)162;
unsigned long long int var_5 = 5615572375622325719ULL;
unsigned short var_6 = (unsigned short)55701;
unsigned long long int var_7 = 12505199090933016139ULL;
unsigned short var_8 = (unsigned short)5532;
unsigned int var_9 = 3113320910U;
unsigned short var_10 = (unsigned short)14427;
unsigned short var_11 = (unsigned short)20526;
unsigned long long int var_12 = 12050512437331375765ULL;
unsigned long long int var_13 = 6972988926132692190ULL;
unsigned char var_14 = (unsigned char)42;
int zero = 0;
unsigned int var_15 = 426536917U;
int var_16 = -686823515;
unsigned int var_17 = 2510357717U;
unsigned short var_18 = (unsigned short)44220;
unsigned long long int var_19 = 657978580690155910ULL;
unsigned short var_20 = (unsigned short)46386;
int var_21 = -54110150;
unsigned int var_22 = 1915074145U;
unsigned char var_23 = (unsigned char)222;
unsigned int var_24 = 3896276881U;
unsigned long long int var_25 = 11087558244575655119ULL;
long long int var_26 = 121990316107251487LL;
unsigned int var_27 = 2249991743U;
unsigned char var_28 = (unsigned char)124;
long long int var_29 = -8523959272247932489LL;
unsigned char arr_0 [11] ;
long long int arr_1 [11] ;
unsigned int arr_3 [20] [20] ;
unsigned long long int arr_4 [20] ;
unsigned long long int arr_5 [20] ;
unsigned char arr_6 [20] ;
unsigned short arr_7 [20] [20] [20] ;
long long int arr_10 [20] ;
unsigned short arr_12 [20] [20] [20] [20] ;
unsigned short arr_13 [20] [20] [20] [20] [20] [20] ;
unsigned long long int arr_14 [20] [20] ;
unsigned short arr_17 [20] [20] ;
unsigned int arr_19 [20] [20] [20] ;
unsigned char arr_21 [20] [20] [20] [20] ;
unsigned long long int arr_24 [20] ;
unsigned char arr_29 [22] ;
unsigned short arr_30 [22] ;
unsigned int arr_31 [22] [22] [22] ;
unsigned int arr_32 [22] ;
unsigned long long int arr_33 [22] [22] ;
unsigned short arr_34 [22] [22] [22] [22] ;
unsigned int arr_36 [22] [22] [22] [22] ;
int arr_37 [22] [22] ;
unsigned short arr_38 [22] ;
unsigned short arr_40 [22] [22] [22] [22] [22] [22] ;
unsigned char arr_43 [22] [22] [22] [22] [22] [22] ;
unsigned long long int arr_48 [18] ;
unsigned int arr_2 [11] ;
unsigned short arr_9 [20] ;
unsigned long long int arr_15 [20] ;
long long int arr_16 [20] [20] [20] ;
long long int arr_25 [20] [20] ;
unsigned char arr_26 [20] [20] [20] ;
unsigned short arr_27 [20] ;
unsigned short arr_28 [20] [20] ;
int arr_44 [22] [22] [22] [22] [22] ;
int arr_45 [22] [22] [22] [22] [22] [22] [22] ;
unsigned char arr_49 [18] ;
unsigned short arr_50 [18] ;
unsigned long long int arr_51 [18] ;
unsigned int arr_52 [18] ;
unsigned char arr_53 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (unsigned char)10;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = 25816221275984192LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_3 [i_0] [i_1] = 2540840074U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = 6463257447453204919ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_5 [i_0] = 722957175112329230ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_6 [i_0] = (unsigned char)58;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (unsigned short)59901;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_10 [i_0] = 8820860932345493617LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = (unsigned short)9446;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 20; ++i_5) 
                            arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned short)51025;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_14 [i_0] [i_1] = 6358933713609376929ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_17 [i_0] [i_1] = (unsigned short)8923;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_19 [i_0] [i_1] [i_2] = 3172315374U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_21 [i_0] [i_1] [i_2] [i_3] = (unsigned char)211;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_24 [i_0] = 15866467386094692498ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_29 [i_0] = (unsigned char)15;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_30 [i_0] = (unsigned short)32086;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_31 [i_0] [i_1] [i_2] = 3066963035U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_32 [i_0] = 2397980346U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_33 [i_0] [i_1] = 828992936552096749ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_34 [i_0] [i_1] [i_2] [i_3] = (unsigned short)46002;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_36 [i_0] [i_1] [i_2] [i_3] = 4046386429U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_37 [i_0] [i_1] = -652397156;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_38 [i_0] = (unsigned short)11022;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 22; ++i_5) 
                            arr_40 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned short)59508;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 22; ++i_5) 
                            arr_43 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned char)221;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_48 [i_0] = 9700618456299751269ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = 3985308295U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_9 [i_0] = (unsigned short)64115;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_15 [i_0] = 2544686629459418653ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = 6909594314533669044LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_25 [i_0] [i_1] = -3168968955083060935LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_26 [i_0] [i_1] [i_2] = (unsigned char)45;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_27 [i_0] = (unsigned short)41967;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_28 [i_0] [i_1] = (unsigned short)65266;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        arr_44 [i_0] [i_1] [i_2] [i_3] [i_4] = 2144334364;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 22; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 22; ++i_6) 
                                arr_45 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = -1821120822;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_49 [i_0] = (unsigned char)24;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_50 [i_0] = (unsigned short)64358;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_51 [i_0] = 13580595533077637093ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_52 [i_0] = 2557120637U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_53 [i_0] [i_1] = (unsigned char)158;
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
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                hash(&seed, arr_16 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_25 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                hash(&seed, arr_26 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_27 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_28 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        hash(&seed, arr_44 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 22; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 22; ++i_6) 
                                hash(&seed, arr_45 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_49 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_50 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_51 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_52 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_53 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
