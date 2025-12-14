#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3164926381U;
_Bool var_2 = (_Bool)0;
long long int var_3 = 8257456022290293392LL;
unsigned short var_4 = (unsigned short)7526;
long long int var_5 = 6444474234184215998LL;
unsigned short var_6 = (unsigned short)15970;
short var_7 = (short)-3959;
unsigned char var_8 = (unsigned char)150;
signed char var_9 = (signed char)-66;
unsigned long long int var_10 = 8308369829766763642ULL;
unsigned long long int var_11 = 14003762554232545814ULL;
unsigned short var_12 = (unsigned short)53498;
int zero = 0;
long long int var_14 = -3663357841057448065LL;
unsigned char var_15 = (unsigned char)175;
unsigned int var_16 = 5265140U;
signed char var_17 = (signed char)-34;
_Bool var_18 = (_Bool)1;
unsigned long long int arr_0 [22] ;
unsigned short arr_1 [22] ;
unsigned short arr_2 [22] [22] ;
int arr_7 [23] [23] ;
long long int arr_3 [22] ;
signed char arr_4 [22] ;
long long int arr_5 [22] [22] ;
short arr_6 [22] ;
long long int arr_10 [23] ;
unsigned char arr_11 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = 12390378179222470135ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (unsigned short)9540;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)28486;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_7 [i_0] [i_1] = -131251227;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 1342003304102148566LL : 4062261045226456011LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (signed char)-119 : (signed char)-28;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? -6930454668024326490LL : -364779024316180866LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (short)25449 : (short)4767;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_10 [i_0] = 3816340010618502726LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_11 [i_0] [i_1] = (unsigned char)73;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
