#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1310495637U;
long long int var_3 = 8541936282431364763LL;
unsigned long long int var_4 = 10537540864286569447ULL;
int var_7 = 879204056;
unsigned int var_11 = 1080092980U;
int var_13 = -1939337842;
signed char var_15 = (signed char)3;
unsigned short var_16 = (unsigned short)24238;
int zero = 0;
unsigned long long int var_17 = 5684209212147504338ULL;
long long int var_18 = -4374479091865423235LL;
long long int var_19 = -2884106630635058528LL;
unsigned short var_20 = (unsigned short)43839;
unsigned char arr_0 [11] ;
unsigned int arr_2 [11] ;
long long int arr_3 [11] ;
unsigned int arr_4 [11] [11] ;
unsigned int arr_5 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (unsigned char)96;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = 420402135U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? -4841482834921450115LL : -6575685092767740336LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? 3019908018U : 3954416167U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? 2552036450U : 113391828U;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
