#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)28808;
short var_1 = (short)9885;
long long int var_3 = -564634616279532374LL;
long long int var_5 = 428653780821049237LL;
long long int var_6 = -1682772604162287392LL;
signed char var_7 = (signed char)-16;
short var_8 = (short)3439;
short var_11 = (short)-10315;
signed char var_12 = (signed char)4;
unsigned int var_17 = 4042286313U;
int zero = 0;
long long int var_18 = 3884294309150915402LL;
short var_19 = (short)-30456;
long long int var_20 = -3581557353977763439LL;
unsigned int var_21 = 2338362713U;
short var_22 = (short)92;
unsigned long long int var_23 = 1187759665014187961ULL;
unsigned int var_24 = 3256212901U;
short var_25 = (short)-10830;
long long int var_26 = 6444609848876541903LL;
long long int var_27 = 939877120591742579LL;
unsigned int var_28 = 3490467962U;
short var_29 = (short)10196;
short var_30 = (short)-26137;
signed char var_31 = (signed char)113;
long long int var_32 = 8039837605920823235LL;
short arr_0 [13] ;
short arr_2 [13] [13] ;
signed char arr_4 [13] [13] ;
long long int arr_5 [13] ;
short arr_9 [13] ;
unsigned long long int arr_10 [13] [13] ;
unsigned long long int arr_13 [13] [13] [13] ;
long long int arr_20 [22] ;
unsigned long long int arr_21 [22] [22] ;
long long int arr_22 [16] ;
unsigned int arr_23 [16] ;
long long int arr_6 [13] [13] ;
unsigned int arr_7 [13] [13] ;
short arr_11 [13] [13] ;
unsigned int arr_24 [16] ;
long long int arr_25 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (short)-17167;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_2 [i_0] [i_1] = (short)-29966;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_4 [i_0] [i_1] = (signed char)-77;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_5 [i_0] = 4215123220619533129LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_9 [i_0] = (short)-424;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_10 [i_0] [i_1] = 2575352690204832425ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 10559690560887755440ULL : 5356994437444670488ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_20 [i_0] = -1862197968636931568LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_21 [i_0] [i_1] = 18388500561502230116ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_22 [i_0] = 2047870042680466906LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_23 [i_0] = (i_0 % 2 == 0) ? 394692758U : 3389076044U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_6 [i_0] [i_1] = 7079765215381618167LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_7 [i_0] [i_1] = 3449108640U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_11 [i_0] [i_1] = (short)20767;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_24 [i_0] = (i_0 % 2 == 0) ? 1045066058U : 1361378972U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_25 [i_0] = (i_0 % 2 == 0) ? -7946179151836962352LL : -612707773029497897LL;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_24 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_25 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
