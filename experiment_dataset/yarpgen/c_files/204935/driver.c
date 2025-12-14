#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3846248516U;
unsigned long long int var_1 = 17565287060922903852ULL;
signed char var_3 = (signed char)-68;
unsigned int var_4 = 957865240U;
long long int var_6 = 5331355009082282100LL;
unsigned int var_7 = 1392988196U;
unsigned short var_8 = (unsigned short)29282;
short var_9 = (short)-18122;
signed char var_10 = (signed char)54;
short var_11 = (short)1582;
long long int var_14 = -7667856730366170385LL;
unsigned long long int var_15 = 3263319335607165332ULL;
long long int var_16 = -5697203897140146561LL;
long long int var_17 = 1177266038970358717LL;
int zero = 0;
unsigned long long int var_18 = 11745934731923081377ULL;
long long int var_19 = -4467570737525938753LL;
unsigned char var_20 = (unsigned char)113;
long long int var_21 = -99488343911124685LL;
unsigned short var_22 = (unsigned short)27433;
unsigned long long int var_23 = 12694118271709878021ULL;
long long int var_24 = 3749522388931818317LL;
signed char var_25 = (signed char)-83;
unsigned int var_26 = 1495472820U;
unsigned long long int var_27 = 6327500574480733049ULL;
signed char var_28 = (signed char)6;
long long int var_29 = -7122447662494174437LL;
short var_30 = (short)11608;
unsigned long long int var_31 = 17012556873956882157ULL;
unsigned short var_32 = (unsigned short)53362;
_Bool var_33 = (_Bool)0;
long long int var_34 = -4609053420391696719LL;
long long int arr_0 [13] [13] ;
unsigned long long int arr_1 [13] ;
signed char arr_5 [13] [13] [13] ;
short arr_8 [12] ;
long long int arr_11 [21] ;
unsigned long long int arr_12 [21] [21] ;
unsigned int arr_13 [21] ;
short arr_20 [20] [20] ;
unsigned short arr_21 [20] ;
short arr_22 [20] [20] ;
long long int arr_26 [20] [20] [20] [20] ;
unsigned short arr_28 [20] [20] ;
unsigned short arr_9 [12] [12] ;
unsigned int arr_10 [12] [12] ;
unsigned short arr_14 [21] ;
unsigned short arr_15 [21] [21] ;
short arr_18 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = -1913069675302484601LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = 13462218486973466111ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (signed char)54;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_8 [i_0] = (short)31183;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_11 [i_0] = -5409798962593593484LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_12 [i_0] [i_1] = 17336017776557228882ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_13 [i_0] = 1622396360U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_20 [i_0] [i_1] = (short)-139;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_21 [i_0] = (unsigned short)29870;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_22 [i_0] [i_1] = (short)18284;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_26 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 5978021401258674521LL : -3782110657339459345LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_28 [i_0] [i_1] = (unsigned short)40017;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_9 [i_0] [i_1] = (unsigned short)8138;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_10 [i_0] [i_1] = 2675891229U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_14 [i_0] = (unsigned short)54086;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_15 [i_0] [i_1] = (unsigned short)62165;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_18 [i_0] = (short)-14704;
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
    hash(&seed, var_33);
    hash(&seed, var_34);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_15 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_18 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
