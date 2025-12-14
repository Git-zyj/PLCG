#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
signed char var_5 = (signed char)-44;
unsigned long long int var_11 = 14050994521380759488ULL;
short var_12 = (short)-12562;
unsigned char var_13 = (unsigned char)195;
long long int var_14 = 8282909929504155276LL;
signed char var_17 = (signed char)72;
int zero = 0;
unsigned long long int var_19 = 8959746115196371105ULL;
unsigned char var_20 = (unsigned char)77;
signed char var_21 = (signed char)31;
unsigned int var_22 = 399361373U;
_Bool var_23 = (_Bool)0;
long long int var_24 = 738313392875012352LL;
unsigned long long int var_25 = 17712745537179075683ULL;
long long int var_26 = 7653688309964994194LL;
unsigned long long int var_27 = 9250085539548359961ULL;
unsigned long long int var_28 = 13293344290870127022ULL;
unsigned int arr_0 [23] [23] ;
short arr_1 [23] ;
unsigned int arr_4 [23] ;
unsigned char arr_5 [23] [23] ;
long long int arr_2 [23] ;
unsigned int arr_6 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = 1665696009U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (short)-19413;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = 4124850962U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned char)217;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = 4486252823529206690LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_6 [i_0] [i_1] = 1996067833U;
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
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
