#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -287085340;
short var_1 = (short)29321;
unsigned char var_2 = (unsigned char)30;
int var_3 = 1058738080;
unsigned long long int var_4 = 7729335826116452450ULL;
int var_5 = 1022952225;
unsigned long long int var_7 = 11495820032569887966ULL;
short var_8 = (short)-32444;
int var_9 = 2088215945;
short var_10 = (short)28785;
unsigned long long int var_11 = 114898196112932308ULL;
unsigned long long int var_12 = 5145478791498603457ULL;
int zero = 0;
signed char var_13 = (signed char)126;
_Bool var_14 = (_Bool)0;
unsigned long long int var_15 = 15679594319729998840ULL;
unsigned long long int var_16 = 5740646933454400797ULL;
unsigned long long int var_17 = 4453663300402954635ULL;
unsigned int var_18 = 3022419068U;
signed char var_19 = (signed char)-38;
int var_20 = 1546661567;
int var_21 = 640263675;
unsigned char var_22 = (unsigned char)153;
unsigned char var_23 = (unsigned char)71;
signed char var_24 = (signed char)-89;
unsigned long long int var_25 = 8959595101947924269ULL;
unsigned long long int var_26 = 15474004797080792078ULL;
unsigned long long int var_27 = 4577885000155363062ULL;
long long int var_28 = 6986540001894284601LL;
short var_29 = (short)2906;
unsigned long long int arr_1 [17] ;
long long int arr_3 [17] [17] [17] ;
unsigned long long int arr_4 [17] [17] ;
unsigned char arr_5 [17] [17] [17] ;
int arr_6 [17] ;
signed char arr_9 [17] [17] [17] [17] ;
_Bool arr_10 [17] [17] [17] [17] ;
short arr_11 [17] [17] ;
unsigned long long int arr_12 [17] [17] [17] [17] [17] [17] ;
unsigned long long int arr_13 [17] ;
short arr_14 [17] [17] ;
unsigned long long int arr_17 [17] [17] ;
signed char arr_18 [17] [17] [17] [17] [17] ;
unsigned long long int arr_19 [17] ;
unsigned long long int arr_24 [17] ;
unsigned char arr_25 [17] ;
unsigned long long int arr_29 [17] ;
long long int arr_31 [17] [17] [17] ;
signed char arr_38 [17] ;
short arr_2 [17] ;
long long int arr_20 [17] [17] [17] [17] ;
unsigned long long int arr_21 [17] [17] [17] ;
unsigned long long int arr_22 [17] [17] ;
unsigned long long int arr_33 [17] ;
int arr_34 [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = 2902691378431878398ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 4253416363622417436LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_4 [i_0] [i_1] = 12492285768006227906ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (unsigned char)123;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_6 [i_0] = 1710840094;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (signed char)-115;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_11 [i_0] [i_1] = (short)1101;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 17; ++i_5) 
                            arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 3329135034435464803ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_13 [i_0] = 10172796680495668882ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_14 [i_0] [i_1] = (short)11641;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_17 [i_0] [i_1] = 1330073245117187252ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        arr_18 [i_0] [i_1] [i_2] [i_3] [i_4] = (signed char)-119;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_19 [i_0] = 11400701663308945048ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_24 [i_0] = 727436217649279490ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_25 [i_0] = (unsigned char)204;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_29 [i_0] = 3724449395582350925ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_31 [i_0] [i_1] [i_2] = 1904875926540890692LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_38 [i_0] = (signed char)-125;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (short)26854;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_20 [i_0] [i_1] [i_2] [i_3] = -2639079089858361197LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_21 [i_0] [i_1] [i_2] = 23305525634060757ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_22 [i_0] [i_1] = 5142890147537068107ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_33 [i_0] = 7182290808600068355ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_34 [i_0] [i_1] [i_2] = 945868043;
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
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    hash(&seed, arr_20 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                hash(&seed, arr_21 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_22 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_33 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                hash(&seed, arr_34 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
