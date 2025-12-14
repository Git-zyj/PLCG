#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_6 = (_Bool)0;
unsigned char var_7 = (unsigned char)94;
unsigned long long int var_8 = 8986034287182120002ULL;
_Bool var_9 = (_Bool)0;
_Bool var_11 = (_Bool)1;
_Bool var_14 = (_Bool)0;
unsigned char var_15 = (unsigned char)203;
_Bool var_16 = (_Bool)0;
long long int var_19 = 8728258919642483280LL;
int zero = 0;
unsigned char var_20 = (unsigned char)203;
unsigned long long int var_21 = 5947662614568750045ULL;
unsigned long long int var_22 = 15795322837294698394ULL;
unsigned short var_23 = (unsigned short)25788;
unsigned long long int var_24 = 8887477937655241630ULL;
int var_25 = 1827492991;
int arr_1 [24] [24] ;
unsigned long long int arr_2 [24] ;
unsigned long long int arr_6 [15] ;
long long int arr_7 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = 142989238;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = 4331495423165691952ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_6 [i_0] = 903975959349369862ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_7 [i_0] [i_1] = 6196057162850373922LL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
