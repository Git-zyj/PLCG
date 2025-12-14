#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)24194;
unsigned char var_1 = (unsigned char)156;
short var_2 = (short)12674;
short var_3 = (short)-25460;
unsigned short var_4 = (unsigned short)10327;
int var_5 = -208190590;
unsigned int var_6 = 859190363U;
_Bool var_8 = (_Bool)0;
short var_9 = (short)-23831;
int zero = 0;
unsigned char var_10 = (unsigned char)134;
short var_11 = (short)-26784;
signed char var_12 = (signed char)-50;
unsigned char var_13 = (unsigned char)62;
unsigned char arr_3 [10] [10] ;
signed char arr_5 [10] ;
unsigned long long int arr_9 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)14;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = (signed char)57;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? 5739636974725329407ULL : 15776976822812894011ULL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
