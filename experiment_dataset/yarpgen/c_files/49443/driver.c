#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)40342;
unsigned short var_1 = (unsigned short)33826;
unsigned short var_2 = (unsigned short)49910;
unsigned short var_3 = (unsigned short)43948;
unsigned short var_5 = (unsigned short)9312;
unsigned short var_6 = (unsigned short)49507;
unsigned short var_7 = (unsigned short)1384;
unsigned short var_8 = (unsigned short)12775;
unsigned short var_10 = (unsigned short)14419;
unsigned short var_11 = (unsigned short)15180;
unsigned short var_12 = (unsigned short)48095;
unsigned short var_13 = (unsigned short)31825;
unsigned short var_14 = (unsigned short)11737;
unsigned short var_17 = (unsigned short)55098;
int zero = 0;
unsigned short var_19 = (unsigned short)34562;
unsigned short var_20 = (unsigned short)37981;
unsigned short var_21 = (unsigned short)43141;
unsigned short var_22 = (unsigned short)29842;
unsigned short var_23 = (unsigned short)15093;
unsigned short var_24 = (unsigned short)63917;
unsigned short var_25 = (unsigned short)20338;
unsigned short arr_0 [21] ;
unsigned short arr_3 [21] [21] ;
unsigned short arr_5 [21] ;
unsigned short arr_4 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (unsigned short)27276;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)59115 : (unsigned short)43153;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_5 [i_0] = (unsigned short)63253;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (unsigned short)49531 : (unsigned short)35509;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
