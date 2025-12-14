#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1924478108870613984LL;
unsigned int var_1 = 4258010685U;
unsigned char var_2 = (unsigned char)88;
signed char var_3 = (signed char)50;
_Bool var_4 = (_Bool)0;
signed char var_6 = (signed char)87;
signed char var_7 = (signed char)65;
short var_8 = (short)16924;
unsigned int var_9 = 1002990262U;
int zero = 0;
long long int var_10 = -4245074044771580676LL;
unsigned long long int var_11 = 7316557760859529886ULL;
unsigned char var_12 = (unsigned char)165;
unsigned long long int var_13 = 17066662719087420404ULL;
unsigned long long int var_14 = 302499773427663602ULL;
int var_15 = -2068555675;
_Bool var_16 = (_Bool)1;
unsigned char var_17 = (unsigned char)62;
short var_18 = (short)12631;
short arr_0 [17] ;
long long int arr_1 [17] [17] ;
_Bool arr_2 [16] [16] ;
signed char arr_3 [16] ;
unsigned char arr_4 [16] [16] ;
unsigned char arr_5 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (short)-20909;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_1 [i_0] [i_1] = 4370060411733334237LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_2 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (signed char)26 : (signed char)-114;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)72 : (unsigned char)12;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (unsigned char)145 : (unsigned char)141;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
