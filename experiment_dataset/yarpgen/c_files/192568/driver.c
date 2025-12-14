#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)184;
unsigned char var_1 = (unsigned char)148;
unsigned char var_2 = (unsigned char)152;
unsigned char var_6 = (unsigned char)10;
unsigned char var_7 = (unsigned char)59;
unsigned char var_8 = (unsigned char)138;
unsigned char var_9 = (unsigned char)187;
unsigned char var_14 = (unsigned char)79;
unsigned char var_15 = (unsigned char)4;
unsigned char var_16 = (unsigned char)207;
unsigned char var_17 = (unsigned char)210;
unsigned char var_18 = (unsigned char)6;
int zero = 0;
unsigned char var_19 = (unsigned char)91;
unsigned char var_20 = (unsigned char)189;
unsigned char var_21 = (unsigned char)193;
unsigned char var_22 = (unsigned char)10;
unsigned char var_23 = (unsigned char)232;
unsigned char var_24 = (unsigned char)10;
unsigned char var_25 = (unsigned char)81;
unsigned char var_26 = (unsigned char)129;
unsigned char var_27 = (unsigned char)47;
unsigned char var_28 = (unsigned char)32;
unsigned char var_29 = (unsigned char)72;
unsigned char var_30 = (unsigned char)208;
unsigned char var_31 = (unsigned char)17;
unsigned char var_32 = (unsigned char)136;
unsigned char var_33 = (unsigned char)189;
unsigned char arr_0 [13] [13] ;
unsigned char arr_2 [13] [13] [13] ;
unsigned char arr_3 [13] [13] ;
unsigned char arr_4 [20] ;
unsigned char arr_5 [20] [20] ;
unsigned char arr_6 [20] [20] ;
unsigned char arr_7 [20] ;
unsigned char arr_8 [20] [20] [20] ;
unsigned char arr_9 [20] [20] [20] ;
unsigned char arr_10 [20] [20] [20] [20] ;
unsigned char arr_12 [20] [20] [20] ;
unsigned char arr_18 [21] ;
unsigned char arr_20 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)71;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned char)150 : (unsigned char)118;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)9;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = (unsigned char)2;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned char)97;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned char)90;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_7 [i_0] = (unsigned char)209;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (unsigned char)179;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned char)239 : (unsigned char)168;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (unsigned char)137;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned char)36 : (unsigned char)227;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_18 [i_0] = (unsigned char)8;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_20 [i_0] [i_1] = (unsigned char)108;
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
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
