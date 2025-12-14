#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 231219201U;
unsigned int var_5 = 3116009214U;
_Bool var_6 = (_Bool)1;
unsigned short var_8 = (unsigned short)63482;
unsigned char var_9 = (unsigned char)25;
int var_10 = -117197011;
unsigned int var_12 = 580871647U;
signed char var_13 = (signed char)-4;
unsigned char var_14 = (unsigned char)189;
long long int var_16 = -6656062909183142857LL;
int zero = 0;
signed char var_17 = (signed char)105;
unsigned char var_18 = (unsigned char)40;
unsigned int var_19 = 654177181U;
unsigned char var_20 = (unsigned char)139;
long long int var_21 = -7113744733127073174LL;
signed char var_22 = (signed char)-2;
unsigned int arr_0 [13] ;
long long int arr_1 [13] [13] ;
unsigned int arr_3 [13] ;
long long int arr_5 [12] [12] ;
int arr_7 [12] ;
short arr_9 [12] [12] [12] ;
unsigned int arr_4 [13] ;
unsigned int arr_8 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = 1545097868U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = -339001872797948341LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = 1130222552U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_5 [i_0] [i_1] = 1928522589643846634LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_7 [i_0] = -1267749800;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (short)-32343;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = 3074971422U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_8 [i_0] = 4154260990U;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
