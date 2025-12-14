#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)193;
unsigned char var_3 = (unsigned char)148;
unsigned char var_4 = (unsigned char)167;
unsigned char var_7 = (unsigned char)177;
unsigned char var_9 = (unsigned char)179;
int zero = 0;
unsigned char var_13 = (unsigned char)115;
unsigned char var_14 = (unsigned char)202;
unsigned char var_15 = (unsigned char)58;
unsigned char var_16 = (unsigned char)37;
unsigned char var_17 = (unsigned char)247;
unsigned char var_18 = (unsigned char)12;
unsigned char var_19 = (unsigned char)61;
unsigned char var_20 = (unsigned char)238;
unsigned char arr_1 [13] ;
unsigned char arr_4 [13] [13] ;
unsigned char arr_5 [13] ;
unsigned char arr_3 [13] ;
unsigned char arr_8 [13] ;
unsigned char arr_9 [13] ;
unsigned char arr_10 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (unsigned char)152;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)61;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_5 [i_0] = (unsigned char)137;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (unsigned char)170 : (unsigned char)126;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (unsigned char)163 : (unsigned char)154;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? (unsigned char)120 : (unsigned char)186;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? (unsigned char)132 : (unsigned char)225;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
