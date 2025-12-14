#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)82;
unsigned char var_3 = (unsigned char)214;
unsigned short var_5 = (unsigned short)15670;
short var_7 = (short)16443;
_Bool var_9 = (_Bool)0;
signed char var_10 = (signed char)-46;
signed char var_11 = (signed char)26;
unsigned long long int var_12 = 11115143194898971161ULL;
int zero = 0;
unsigned short var_13 = (unsigned short)26722;
unsigned short var_14 = (unsigned short)64621;
unsigned int var_15 = 3778879233U;
_Bool var_16 = (_Bool)0;
signed char var_17 = (signed char)-95;
unsigned short var_18 = (unsigned short)34900;
signed char arr_1 [16] [16] ;
int arr_2 [16] [16] ;
int arr_5 [15] ;
_Bool arr_7 [15] ;
_Bool arr_4 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)41;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_2 [i_0] [i_1] = -1755653593;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = 272947861;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_7 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
