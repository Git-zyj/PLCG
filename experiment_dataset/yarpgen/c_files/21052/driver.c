#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-19667;
_Bool var_1 = (_Bool)0;
_Bool var_3 = (_Bool)1;
short var_4 = (short)9716;
unsigned char var_5 = (unsigned char)164;
short var_6 = (short)-4131;
long long int var_8 = -7749178364340572081LL;
int var_10 = -613909200;
short var_11 = (short)27085;
int zero = 0;
unsigned short var_12 = (unsigned short)64573;
unsigned char var_13 = (unsigned char)20;
unsigned int var_14 = 2265826272U;
_Bool var_15 = (_Bool)0;
_Bool var_16 = (_Bool)1;
short var_17 = (short)9881;
short var_18 = (short)31565;
long long int arr_0 [19] ;
unsigned short arr_1 [19] ;
unsigned short arr_2 [19] [19] [19] ;
unsigned short arr_3 [19] ;
int arr_4 [19] [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = 7492533871848698735LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (unsigned short)6366 : (unsigned short)49136;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned short)28989 : (unsigned short)50422;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = (unsigned short)36712;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 1589984160;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
