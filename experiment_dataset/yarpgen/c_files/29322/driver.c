#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2382830733U;
short var_1 = (short)22653;
unsigned short var_4 = (unsigned short)6883;
signed char var_5 = (signed char)29;
unsigned long long int var_6 = 9625065513994028308ULL;
unsigned long long int var_7 = 5475060539104349296ULL;
unsigned short var_8 = (unsigned short)50695;
unsigned long long int var_9 = 13663021089473442948ULL;
short var_10 = (short)27911;
unsigned long long int var_11 = 867204963718678675ULL;
signed char var_12 = (signed char)77;
signed char var_13 = (signed char)109;
int zero = 0;
_Bool var_15 = (_Bool)0;
signed char var_16 = (signed char)-113;
int var_17 = 1143392655;
signed char var_18 = (signed char)97;
short var_19 = (short)-19921;
unsigned long long int arr_0 [25] ;
_Bool arr_2 [25] ;
long long int arr_3 [25] [25] ;
int arr_4 [25] [25] [25] ;
unsigned int arr_5 [25] ;
signed char arr_6 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = 13290505512891266875ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_3 [i_0] [i_1] = -6306637465532709768LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? -1724269840 : 162904899;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 1652759644U : 2009638693U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (signed char)8 : (signed char)-49;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                hash(&seed, arr_4 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
