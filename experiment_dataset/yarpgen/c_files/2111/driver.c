#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)1066;
unsigned short var_3 = (unsigned short)1266;
unsigned short var_5 = (unsigned short)30776;
unsigned short var_10 = (unsigned short)37104;
unsigned short var_11 = (unsigned short)43676;
unsigned short var_12 = (unsigned short)65085;
unsigned short var_13 = (unsigned short)37308;
unsigned short var_14 = (unsigned short)5835;
int zero = 0;
unsigned short var_19 = (unsigned short)18487;
unsigned short var_20 = (unsigned short)41723;
unsigned short var_21 = (unsigned short)25917;
unsigned short var_22 = (unsigned short)33333;
unsigned short var_23 = (unsigned short)1623;
unsigned short arr_0 [16] [16] ;
unsigned short arr_1 [16] ;
unsigned short arr_2 [16] ;
unsigned short arr_4 [16] ;
unsigned short arr_5 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)15129;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (unsigned short)45917;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (unsigned short)45683;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = (unsigned short)58944;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned short)12979;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
