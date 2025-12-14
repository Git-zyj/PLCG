#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)69;
unsigned short var_1 = (unsigned short)57575;
signed char var_2 = (signed char)83;
unsigned short var_3 = (unsigned short)59500;
unsigned short var_4 = (unsigned short)6951;
unsigned short var_5 = (unsigned short)23961;
unsigned short var_6 = (unsigned short)61238;
unsigned short var_7 = (unsigned short)47256;
signed char var_8 = (signed char)-71;
unsigned short var_9 = (unsigned short)26171;
unsigned short var_10 = (unsigned short)52684;
unsigned short var_11 = (unsigned short)61265;
unsigned short var_12 = (unsigned short)24850;
unsigned short var_13 = (unsigned short)18202;
unsigned short var_14 = (unsigned short)11565;
signed char var_15 = (signed char)11;
unsigned short var_16 = (unsigned short)29840;
unsigned short var_17 = (unsigned short)200;
int zero = 0;
unsigned short var_19 = (unsigned short)32811;
unsigned short var_20 = (unsigned short)29157;
signed char var_21 = (signed char)-6;
unsigned short var_22 = (unsigned short)29467;
unsigned short var_23 = (unsigned short)39160;
unsigned short var_24 = (unsigned short)42491;
signed char var_25 = (signed char)22;
signed char var_26 = (signed char)90;
signed char var_27 = (signed char)-90;
unsigned short var_28 = (unsigned short)44870;
signed char var_29 = (signed char)-75;
signed char var_30 = (signed char)120;
unsigned short var_31 = (unsigned short)58458;
signed char var_32 = (signed char)103;
signed char arr_0 [14] ;
unsigned short arr_1 [14] ;
unsigned short arr_3 [14] [14] [14] ;
unsigned short arr_6 [14] [14] ;
unsigned short arr_7 [14] ;
unsigned short arr_9 [14] [14] [14] [14] ;
unsigned short arr_10 [14] [14] [14] [14] ;
unsigned short arr_11 [14] [14] [14] ;
signed char arr_2 [14] ;
signed char arr_12 [14] [14] ;
signed char arr_13 [14] ;
unsigned short arr_16 [14] ;
unsigned short arr_23 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (signed char)43;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (unsigned short)24071;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (unsigned short)47872;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned short)59767;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_7 [i_0] = (unsigned short)65405;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (unsigned short)12824;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (unsigned short)35890 : (unsigned short)49239;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (unsigned short)9375;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (signed char)116;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_12 [i_0] [i_1] = (signed char)-91;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_13 [i_0] = (signed char)-75;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_16 [i_0] = (unsigned short)39586;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_23 [i_0] = (unsigned short)10810;
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
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_23 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
