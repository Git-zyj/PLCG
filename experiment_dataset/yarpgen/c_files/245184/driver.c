#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -9091386294257921424LL;
int var_4 = -2101864614;
int var_5 = -2124687680;
unsigned short var_7 = (unsigned short)33440;
unsigned int var_9 = 2987411121U;
_Bool var_10 = (_Bool)0;
unsigned int var_11 = 302851110U;
int var_12 = -2131841325;
signed char var_13 = (signed char)-50;
int zero = 0;
signed char var_15 = (signed char)-112;
_Bool var_16 = (_Bool)1;
short var_17 = (short)-32041;
signed char var_18 = (signed char)-85;
unsigned char var_19 = (unsigned char)71;
unsigned short var_20 = (unsigned short)62351;
long long int var_21 = 3275131026393085365LL;
signed char var_22 = (signed char)78;
long long int arr_0 [21] [21] ;
long long int arr_1 [21] ;
signed char arr_2 [21] [21] ;
int arr_4 [22] ;
unsigned char arr_5 [22] [22] ;
unsigned char arr_6 [22] [22] ;
int arr_9 [19] ;
signed char arr_3 [21] ;
long long int arr_10 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_0 [i_0] [i_1] = 3973371402574382029LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 8379253878475442907LL : -1708789144183881042LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)-4 : (signed char)104;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = 2041152320;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned char)152;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned char)247;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_9 [i_0] = 1387074802;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (signed char)-9 : (signed char)7;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? -8248588312630608233LL : 6877737027833013045LL;
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
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
