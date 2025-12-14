#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)28;
unsigned char var_1 = (unsigned char)104;
unsigned char var_4 = (unsigned char)52;
unsigned char var_7 = (unsigned char)99;
unsigned char var_8 = (unsigned char)205;
unsigned char var_9 = (unsigned char)83;
unsigned char var_13 = (unsigned char)7;
unsigned char var_14 = (unsigned char)207;
int zero = 0;
unsigned char var_15 = (unsigned char)40;
unsigned char var_16 = (unsigned char)241;
unsigned char var_17 = (unsigned char)17;
unsigned char var_18 = (unsigned char)18;
unsigned char var_19 = (unsigned char)175;
unsigned char var_20 = (unsigned char)124;
unsigned char var_21 = (unsigned char)106;
unsigned char arr_0 [24] [24] ;
unsigned char arr_1 [24] ;
unsigned char arr_4 [23] [23] ;
unsigned char arr_7 [14] [14] ;
unsigned char arr_8 [14] ;
unsigned char arr_12 [14] ;
unsigned char arr_6 [23] ;
unsigned char arr_10 [14] ;
unsigned char arr_13 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)111;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (unsigned char)71;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)222;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned char)162;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_8 [i_0] = (unsigned char)161;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_12 [i_0] = (unsigned char)95;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = (unsigned char)225;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_10 [i_0] = (unsigned char)169;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_13 [i_0] = (unsigned char)91;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_13 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
