#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)19;
unsigned char var_1 = (unsigned char)8;
unsigned char var_2 = (unsigned char)163;
unsigned char var_4 = (unsigned char)205;
unsigned char var_5 = (unsigned char)244;
unsigned char var_6 = (unsigned char)2;
unsigned char var_7 = (unsigned char)240;
unsigned char var_10 = (unsigned char)47;
unsigned char var_11 = (unsigned char)80;
unsigned char var_13 = (unsigned char)41;
unsigned char var_14 = (unsigned char)102;
unsigned char var_15 = (unsigned char)94;
unsigned char var_16 = (unsigned char)66;
int zero = 0;
unsigned char var_19 = (unsigned char)236;
unsigned char var_20 = (unsigned char)127;
unsigned char var_21 = (unsigned char)15;
unsigned char var_22 = (unsigned char)55;
unsigned char var_23 = (unsigned char)58;
unsigned char var_24 = (unsigned char)4;
unsigned char var_25 = (unsigned char)40;
unsigned char var_26 = (unsigned char)182;
unsigned char var_27 = (unsigned char)175;
unsigned char var_28 = (unsigned char)2;
unsigned char arr_2 [21] [21] ;
unsigned char arr_3 [21] ;
unsigned char arr_5 [22] ;
unsigned char arr_6 [22] ;
unsigned char arr_7 [22] [22] [22] ;
unsigned char arr_8 [22] [22] ;
unsigned char arr_9 [22] [22] [22] ;
unsigned char arr_11 [22] ;
unsigned char arr_4 [21] ;
unsigned char arr_13 [22] ;
unsigned char arr_14 [22] [22] ;
unsigned char arr_15 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)17;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = (unsigned char)26;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = (unsigned char)133;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_6 [i_0] = (unsigned char)16;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (unsigned char)148;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_8 [i_0] [i_1] = (unsigned char)10;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (unsigned char)232;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_11 [i_0] = (unsigned char)3;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (unsigned char)33 : (unsigned char)145;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? (unsigned char)176 : (unsigned char)128;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_14 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)174 : (unsigned char)150;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_15 [i_0] = (unsigned char)207;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_15 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
