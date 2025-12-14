#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-90;
unsigned short var_1 = (unsigned short)15597;
signed char var_2 = (signed char)-6;
int var_3 = 495901967;
signed char var_5 = (signed char)-96;
unsigned char var_6 = (unsigned char)14;
unsigned long long int var_7 = 13269320929099824964ULL;
int var_10 = -1862340074;
unsigned char var_11 = (unsigned char)37;
int zero = 0;
unsigned char var_14 = (unsigned char)58;
unsigned short var_15 = (unsigned short)26138;
unsigned short var_16 = (unsigned short)25229;
unsigned long long int var_17 = 5598326219372206648ULL;
unsigned long long int var_18 = 8319151577614532778ULL;
int var_19 = 1020440369;
int var_20 = 1685437724;
int var_21 = -1346326672;
int var_22 = -1947547139;
signed char var_23 = (signed char)-105;
int var_24 = 182603171;
int var_25 = 1384040070;
signed char var_26 = (signed char)101;
unsigned short var_27 = (unsigned short)30216;
unsigned char var_28 = (unsigned char)190;
unsigned short var_29 = (unsigned short)59366;
int var_30 = -1291250901;
int var_31 = -1391561145;
int var_32 = -275999886;
unsigned short var_33 = (unsigned short)51022;
int var_34 = -1514629515;
int var_35 = -1526879092;
signed char var_36 = (signed char)-14;
unsigned short var_37 = (unsigned short)24206;
unsigned long long int var_38 = 16179488650766614522ULL;
unsigned long long int var_39 = 1579657974019146202ULL;
unsigned char var_40 = (unsigned char)104;
int arr_3 [19] ;
signed char arr_6 [19] [19] ;
int arr_7 [19] ;
unsigned char arr_8 [19] [19] [19] ;
int arr_9 [19] [19] ;
unsigned short arr_10 [19] [19] [19] [19] ;
unsigned long long int arr_11 [19] [19] [19] ;
int arr_12 [19] [19] ;
signed char arr_14 [19] ;
int arr_15 [19] ;
unsigned long long int arr_16 [19] [19] [19] [19] [19] [19] ;
unsigned short arr_17 [19] [19] [19] [19] ;
int arr_18 [19] [19] ;
unsigned short arr_20 [19] ;
unsigned long long int arr_23 [19] [19] [19] [19] [19] ;
unsigned short arr_24 [19] [19] [19] [19] [19] [19] [19] ;
int arr_26 [19] [19] [19] [19] [19] [19] ;
unsigned char arr_28 [19] [19] [19] [19] [19] ;
int arr_29 [19] ;
signed char arr_30 [19] [19] [19] [19] [19] [19] [19] ;
unsigned long long int arr_38 [20] [20] ;
signed char arr_2 [10] ;
unsigned char arr_5 [19] [19] ;
unsigned short arr_22 [19] ;
int arr_31 [19] [19] [19] [19] ;
int arr_34 [19] ;
unsigned short arr_37 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = 1743442534;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_6 [i_0] [i_1] = (signed char)-69;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_7 [i_0] = 1950654377;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (unsigned char)184;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_9 [i_0] [i_1] = 894525193;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (unsigned short)43286;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = 14296497797615287104ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_12 [i_0] [i_1] = 788572599;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_14 [i_0] = (signed char)101;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_15 [i_0] = -217623464;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 19; ++i_5) 
                            arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 3612890848818466774ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = (unsigned short)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_18 [i_0] [i_1] = 904962662;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_20 [i_0] = (unsigned short)51642;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        arr_23 [i_0] [i_1] [i_2] [i_3] [i_4] = 8792387842522425979ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 19; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 19; ++i_6) 
                                arr_24 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (unsigned short)3331;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 19; ++i_5) 
                            arr_26 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_0 % 2 == 0) ? -935406642 : 842562129;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        arr_28 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned char)175;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_29 [i_0] = -1843321188;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 19; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 19; ++i_6) 
                                arr_30 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (signed char)89;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_38 [i_0] [i_1] = 12914508728706994612ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (signed char)-38;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned char)100;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_22 [i_0] = (unsigned short)53640;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_31 [i_0] [i_1] [i_2] [i_3] = -1335653628;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_34 [i_0] = -1758351144;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_37 [i_0] = (unsigned short)52468;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_22 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    hash(&seed, arr_31 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_34 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_37 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
