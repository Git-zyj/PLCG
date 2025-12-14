#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4361736243255198055ULL;
short var_1 = (short)-27045;
_Bool var_2 = (_Bool)0;
signed char var_3 = (signed char)-60;
signed char var_4 = (signed char)-6;
unsigned short var_5 = (unsigned short)6252;
_Bool var_6 = (_Bool)0;
_Bool var_7 = (_Bool)0;
_Bool var_9 = (_Bool)1;
signed char var_10 = (signed char)-58;
unsigned int var_12 = 1074035293U;
unsigned int var_13 = 775100036U;
int zero = 0;
unsigned long long int var_15 = 4815721757932665012ULL;
unsigned char var_16 = (unsigned char)138;
unsigned int var_17 = 1134093970U;
unsigned int var_18 = 4208610699U;
_Bool var_19 = (_Bool)1;
long long int arr_0 [13] [13] ;
unsigned char arr_2 [13] ;
unsigned char arr_4 [13] ;
unsigned short arr_5 [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = -5885769997708270655LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned char)224 : (unsigned char)181;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (unsigned char)43 : (unsigned char)67;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned short)21677 : (unsigned short)9319;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                hash(&seed, arr_5 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
