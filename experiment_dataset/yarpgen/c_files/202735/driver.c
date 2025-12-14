#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)46410;
unsigned long long int var_5 = 2136686055449369862ULL;
unsigned char var_6 = (unsigned char)142;
unsigned long long int var_9 = 10868807559738944295ULL;
unsigned long long int var_10 = 15691087897066392557ULL;
signed char var_13 = (signed char)99;
unsigned char var_15 = (unsigned char)174;
unsigned long long int var_16 = 17612643704791790551ULL;
short var_17 = (short)-12461;
int zero = 0;
long long int var_18 = -6853920086560036357LL;
unsigned long long int var_19 = 15337826269998549180ULL;
unsigned short var_20 = (unsigned short)5949;
unsigned long long int var_21 = 13576422772944543786ULL;
unsigned short var_22 = (unsigned short)28843;
unsigned long long int var_23 = 4732309062963520714ULL;
long long int var_24 = -5083331535605212773LL;
_Bool arr_3 [21] ;
_Bool arr_5 [21] [21] ;
unsigned short arr_7 [21] [21] ;
unsigned short arr_8 [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_5 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned short)57978;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (unsigned short)16483;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                hash(&seed, arr_8 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
