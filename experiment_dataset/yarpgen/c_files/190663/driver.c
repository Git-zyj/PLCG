#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)17567;
short var_4 = (short)-29701;
int var_5 = -982723371;
long long int var_6 = -5585080869323731229LL;
short var_8 = (short)-15106;
_Bool var_9 = (_Bool)0;
signed char var_10 = (signed char)127;
unsigned char var_11 = (unsigned char)33;
_Bool var_12 = (_Bool)1;
unsigned long long int var_14 = 14446542982435982011ULL;
int zero = 0;
unsigned short var_15 = (unsigned short)36254;
long long int var_16 = 2399385532629408320LL;
short var_17 = (short)-28108;
unsigned short var_18 = (unsigned short)54581;
unsigned int arr_3 [10] [10] ;
unsigned char arr_4 [10] ;
_Bool arr_5 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_3 [i_0] [i_1] = 851474988U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = (unsigned char)57;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_5 [i_0] [i_1] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
