#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3580543822U;
long long int var_1 = 1881762043582241949LL;
signed char var_4 = (signed char)105;
_Bool var_6 = (_Bool)0;
long long int var_7 = 7405625252188579166LL;
unsigned long long int var_8 = 16733607084208713978ULL;
signed char var_9 = (signed char)-2;
unsigned char var_10 = (unsigned char)159;
signed char var_11 = (signed char)43;
unsigned short var_12 = (unsigned short)44337;
int zero = 0;
unsigned int var_14 = 3426563319U;
unsigned char var_15 = (unsigned char)128;
long long int var_16 = 3906054604966815808LL;
short var_17 = (short)-586;
signed char var_18 = (signed char)-43;
unsigned char var_19 = (unsigned char)78;
unsigned long long int var_20 = 73765672714974211ULL;
signed char var_21 = (signed char)-120;
unsigned char var_22 = (unsigned char)218;
unsigned char var_23 = (unsigned char)119;
_Bool var_24 = (_Bool)1;
unsigned long long int var_25 = 1533247214619454468ULL;
unsigned long long int arr_0 [13] ;
signed char arr_1 [13] ;
short arr_6 [13] [13] ;
short arr_7 [13] [13] ;
unsigned char arr_12 [12] ;
signed char arr_15 [12] ;
short arr_3 [13] [13] ;
short arr_4 [13] ;
long long int arr_5 [13] [13] ;
unsigned short arr_13 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = 91304923524355588ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (signed char)105;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_6 [i_0] [i_1] = (short)17851;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_7 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)32745 : (short)-21816;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? (unsigned char)147 : (unsigned char)185;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_15 [i_0] = (signed char)89;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_3 [i_0] [i_1] = (short)-17928;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = (short)5999;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_5 [i_0] [i_1] = -83041796246638556LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? (unsigned short)63212 : (unsigned short)37030;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_13 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
