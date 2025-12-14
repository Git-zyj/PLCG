#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-19;
signed char var_3 = (signed char)-80;
signed char var_4 = (signed char)70;
signed char var_5 = (signed char)101;
signed char var_6 = (signed char)-65;
signed char var_7 = (signed char)93;
signed char var_9 = (signed char)-74;
signed char var_10 = (signed char)-17;
signed char var_11 = (signed char)-8;
signed char var_13 = (signed char)2;
int zero = 0;
signed char var_14 = (signed char)95;
signed char var_15 = (signed char)-45;
signed char var_16 = (signed char)50;
signed char var_17 = (signed char)38;
signed char var_18 = (signed char)78;
signed char arr_0 [18] [18] ;
signed char arr_1 [18] ;
signed char arr_3 [18] ;
signed char arr_6 [18] ;
signed char arr_8 [23] ;
signed char arr_9 [23] ;
signed char arr_11 [23] ;
signed char arr_7 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_0 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)-23 : (signed char)-123;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (signed char)16 : (signed char)-30;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (signed char)-57 : (signed char)59;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_6 [i_0] = (signed char)-101;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_8 [i_0] = (signed char)-50;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_9 [i_0] = (signed char)-37;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? (signed char)54 : (signed char)62;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_7 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)-61 : (signed char)-51;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
