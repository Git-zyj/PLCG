#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)18;
unsigned short var_3 = (unsigned short)12163;
signed char var_4 = (signed char)-86;
unsigned int var_5 = 2032833341U;
signed char var_7 = (signed char)57;
signed char var_8 = (signed char)98;
unsigned short var_9 = (unsigned short)23467;
short var_10 = (short)17887;
unsigned char var_11 = (unsigned char)31;
unsigned long long int var_12 = 7546666293742928365ULL;
int zero = 0;
int var_13 = 456490285;
unsigned long long int var_14 = 4169884549299104967ULL;
short var_15 = (short)-8762;
long long int var_16 = 3756772233563060807LL;
int var_17 = 740501396;
long long int var_18 = 6472880668663922958LL;
unsigned long long int arr_0 [17] [17] ;
unsigned char arr_2 [17] ;
unsigned char arr_4 [17] [17] ;
unsigned int arr_5 [17] ;
unsigned long long int arr_6 [17] [17] ;
_Bool arr_7 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_0 [i_0] [i_1] = 9960629832662713525ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (unsigned char)224;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)211;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = 4114330174U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_6 [i_0] [i_1] = 2690257181884702036ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_7 [i_0] [i_1] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
