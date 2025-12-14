#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -973662496;
unsigned long long int var_3 = 1312624246025745061ULL;
unsigned int var_4 = 880654849U;
long long int var_5 = -6374278981216432435LL;
unsigned int var_6 = 4168639852U;
unsigned long long int var_7 = 18376977706896670647ULL;
int zero = 0;
unsigned long long int var_11 = 9817153831193528115ULL;
unsigned long long int var_12 = 7709277021852606469ULL;
unsigned long long int var_13 = 11956922260959584392ULL;
short var_14 = (short)-28291;
_Bool var_15 = (_Bool)0;
short var_16 = (short)29117;
short var_17 = (short)-8828;
signed char var_18 = (signed char)-51;
long long int var_19 = 6136923209204086112LL;
signed char var_20 = (signed char)-111;
long long int var_21 = 2892912176454053086LL;
unsigned long long int var_22 = 15082569999868174965ULL;
unsigned int var_23 = 306216044U;
long long int arr_0 [17] ;
signed char arr_2 [17] [17] [17] ;
short arr_4 [23] [23] ;
unsigned short arr_5 [23] ;
unsigned short arr_6 [23] ;
long long int arr_7 [23] [23] [23] ;
unsigned long long int arr_8 [23] [23] ;
signed char arr_9 [23] [23] ;
long long int arr_10 [23] ;
signed char arr_13 [23] [23] ;
signed char arr_11 [23] [23] ;
int arr_14 [23] ;
signed char arr_15 [23] [23] ;
long long int arr_18 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = -6842996693753500671LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (signed char)-25;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_4 [i_0] [i_1] = (short)-3614;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = (unsigned short)50889;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = (unsigned short)52544;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = -8694617167622985580LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_8 [i_0] [i_1] = 15791222346205182980ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_9 [i_0] [i_1] = (signed char)(-127 - 1);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_10 [i_0] = -6833758407671886299LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_13 [i_0] [i_1] = (signed char)95;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_11 [i_0] [i_1] = (signed char)-52;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_14 [i_0] = 1126390656;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_15 [i_0] [i_1] = (signed char)-99;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_18 [i_0] = 4404960673131533598LL;
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
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_15 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_18 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
