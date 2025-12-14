#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-3207;
unsigned int var_1 = 3264906185U;
short var_2 = (short)16079;
short var_6 = (short)14728;
long long int var_7 = 3942958721631477346LL;
int var_10 = 163869739;
long long int var_13 = 416628402848803266LL;
signed char var_14 = (signed char)-26;
int var_15 = 1346774816;
int zero = 0;
short var_16 = (short)29786;
long long int var_17 = 6216244293886640236LL;
short var_18 = (short)-2760;
unsigned int var_19 = 4270524714U;
short var_20 = (short)3526;
short var_21 = (short)-2956;
unsigned char arr_0 [16] ;
_Bool arr_2 [16] [16] ;
short arr_10 [20] [20] [20] ;
unsigned char arr_12 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (unsigned char)174;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (short)-27946;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_12 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)195 : (unsigned char)134;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
