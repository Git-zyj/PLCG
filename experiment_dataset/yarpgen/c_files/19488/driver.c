#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned long long int var_1 = 18155941339669108428ULL;
signed char var_2 = (signed char)104;
signed char var_3 = (signed char)-71;
unsigned char var_4 = (unsigned char)246;
signed char var_5 = (signed char)-56;
long long int var_6 = 5737932541838688771LL;
unsigned int var_7 = 537764310U;
unsigned int var_8 = 3738236600U;
short var_10 = (short)20025;
int zero = 0;
unsigned char var_11 = (unsigned char)225;
signed char var_12 = (signed char)-39;
unsigned long long int var_13 = 1666482219156681587ULL;
signed char var_14 = (signed char)-50;
unsigned int var_15 = 3611760872U;
unsigned char var_16 = (unsigned char)134;
short var_17 = (short)-6147;
int var_18 = -747713369;
_Bool var_19 = (_Bool)0;
short var_20 = (short)-6563;
unsigned int var_21 = 322996511U;
int var_22 = 1206908760;
signed char arr_0 [13] ;
unsigned long long int arr_1 [13] ;
long long int arr_3 [25] [25] ;
signed char arr_4 [25] ;
unsigned char arr_5 [25] [25] [25] ;
unsigned char arr_6 [25] [25] ;
unsigned int arr_12 [21] ;
short arr_13 [21] ;
unsigned int arr_2 [13] ;
unsigned int arr_9 [18] ;
_Bool arr_14 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (signed char)-101;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = 9418073912491225333ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_3 [i_0] [i_1] = -1673164814743637796LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = (signed char)53;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (unsigned char)101;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned char)33;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_12 [i_0] = 2521336022U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_13 [i_0] = (short)-10387;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 1490579170U : 2799532663U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? 1816812110U : 2393207162U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
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
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_14 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
