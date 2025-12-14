#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9052859208679832784ULL;
unsigned int var_2 = 4051114367U;
unsigned char var_4 = (unsigned char)45;
unsigned int var_5 = 3452679791U;
short var_7 = (short)30878;
unsigned char var_8 = (unsigned char)67;
unsigned long long int var_13 = 10654155198330431891ULL;
short var_15 = (short)14687;
signed char var_18 = (signed char)-73;
int zero = 0;
long long int var_19 = 8234350217488305078LL;
unsigned long long int var_20 = 6894224147580157831ULL;
int var_21 = -677461505;
unsigned int var_22 = 3194795937U;
unsigned char var_23 = (unsigned char)9;
unsigned short var_24 = (unsigned short)38267;
unsigned short var_25 = (unsigned short)51741;
int arr_0 [23] [23] ;
int arr_3 [23] ;
unsigned short arr_6 [11] ;
unsigned int arr_10 [11] ;
unsigned int arr_11 [11] ;
int arr_4 [23] [23] ;
int arr_13 [11] ;
unsigned int arr_14 [11] ;
long long int arr_15 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = -684774232;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 1874012003 : 1125220579;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_6 [i_0] = (unsigned short)1019;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_10 [i_0] = 527684400U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_11 [i_0] = 3407558424U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? -1233887860 : 1946664897;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_13 [i_0] = -369585258;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_14 [i_0] = 3034235976U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_15 [i_0] = 4947666308472224249LL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_15 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
