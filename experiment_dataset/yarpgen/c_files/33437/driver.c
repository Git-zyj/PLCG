#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 355533786U;
unsigned int var_3 = 4079204590U;
long long int var_5 = 2887756282354773280LL;
short var_7 = (short)-6374;
short var_8 = (short)12519;
unsigned short var_10 = (unsigned short)42267;
unsigned long long int var_11 = 2233822336564786220ULL;
unsigned long long int var_12 = 13894929501125379965ULL;
unsigned long long int var_13 = 6580828830492680216ULL;
int var_14 = -855232152;
unsigned int var_18 = 2668156622U;
int zero = 0;
unsigned long long int var_19 = 919744750776380665ULL;
unsigned short var_20 = (unsigned short)17981;
unsigned short arr_8 [11] [11] ;
unsigned long long int arr_9 [11] [11] ;
signed char arr_10 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_8 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)40047 : (unsigned short)2835;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_9 [i_0] [i_1] = (i_1 % 2 == 0) ? 6656442495848875980ULL : 9888377929440058560ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? (signed char)18 : (signed char)-121;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
