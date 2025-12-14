#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)29664;
unsigned short var_4 = (unsigned short)40796;
unsigned int var_7 = 4056718656U;
_Bool var_8 = (_Bool)0;
signed char var_9 = (signed char)123;
int zero = 0;
short var_10 = (short)-21013;
unsigned long long int var_11 = 8179467823066562931ULL;
signed char var_12 = (signed char)106;
unsigned short var_13 = (unsigned short)16556;
unsigned int arr_0 [17] ;
unsigned short arr_1 [17] ;
long long int arr_2 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = 4232537941U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (unsigned short)45374;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_2 [i_0] [i_1] = 368645726760156099LL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
