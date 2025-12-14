#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 963632893U;
short var_4 = (short)2601;
unsigned char var_7 = (unsigned char)131;
unsigned long long int var_11 = 7180503350948314356ULL;
unsigned short var_12 = (unsigned short)9254;
_Bool var_13 = (_Bool)0;
short var_14 = (short)-8916;
signed char var_15 = (signed char)-112;
unsigned short var_18 = (unsigned short)10436;
int zero = 0;
unsigned long long int var_19 = 3617821598785553081ULL;
signed char var_20 = (signed char)90;
unsigned short var_21 = (unsigned short)61321;
int var_22 = 790551931;
_Bool arr_0 [23] ;
signed char arr_2 [23] ;
unsigned char arr_3 [23] ;
long long int arr_4 [23] [23] [23] ;
unsigned short arr_5 [23] [23] [23] [23] ;
unsigned long long int arr_7 [23] ;
unsigned short arr_8 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (signed char)52 : (signed char)21;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = (unsigned char)25;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 6624617285079306341LL : -4706959805595380362LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = (unsigned short)31160;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? 12850414028942693554ULL : 8017414594950463004ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_8 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)11842 : (unsigned short)43101;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
