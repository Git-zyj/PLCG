#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 4065531330U;
int var_4 = -1080272128;
signed char var_7 = (signed char)-7;
int var_12 = 2080743736;
unsigned char var_18 = (unsigned char)17;
int zero = 0;
int var_19 = 1282940961;
int var_20 = 1697976577;
unsigned char var_21 = (unsigned char)245;
signed char var_22 = (signed char)-2;
signed char var_23 = (signed char)-126;
long long int var_24 = 7548980092512809030LL;
unsigned long long int var_25 = 12756816624016882520ULL;
int var_26 = -517862191;
unsigned int var_27 = 423044826U;
short var_28 = (short)-9265;
int var_29 = 790479073;
int var_30 = -438824355;
unsigned char var_31 = (unsigned char)255;
int var_32 = 533506421;
unsigned int var_33 = 2461000572U;
unsigned long long int var_34 = 11278717394082202658ULL;
_Bool arr_0 [20] [20] ;
unsigned long long int arr_1 [20] ;
short arr_2 [20] ;
signed char arr_3 [20] [20] [20] ;
unsigned short arr_4 [20] ;
int arr_5 [20] [20] [20] ;
signed char arr_6 [20] [20] [20] ;
unsigned short arr_7 [20] ;
int arr_8 [20] ;
unsigned int arr_9 [20] [20] ;
unsigned long long int arr_10 [20] [20] [20] ;
unsigned char arr_12 [15] [15] ;
unsigned long long int arr_13 [15] ;
unsigned long long int arr_19 [15] ;
long long int arr_20 [15] ;
unsigned long long int arr_22 [15] ;
_Bool arr_25 [15] ;
int arr_11 [20] [20] ;
signed char arr_14 [15] [15] ;
int arr_15 [15] ;
signed char arr_16 [15] ;
unsigned int arr_23 [15] [15] ;
unsigned short arr_26 [15] ;
unsigned int arr_27 [15] [15] [15] ;
unsigned char arr_28 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 15958595149228777510ULL : 7655075084705650613ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (short)12777 : (short)-15061;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (signed char)57;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = (unsigned short)9007;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = -1326667490;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (signed char)75 : (signed char)-42;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (unsigned short)16958 : (unsigned short)52955;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_8 [i_0] = -63451933;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_9 [i_0] [i_1] = (i_0 % 2 == 0) ? 3473115466U : 249698089U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 9293402678991123963ULL : 8129751416415878213ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_12 [i_0] [i_1] = (unsigned char)15;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_13 [i_0] = 9299867383489184003ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_19 [i_0] = 9890525971018571280ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_20 [i_0] = -1859440517486669661LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_22 [i_0] = 5303020963475234641ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_25 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_11 [i_0] [i_1] = (i_0 % 2 == 0) ? -1234150461 : -371143299;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_14 [i_0] [i_1] = (signed char)66;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_15 [i_0] = 2091242034;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_16 [i_0] = (signed char)7;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_23 [i_0] [i_1] = 226109102U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_26 [i_0] = (unsigned short)64851;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_27 [i_0] [i_1] [i_2] = 2673226261U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_28 [i_0] = (unsigned char)105;
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
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_23 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_26 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                hash(&seed, arr_27 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_28 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
