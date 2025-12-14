#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4869069877497675054LL;
short var_2 = (short)-27309;
unsigned short var_7 = (unsigned short)41770;
unsigned short var_9 = (unsigned short)25414;
unsigned long long int var_11 = 9581971773873365242ULL;
_Bool var_12 = (_Bool)0;
short var_13 = (short)-18058;
int zero = 0;
int var_14 = 414912217;
signed char var_15 = (signed char)28;
int var_16 = -1179335642;
unsigned long long int arr_1 [17] ;
unsigned short arr_3 [17] ;
unsigned int arr_4 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = 12098659374239612127ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = (unsigned short)3503;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_4 [i_0] [i_1] = 2912102783U;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
