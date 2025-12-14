#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)161;
short var_2 = (short)11074;
short var_6 = (short)21102;
short var_7 = (short)13649;
int zero = 0;
unsigned long long int var_14 = 244683426131287817ULL;
unsigned short var_15 = (unsigned short)38343;
signed char var_16 = (signed char)6;
unsigned char var_17 = (unsigned char)235;
_Bool arr_2 [16] ;
signed char arr_3 [16] [16] ;
short arr_5 [16] [16] [16] ;
unsigned char arr_6 [16] [16] ;
short arr_7 [12] ;
unsigned long long int arr_8 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)52;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (short)7025;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned char)228;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_7 [i_0] = (short)-26252;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_8 [i_0] = 12082935231298796531ULL;
}

void checksum() {
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
