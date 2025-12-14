#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2951198502969022287LL;
long long int var_1 = -2841115732510497606LL;
unsigned int var_3 = 3684982108U;
unsigned char var_5 = (unsigned char)100;
unsigned long long int var_7 = 17097011992460653173ULL;
short var_8 = (short)15568;
unsigned int var_11 = 2192531321U;
int var_12 = 1589949915;
int var_14 = -87618445;
int zero = 0;
int var_15 = -702754922;
unsigned int var_16 = 3066221663U;
unsigned long long int var_17 = 2948730248651963371ULL;
unsigned int var_18 = 2730482684U;
unsigned short var_19 = (unsigned short)5110;
unsigned int var_20 = 1513084454U;
unsigned long long int var_21 = 13604965533006408011ULL;
unsigned char var_22 = (unsigned char)212;
signed char var_23 = (signed char)120;
unsigned long long int var_24 = 16218898566982573358ULL;
int var_25 = 139148728;
unsigned long long int arr_0 [20] [20] ;
unsigned long long int arr_1 [20] ;
unsigned char arr_2 [20] [20] [20] ;
unsigned char arr_4 [20] ;
unsigned int arr_5 [20] [20] [20] ;
signed char arr_6 [20] [20] ;
signed char arr_8 [23] ;
unsigned char arr_10 [23] [23] ;
signed char arr_11 [23] ;
unsigned char arr_12 [23] [23] [23] ;
signed char arr_13 [23] ;
unsigned long long int arr_14 [23] ;
unsigned int arr_7 [20] [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_0 [i_0] [i_1] = 3866556313526048198ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = 18357759974821307366ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (unsigned char)87;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = (unsigned char)93;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 606194738U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_6 [i_0] [i_1] = (signed char)-45;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_8 [i_0] = (signed char)-70;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_10 [i_0] [i_1] = (unsigned char)158;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_11 [i_0] = (signed char)-51;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (unsigned char)166;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_13 [i_0] = (signed char)121;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_14 [i_0] = 15270960694039054651ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = 1280323812U;
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
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                hash(&seed, arr_7 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
