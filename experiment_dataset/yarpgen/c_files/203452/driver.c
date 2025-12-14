#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-109;
long long int var_2 = -4530125302804577814LL;
short var_4 = (short)31123;
long long int var_5 = -2489589025877501738LL;
long long int var_6 = 7558000869971914779LL;
short var_7 = (short)6785;
long long int var_8 = 1005930166632060414LL;
int var_9 = -636913852;
signed char var_10 = (signed char)112;
unsigned long long int var_11 = 10434393409062354424ULL;
long long int var_12 = 8095355710538960397LL;
long long int var_13 = -6037096824366718534LL;
int var_14 = -96615526;
long long int var_15 = -5575776478751198592LL;
long long int var_16 = 4333732624777095219LL;
unsigned short var_17 = (unsigned short)26526;
signed char var_18 = (signed char)-3;
int zero = 0;
long long int var_19 = 1419286493676546984LL;
signed char var_20 = (signed char)13;
unsigned long long int var_21 = 15144509050938361365ULL;
signed char var_22 = (signed char)-109;
int var_23 = 2013286417;
int var_24 = 43804609;
long long int var_25 = 765228623098454807LL;
long long int var_26 = -6640771463416863065LL;
short var_27 = (short)-29448;
unsigned char var_28 = (unsigned char)62;
signed char var_29 = (signed char)-124;
unsigned long long int var_30 = 14978118606065885912ULL;
int var_31 = 801132373;
unsigned long long int var_32 = 7231514655006431349ULL;
long long int var_33 = 5177410496406371094LL;
short var_34 = (short)27342;
unsigned char var_35 = (unsigned char)128;
signed char var_36 = (signed char)-91;
short var_37 = (short)6044;
long long int arr_0 [23] ;
long long int arr_2 [23] [23] ;
long long int arr_3 [23] ;
long long int arr_6 [23] ;
long long int arr_9 [21] ;
short arr_10 [21] ;
long long int arr_13 [21] [21] ;
int arr_19 [21] [21] [21] [21] [21] ;
short arr_24 [25] ;
short arr_26 [25] ;
unsigned char arr_27 [25] ;
unsigned long long int arr_4 [23] [23] ;
unsigned short arr_7 [23] [23] ;
signed char arr_12 [21] ;
unsigned long long int arr_23 [21] [21] ;
unsigned long long int arr_29 [25] ;
long long int arr_30 [25] [25] ;
signed char arr_42 [18] [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = -8557228914245926104LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_2 [i_0] [i_1] = -7368900784887388377LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = 6443598676604048315LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = 331769900349638340LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_9 [i_0] = -4780645002913166928LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_10 [i_0] = (short)-26700;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_13 [i_0] [i_1] = -4788790261073942961LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        arr_19 [i_0] [i_1] [i_2] [i_3] [i_4] = -790202326;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_24 [i_0] = (short)-20180;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_26 [i_0] = (short)99;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_27 [i_0] = (unsigned char)121;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_4 [i_0] [i_1] = 2517338010137904039ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned short)30057;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_12 [i_0] = (signed char)95;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_23 [i_0] [i_1] = 15844051817003987013ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_29 [i_0] = 16831838372684084889ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_30 [i_0] [i_1] = -5526505758356436685LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_42 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (signed char)-46 : (signed char)20;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_23 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_29 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_30 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    hash(&seed, arr_42 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
