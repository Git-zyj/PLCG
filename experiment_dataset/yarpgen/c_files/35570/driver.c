#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)13147;
unsigned short var_3 = (unsigned short)7548;
int var_4 = -584146899;
unsigned short var_7 = (unsigned short)42929;
long long int var_8 = -4448046321129088939LL;
short var_9 = (short)17987;
short var_12 = (short)19222;
int var_13 = -1780550953;
long long int var_14 = -6789478472661592342LL;
long long int var_16 = -8025485755536332673LL;
int zero = 0;
int var_17 = -443720471;
unsigned short var_18 = (unsigned short)322;
unsigned short var_19 = (unsigned short)15181;
unsigned short var_20 = (unsigned short)31374;
int var_21 = -2048459241;
int var_22 = 1748913841;
_Bool var_23 = (_Bool)1;
long long int var_24 = -5839757206175275788LL;
unsigned short var_25 = (unsigned short)24224;
int arr_0 [23] [23] ;
unsigned long long int arr_1 [23] ;
short arr_2 [23] [23] [23] ;
long long int arr_3 [23] ;
short arr_6 [23] [23] ;
unsigned short arr_4 [23] [23] ;
unsigned long long int arr_7 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = (i_0 % 2 == 0) ? -294253551 : -1798739000;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 16321485500621720446ULL : 15606660514191123736ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (short)-20882 : (short)32723;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = 6364522449006998960LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_6 [i_0] [i_1] = (short)3633;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)58499 : (unsigned short)54788;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_7 [i_0] [i_1] = (i_0 % 2 == 0) ? 11510856949862707343ULL : 1949457078215116870ULL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
