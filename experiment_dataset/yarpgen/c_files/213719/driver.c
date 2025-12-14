#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-12469;
unsigned long long int var_1 = 12765299789909817544ULL;
unsigned long long int var_2 = 13557300712938125625ULL;
unsigned long long int var_3 = 9054803076455196625ULL;
signed char var_4 = (signed char)11;
unsigned long long int var_5 = 4227913882009717058ULL;
short var_7 = (short)10889;
short var_8 = (short)-9237;
unsigned long long int var_9 = 9931664422440411242ULL;
short var_10 = (short)32090;
int zero = 0;
unsigned int var_11 = 3557489498U;
unsigned char var_12 = (unsigned char)63;
unsigned long long int var_13 = 16927083253714008157ULL;
unsigned short var_14 = (unsigned short)28620;
unsigned int var_15 = 4283065662U;
unsigned long long int var_16 = 1909626696919758829ULL;
signed char var_17 = (signed char)18;
signed char var_18 = (signed char)-38;
unsigned int var_19 = 4277648133U;
unsigned char var_20 = (unsigned char)66;
short var_21 = (short)27618;
signed char var_22 = (signed char)2;
short var_23 = (short)31763;
unsigned short var_24 = (unsigned short)59361;
long long int var_25 = -3205069059044319406LL;
short var_26 = (short)13551;
signed char var_27 = (signed char)-56;
unsigned char var_28 = (unsigned char)225;
unsigned char var_29 = (unsigned char)49;
short var_30 = (short)-23493;
unsigned char var_31 = (unsigned char)52;
unsigned long long int var_32 = 460988793393814568ULL;
unsigned short arr_0 [15] ;
short arr_1 [15] ;
unsigned int arr_2 [15] ;
unsigned int arr_3 [25] ;
unsigned long long int arr_5 [25] [25] ;
unsigned short arr_8 [25] [25] ;
unsigned long long int arr_9 [25] [25] [25] ;
unsigned char arr_10 [25] ;
short arr_13 [25] [25] ;
signed char arr_14 [25] ;
unsigned long long int arr_15 [20] ;
long long int arr_16 [20] ;
unsigned long long int arr_17 [20] ;
unsigned short arr_18 [20] [20] [20] ;
unsigned char arr_20 [20] [20] [20] ;
short arr_6 [25] ;
short arr_11 [25] [25] [25] ;
signed char arr_12 [25] ;
unsigned short arr_19 [20] [20] ;
unsigned short arr_23 [20] [20] [20] [20] ;
unsigned long long int arr_39 [20] [20] [20] [20] [20] [20] ;
short arr_47 [20] ;
signed char arr_48 [20] [20] ;
short arr_49 [20] ;
unsigned short arr_50 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (unsigned short)59282;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (short)-20485;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = 1723151756U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 3683557347U : 2439889313U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? 1377311327068473704ULL : 8996215704444088958ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_8 [i_0] [i_1] = (unsigned short)371;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 12734210185595865205ULL : 14392433634310638425ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_10 [i_0] = (unsigned char)165;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_13 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)4241 : (short)17960;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_14 [i_0] = (signed char)121;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_15 [i_0] = 7964220918765607493ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_16 [i_0] = -3824235214959452519LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_17 [i_0] = 8057134249125217182ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = (unsigned short)1506;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_20 [i_0] [i_1] [i_2] = (unsigned char)132;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (short)-3304 : (short)-28845;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (short)14508 : (short)6102;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? (signed char)-2 : (signed char)24;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_19 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)14310 : (unsigned short)39386;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_23 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (unsigned short)39865 : (unsigned short)51106;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 20; ++i_5) 
                            arr_39 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_2 % 2 == 0) ? 651798512535627207ULL : 3209069872857527551ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_47 [i_0] = (i_0 % 2 == 0) ? (short)-9288 : (short)10137;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_48 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)49 : (signed char)-82;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_49 [i_0] = (i_0 % 2 == 0) ? (short)-20759 : (short)-13231;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_50 [i_0] = (unsigned short)261;
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
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                hash(&seed, arr_11 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_19 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    hash(&seed, arr_23 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 20; ++i_5) 
                            hash(&seed, arr_39 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_47 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_48 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_49 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_50 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
