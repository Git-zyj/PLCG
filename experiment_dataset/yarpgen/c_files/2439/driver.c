#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)25403;
short var_1 = (short)-30965;
int var_2 = -1872783371;
unsigned char var_3 = (unsigned char)21;
long long int var_7 = -168684029283159585LL;
unsigned short var_8 = (unsigned short)17073;
unsigned char var_10 = (unsigned char)245;
unsigned int var_13 = 1854251245U;
int zero = 0;
unsigned char var_15 = (unsigned char)43;
short var_16 = (short)8700;
unsigned int var_17 = 3741236596U;
short var_18 = (short)28803;
unsigned short var_19 = (unsigned short)32306;
unsigned short var_20 = (unsigned short)10310;
unsigned long long int var_21 = 7535346591156617418ULL;
int var_22 = -32098136;
int var_23 = -1093920321;
short var_24 = (short)12117;
unsigned short var_25 = (unsigned short)2524;
unsigned int arr_0 [19] ;
unsigned int arr_1 [19] ;
long long int arr_5 [10] ;
unsigned long long int arr_7 [10] ;
unsigned short arr_8 [10] [10] ;
unsigned int arr_2 [19] ;
unsigned short arr_3 [19] ;
unsigned short arr_4 [19] ;
unsigned long long int arr_12 [10] [10] ;
short arr_15 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = 1567978678U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = 2496953732U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = -3517654274198035377LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_7 [i_0] = 9432590130139876617ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_8 [i_0] [i_1] = (unsigned short)15718;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = 1789264669U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = (unsigned short)39617;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = (unsigned short)35907;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_12 [i_0] [i_1] = 16312987642149615497ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_15 [i_0] = (short)9302;
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
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_15 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
