#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)172;
short var_5 = (short)18627;
unsigned char var_8 = (unsigned char)96;
unsigned short var_10 = (unsigned short)4080;
unsigned short var_11 = (unsigned short)3266;
_Bool var_15 = (_Bool)1;
int zero = 0;
unsigned short var_16 = (unsigned short)24137;
unsigned long long int var_17 = 12128890100442257804ULL;
_Bool var_18 = (_Bool)0;
unsigned short var_19 = (unsigned short)56073;
unsigned short arr_0 [17] ;
long long int arr_4 [17] [17] ;
unsigned char arr_5 [17] ;
unsigned char arr_2 [17] ;
signed char arr_3 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (unsigned short)64109;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_4 [i_0] [i_1] = 6422396903127164428LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = (unsigned char)19;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (unsigned char)160;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = (signed char)106;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
