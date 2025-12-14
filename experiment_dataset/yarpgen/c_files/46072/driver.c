#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
signed char var_1 = (signed char)-69;
unsigned short var_3 = (unsigned short)30197;
unsigned short var_4 = (unsigned short)21927;
signed char var_5 = (signed char)65;
unsigned int var_9 = 1676706965U;
long long int var_10 = -3060467505980831561LL;
int var_11 = -2118645099;
int var_12 = -976263594;
signed char var_13 = (signed char)120;
long long int var_14 = -6368644479251477411LL;
int var_15 = 267679931;
int zero = 0;
unsigned long long int var_16 = 13511494845493287925ULL;
short var_17 = (short)-17388;
unsigned int var_18 = 785429850U;
short var_19 = (short)2838;
unsigned int var_20 = 1730704435U;
int var_21 = -1287861635;
unsigned int var_22 = 3775112173U;
long long int var_23 = -3347236284653719394LL;
signed char var_24 = (signed char)27;
short var_25 = (short)32075;
unsigned long long int var_26 = 15635544838464976469ULL;
int var_27 = -2115668290;
long long int var_28 = -1243359349350554852LL;
int var_29 = -1264581345;
unsigned long long int var_30 = 10838314939265965206ULL;
int var_31 = -182327;
unsigned int var_32 = 1609342956U;
unsigned long long int var_33 = 15477654382164753847ULL;
int var_34 = -350407659;
signed char var_35 = (signed char)95;
signed char var_36 = (signed char)7;
unsigned int arr_0 [22] ;
signed char arr_1 [22] ;
_Bool arr_4 [21] ;
unsigned short arr_6 [21] ;
_Bool arr_11 [21] ;
int arr_17 [19] ;
unsigned short arr_20 [23] [23] ;
unsigned char arr_22 [23] [23] ;
signed char arr_24 [23] ;
long long int arr_25 [23] [23] ;
short arr_26 [23] [23] [23] [23] ;
unsigned long long int arr_28 [23] [23] ;
int arr_31 [23] [23] ;
_Bool arr_32 [23] ;
_Bool arr_3 [22] [22] ;
int arr_7 [21] ;
unsigned int arr_13 [21] [21] [21] ;
_Bool arr_19 [19] ;
signed char arr_34 [23] [23] ;
long long int arr_39 [23] [23] ;
unsigned long long int arr_40 [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = 3267815020U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (signed char)-44;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_6 [i_0] = (unsigned short)29229;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_11 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_17 [i_0] = -1073874777;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_20 [i_0] [i_1] = (unsigned short)9501;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_22 [i_0] [i_1] = (unsigned char)172;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_24 [i_0] = (signed char)-77;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_25 [i_0] [i_1] = -4591874415918098284LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_26 [i_0] [i_1] [i_2] [i_3] = (short)-23685;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_28 [i_0] [i_1] = 16345507271482958458ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_31 [i_0] [i_1] = 361520343;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_32 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? -833373014 : 1616808115;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 1260661449U : 3910361440U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_19 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_34 [i_0] [i_1] = (signed char)21;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_39 [i_0] [i_1] = -2249607304824877281LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_40 [i_0] [i_1] [i_2] = 14380933105733666757ULL;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                hash(&seed, arr_13 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_19 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_34 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_39 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                hash(&seed, arr_40 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
