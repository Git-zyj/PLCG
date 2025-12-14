#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10252699421750617054ULL;
unsigned char var_1 = (unsigned char)115;
unsigned char var_6 = (unsigned char)8;
unsigned char var_7 = (unsigned char)250;
unsigned char var_9 = (unsigned char)205;
unsigned char var_10 = (unsigned char)242;
int zero = 0;
unsigned char var_12 = (unsigned char)168;
unsigned char var_13 = (unsigned char)146;
unsigned char var_14 = (unsigned char)0;
unsigned char var_15 = (unsigned char)207;
unsigned long long int var_16 = 1596947737698222646ULL;
unsigned long long int var_17 = 9709988270419937578ULL;
unsigned char arr_0 [17] [17] ;
unsigned char arr_1 [17] ;
unsigned char arr_2 [17] [17] ;
unsigned char arr_3 [17] ;
unsigned long long int arr_5 [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)65;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (unsigned char)248;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)81;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = (unsigned char)202;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 13707342568773422616ULL : 3123143574250546728ULL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
