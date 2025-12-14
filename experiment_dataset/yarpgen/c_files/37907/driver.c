#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)5990;
_Bool var_6 = (_Bool)1;
short var_14 = (short)21323;
short var_15 = (short)4904;
int zero = 0;
unsigned char var_20 = (unsigned char)2;
short var_21 = (short)6073;
unsigned char var_22 = (unsigned char)154;
unsigned char var_23 = (unsigned char)58;
unsigned char var_24 = (unsigned char)163;
unsigned char arr_0 [10] ;
unsigned char arr_1 [10] ;
short arr_2 [10] ;
short arr_4 [10] [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (unsigned char)168;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (unsigned char)228;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (short)8530;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (short)-28450;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
