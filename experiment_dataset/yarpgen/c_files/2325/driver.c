#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)1718;
unsigned char var_3 = (unsigned char)162;
int zero = 0;
long long int var_10 = -1259165286769882326LL;
long long int var_11 = 6561358991482426643LL;
unsigned short var_12 = (unsigned short)13288;
int var_13 = -504506933;
signed char var_14 = (signed char)95;
unsigned short var_15 = (unsigned short)1979;
unsigned short arr_1 [17] ;
unsigned char arr_2 [17] [17] ;
long long int arr_5 [17] ;
unsigned int arr_6 [17] ;
long long int arr_3 [17] ;
short arr_4 [17] ;
unsigned short arr_7 [17] ;
long long int arr_8 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (unsigned short)6547;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)178;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = -3615235264301265697LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_6 [i_0] = 2917862022U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = 8438430546249201307LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = (short)-14162;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_7 [i_0] = (unsigned short)56693;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_8 [i_0] = -6102145038801212542LL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
