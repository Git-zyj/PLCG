#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)3535;
unsigned int var_1 = 1321917617U;
long long int var_2 = 2327296058110119763LL;
_Bool var_5 = (_Bool)0;
unsigned int var_6 = 531003302U;
_Bool var_8 = (_Bool)0;
unsigned short var_12 = (unsigned short)4043;
unsigned char var_13 = (unsigned char)165;
int zero = 0;
long long int var_14 = -659866778406291096LL;
short var_15 = (short)18313;
unsigned char var_16 = (unsigned char)196;
unsigned short var_17 = (unsigned short)35865;
unsigned char var_18 = (unsigned char)140;
unsigned long long int var_19 = 17784438386424947570ULL;
short var_20 = (short)-10780;
unsigned long long int arr_1 [11] ;
unsigned int arr_4 [24] ;
long long int arr_8 [25] ;
unsigned long long int arr_2 [11] [11] ;
long long int arr_5 [24] ;
int arr_6 [24] ;
unsigned long long int arr_7 [24] ;
long long int arr_10 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = 12105269951241432976ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = 1020206586U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_8 [i_0] = -1192342605933413798LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_2 [i_0] [i_1] = (i_0 % 2 == 0) ? 13256044835605924804ULL : 10870500438335859142ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = 6622876292257346999LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_6 [i_0] = -522531190;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_7 [i_0] = 18048499340941687835ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_10 [i_0] = -6345910301974447325LL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
