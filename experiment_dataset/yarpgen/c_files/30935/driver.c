#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5341574202104283846LL;
long long int var_1 = -835403044562307598LL;
int var_2 = -233723476;
short var_3 = (short)-1036;
unsigned short var_6 = (unsigned short)13235;
_Bool var_8 = (_Bool)0;
signed char var_9 = (signed char)105;
unsigned short var_10 = (unsigned short)60718;
long long int var_11 = 4457092155319626577LL;
signed char var_12 = (signed char)-80;
unsigned short var_13 = (unsigned short)1940;
short var_14 = (short)-17260;
int zero = 0;
short var_15 = (short)7865;
short var_16 = (short)9352;
unsigned short var_17 = (unsigned short)38051;
unsigned short var_18 = (unsigned short)38890;
short var_19 = (short)24984;
unsigned short var_20 = (unsigned short)40401;
unsigned long long int var_21 = 2208451721114538037ULL;
long long int var_22 = 3515566000755609059LL;
unsigned short var_23 = (unsigned short)22203;
signed char arr_1 [21] ;
long long int arr_2 [21] [21] ;
unsigned char arr_3 [21] ;
signed char arr_5 [21] ;
signed char arr_6 [21] [21] [21] ;
signed char arr_9 [21] [21] ;
unsigned long long int arr_10 [21] [21] [21] ;
signed char arr_12 [21] [21] [21] ;
unsigned int arr_13 [11] ;
_Bool arr_8 [21] ;
long long int arr_15 [11] ;
unsigned short arr_16 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (signed char)20;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_2 [i_0] [i_1] = -6674422599371757405LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = (unsigned char)114;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_5 [i_0] = (signed char)-13;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (signed char)-113;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_9 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)-37 : (signed char)-33;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = 10244442307297353578ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (signed char)64 : (signed char)-78;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_13 [i_0] = 1471295346U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_15 [i_0] = -6680277162210203266LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_16 [i_0] = (unsigned short)23507;
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
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_16 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
