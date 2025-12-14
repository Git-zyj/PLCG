#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)17410;
_Bool var_1 = (_Bool)1;
short var_2 = (short)-11102;
signed char var_3 = (signed char)-111;
unsigned char var_4 = (unsigned char)228;
long long int var_6 = -6944523894610247228LL;
signed char var_7 = (signed char)16;
int var_8 = 841585571;
unsigned short var_9 = (unsigned short)3134;
int zero = 0;
unsigned long long int var_10 = 4986202164697885635ULL;
short var_11 = (short)5871;
short var_12 = (short)-4013;
unsigned int var_13 = 3246604388U;
unsigned short var_14 = (unsigned short)34993;
int var_15 = 2034068765;
unsigned int var_16 = 2976043899U;
unsigned short arr_0 [19] [19] ;
short arr_1 [19] ;
unsigned char arr_2 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_0 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)61966 : (unsigned short)38832;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (short)-14866 : (short)11692;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned char)2 : (unsigned char)12;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
