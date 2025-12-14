#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)9;
unsigned char var_1 = (unsigned char)87;
int var_5 = -927123081;
unsigned long long int var_6 = 7926155122834493372ULL;
int var_8 = 1993953071;
long long int var_9 = -58755021624346260LL;
int zero = 0;
signed char var_11 = (signed char)-116;
unsigned long long int var_12 = 4307785818089201567ULL;
signed char var_13 = (signed char)-23;
_Bool var_14 = (_Bool)0;
unsigned short var_15 = (unsigned short)43451;
_Bool var_16 = (_Bool)1;
int var_17 = -1650514043;
unsigned char var_18 = (unsigned char)137;
unsigned char arr_2 [13] ;
unsigned short arr_6 [13] ;
unsigned short arr_8 [13] [13] [13] ;
int arr_10 [13] ;
unsigned char arr_11 [13] [13] [13] ;
_Bool arr_3 [13] ;
unsigned long long int arr_4 [13] ;
short arr_5 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (unsigned char)193;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_6 [i_0] = (unsigned short)55757;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (unsigned short)64197;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_10 [i_0] = 455394175;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (unsigned char)63;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = 1432395886296572887ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_5 [i_0] = (short)28933;
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
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
