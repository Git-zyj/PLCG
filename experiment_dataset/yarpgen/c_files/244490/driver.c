#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)58179;
unsigned long long int var_1 = 16249095659875829431ULL;
unsigned char var_2 = (unsigned char)68;
unsigned int var_5 = 2518767642U;
unsigned long long int var_6 = 13714525530010496957ULL;
unsigned long long int var_10 = 5030926395103950673ULL;
unsigned int var_11 = 4159864970U;
short var_13 = (short)12882;
int zero = 0;
unsigned char var_14 = (unsigned char)207;
unsigned int var_15 = 2424347262U;
_Bool arr_7 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_7 [i_0] [i_1] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
