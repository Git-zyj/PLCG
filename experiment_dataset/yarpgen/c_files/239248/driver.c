#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 2016427508448561607ULL;
unsigned char var_7 = (unsigned char)81;
unsigned int var_11 = 1401665501U;
signed char var_14 = (signed char)-34;
unsigned char var_15 = (unsigned char)141;
unsigned int var_16 = 2724718861U;
int zero = 0;
unsigned int var_17 = 1153147107U;
unsigned long long int var_18 = 8628945377502300476ULL;
short var_19 = (short)-8203;
signed char var_20 = (signed char)45;
unsigned long long int var_21 = 9377709383882195241ULL;
unsigned long long int var_22 = 10382931831254457533ULL;
int arr_0 [21] ;
_Bool arr_3 [17] ;
signed char arr_4 [17] [17] ;
unsigned char arr_2 [21] ;
short arr_5 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = -709006525;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_4 [i_0] [i_1] = (signed char)33;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned char)59 : (unsigned char)68;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = (short)-24171;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
