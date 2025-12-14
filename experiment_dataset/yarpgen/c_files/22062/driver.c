#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)45;
unsigned char var_3 = (unsigned char)214;
unsigned char var_5 = (unsigned char)190;
unsigned char var_6 = (unsigned char)99;
unsigned char var_7 = (unsigned char)110;
short var_8 = (short)4903;
unsigned char var_9 = (unsigned char)221;
unsigned char var_10 = (unsigned char)88;
unsigned char var_11 = (unsigned char)92;
unsigned long long int var_13 = 18351108185075230962ULL;
int zero = 0;
unsigned int var_14 = 86635187U;
unsigned char var_15 = (unsigned char)249;
unsigned long long int var_16 = 14880721203741289860ULL;
unsigned long long int var_17 = 11433696834765374620ULL;
unsigned char var_18 = (unsigned char)187;
unsigned long long int var_19 = 11034463794458599964ULL;
unsigned char arr_0 [23] ;
unsigned char arr_1 [23] ;
unsigned int arr_2 [23] [23] ;
unsigned long long int arr_5 [23] [23] [23] ;
unsigned long long int arr_6 [23] [23] ;
unsigned char arr_7 [23] [23] [23] ;
unsigned char arr_8 [23] ;
unsigned long long int arr_9 [23] [23] [23] ;
unsigned char arr_11 [23] [23] [23] ;
unsigned long long int arr_12 [23] [23] ;
unsigned long long int arr_15 [22] ;
unsigned char arr_16 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (unsigned char)162;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (unsigned char)229;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_2 [i_0] [i_1] = (i_0 % 2 == 0) ? 3170781116U : 3005019377U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 12299654451244523579ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_6 [i_0] [i_1] = 1018025195241203504ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (unsigned char)16;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (unsigned char)120 : (unsigned char)96;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = 7205703721220249982ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned char)53 : (unsigned char)19;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_12 [i_0] [i_1] = (i_0 % 2 == 0) ? 537773220602533245ULL : 15155207328446353784ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_15 [i_0] = 11000238502009340988ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_16 [i_0] = (unsigned char)37;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                hash(&seed, arr_11 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_16 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
