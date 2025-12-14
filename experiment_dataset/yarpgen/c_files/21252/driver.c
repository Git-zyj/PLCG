#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3989386125184749904LL;
short var_3 = (short)31696;
unsigned int var_5 = 3126637083U;
unsigned long long int var_8 = 18369139023980555363ULL;
long long int var_9 = 373096656975286708LL;
unsigned char var_13 = (unsigned char)81;
unsigned long long int var_14 = 458372461595840890ULL;
int var_17 = -1386357382;
signed char var_18 = (signed char)-1;
int zero = 0;
int var_20 = -982985289;
short var_21 = (short)9543;
unsigned char var_22 = (unsigned char)97;
unsigned long long int var_23 = 14907443892173702144ULL;
short var_24 = (short)12130;
long long int var_25 = -5132374662459747634LL;
short var_26 = (short)-27988;
int var_27 = 940340141;
int arr_0 [17] ;
long long int arr_1 [17] [17] ;
int arr_3 [14] ;
long long int arr_4 [14] ;
unsigned char arr_8 [15] [15] ;
unsigned long long int arr_11 [22] [22] ;
unsigned char arr_13 [22] [22] ;
long long int arr_15 [11] ;
unsigned int arr_2 [17] ;
short arr_6 [14] ;
signed char arr_9 [15] [15] ;
unsigned char arr_10 [15] ;
signed char arr_14 [22] ;
long long int arr_19 [10] ;
long long int arr_20 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = 106460116;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_1 [i_0] [i_1] = -6883263270878640646LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = 62134430;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = -7085271674405579444LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_8 [i_0] [i_1] = (unsigned char)99;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_11 [i_0] [i_1] = (i_0 % 2 == 0) ? 8320491117793186934ULL : 12595755998958292128ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_13 [i_0] [i_1] = (unsigned char)23;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_15 [i_0] = -8248420090014874507LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = 2172149310U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_6 [i_0] = (short)25390;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_9 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)37 : (signed char)-23;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? (unsigned char)76 : (unsigned char)96;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? (signed char)-95 : (signed char)16;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_19 [i_0] = 6459434139088253035LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_20 [i_0] = -4456844784993347382LL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_19 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_20 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
