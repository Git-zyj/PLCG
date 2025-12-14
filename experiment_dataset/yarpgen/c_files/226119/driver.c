#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)54798;
unsigned long long int var_1 = 64281257115964600ULL;
long long int var_2 = 3182217459574997807LL;
unsigned long long int var_3 = 9566059924872918246ULL;
short var_4 = (short)12196;
short var_6 = (short)15366;
long long int var_8 = 5434459992503680271LL;
short var_9 = (short)19511;
short var_10 = (short)-24912;
long long int var_11 = 5372422014639098140LL;
int zero = 0;
short var_12 = (short)25507;
short var_13 = (short)-2174;
unsigned short var_14 = (unsigned short)36963;
long long int var_15 = -1709954062420950802LL;
short var_16 = (short)-30884;
short var_17 = (short)31592;
long long int var_18 = 3844115606702430224LL;
int var_19 = 66894116;
int var_20 = 1081648855;
unsigned short var_21 = (unsigned short)14685;
unsigned short var_22 = (unsigned short)29358;
long long int var_23 = -6390634731825240970LL;
short var_24 = (short)24576;
short var_25 = (short)32613;
int var_26 = -192866094;
long long int var_27 = -4881520598134922546LL;
short var_28 = (short)26509;
short var_29 = (short)-17594;
long long int var_30 = 6390776355851680828LL;
short var_31 = (short)3821;
long long int var_32 = -1372682581416473706LL;
unsigned short var_33 = (unsigned short)24256;
long long int var_34 = -2101675315310096898LL;
unsigned short var_35 = (unsigned short)53249;
long long int var_36 = 1425171591446483534LL;
unsigned long long int arr_0 [11] ;
short arr_1 [11] ;
unsigned short arr_3 [18] ;
unsigned long long int arr_4 [18] ;
int arr_6 [18] ;
short arr_7 [18] [18] [18] ;
unsigned short arr_9 [18] [18] ;
short arr_10 [18] [18] [18] [18] ;
unsigned short arr_14 [18] [18] [18] [18] [18] [18] ;
int arr_16 [18] [18] [18] ;
unsigned short arr_17 [18] [18] [18] [18] [18] [18] [18] ;
unsigned short arr_20 [18] [18] [18] [18] [18] [18] ;
int arr_25 [18] [18] [18] [18] [18] ;
long long int arr_30 [18] [18] [18] [18] ;
unsigned short arr_32 [18] [18] [18] [18] [18] [18] ;
long long int arr_33 [18] [18] [18] [18] [18] ;
unsigned short arr_34 [18] [18] [18] [18] [18] ;
unsigned long long int arr_23 [18] [18] [18] [18] [18] [18] [18] ;
unsigned short arr_26 [18] [18] [18] [18] [18] [18] ;
short arr_27 [18] [18] [18] [18] [18] [18] [18] ;
short arr_28 [18] [18] [18] [18] ;
unsigned long long int arr_35 [18] [18] [18] ;
unsigned long long int arr_41 [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = 1184094779197369015ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (short)3156 : (short)28534;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (unsigned short)64777;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = 1942901917668653615ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_6 [i_0] = -1038478033;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (short)13839;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_9 [i_0] [i_1] = (unsigned short)954;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (short)18590;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 18; ++i_5) 
                            arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned short)25641;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = 910217861;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 18; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 18; ++i_6) 
                                arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_1 % 2 == 0) ? (unsigned short)36674 : (unsigned short)24230;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 18; ++i_5) 
                            arr_20 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_4 % 2 == 0) ? (unsigned short)61354 : (unsigned short)52081;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        arr_25 [i_0] [i_1] [i_2] [i_3] [i_4] = -859709172;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_30 [i_0] [i_1] [i_2] [i_3] = 5951340653139124326LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 18; ++i_5) 
                            arr_32 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned short)26304;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        arr_33 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? -9144173172948109783LL : 494782990864987257LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        arr_34 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned short)40464;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 18; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 18; ++i_6) 
                                arr_23 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = 1767521613054144580ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 18; ++i_5) 
                            arr_26 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned short)63315;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 18; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 18; ++i_6) 
                                arr_27 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (short)-27514;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_28 [i_0] [i_1] [i_2] [i_3] = (short)-19815;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_35 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 17620980577606778532ULL : 6645007409088303194ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_41 [i_0] [i_1] [i_2] = 5647589654230291428ULL;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 18; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 18; ++i_6) 
                                hash(&seed, arr_23 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 18; ++i_5) 
                            hash(&seed, arr_26 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 18; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 18; ++i_6) 
                                hash(&seed, arr_27 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    hash(&seed, arr_28 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                hash(&seed, arr_35 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                hash(&seed, arr_41 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
