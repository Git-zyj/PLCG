#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-25623;
unsigned char var_1 = (unsigned char)134;
_Bool var_2 = (_Bool)1;
unsigned long long int var_3 = 7913392456224173042ULL;
long long int var_4 = 5776641845832330588LL;
int var_5 = -1455893728;
long long int var_6 = 5517145290084374207LL;
unsigned short var_7 = (unsigned short)13216;
short var_8 = (short)9013;
unsigned short var_9 = (unsigned short)26146;
unsigned char var_10 = (unsigned char)228;
signed char var_11 = (signed char)54;
unsigned char var_12 = (unsigned char)83;
signed char var_13 = (signed char)-81;
unsigned char var_14 = (unsigned char)87;
unsigned char var_15 = (unsigned char)176;
long long int var_17 = 3275411067033394672LL;
int zero = 0;
unsigned char var_18 = (unsigned char)52;
unsigned short var_19 = (unsigned short)18951;
signed char var_20 = (signed char)-21;
unsigned char var_21 = (unsigned char)60;
_Bool var_22 = (_Bool)1;
unsigned long long int var_23 = 2438079975832926312ULL;
unsigned short var_24 = (unsigned short)54106;
unsigned long long int var_25 = 2680924944503586302ULL;
int var_26 = -1582014487;
unsigned short var_27 = (unsigned short)18378;
long long int var_28 = 6774799950256252736LL;
unsigned long long int var_29 = 4966866229572269548ULL;
unsigned short var_30 = (unsigned short)35716;
signed char arr_0 [25] ;
signed char arr_1 [25] [25] ;
unsigned char arr_2 [25] [25] ;
unsigned int arr_6 [20] ;
short arr_7 [20] [20] ;
int arr_9 [13] [13] ;
unsigned char arr_10 [13] [13] ;
unsigned char arr_12 [13] ;
signed char arr_3 [25] ;
unsigned char arr_4 [25] ;
unsigned int arr_5 [25] ;
signed char arr_15 [13] ;
unsigned long long int arr_16 [13] ;
unsigned char arr_17 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (signed char)-10;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_1 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)-96 : (signed char)76;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_2 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)72 : (unsigned char)221;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_6 [i_0] = 1978345612U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_7 [i_0] [i_1] = (short)30985;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_9 [i_0] [i_1] = 1285914197;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_10 [i_0] [i_1] = (unsigned char)184;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_12 [i_0] = (unsigned char)166;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (signed char)56 : (signed char)41;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (unsigned char)169 : (unsigned char)204;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 1427396993U : 637726165U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_15 [i_0] = (signed char)-49;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_16 [i_0] = 12520535716087550075ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_17 [i_0] [i_1] = (unsigned char)151;
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
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_17 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
