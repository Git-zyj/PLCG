#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 501802033;
signed char var_4 = (signed char)-41;
unsigned int var_6 = 3093840114U;
unsigned short var_11 = (unsigned short)58106;
short var_12 = (short)19526;
int zero = 0;
long long int var_20 = 2254727009507915187LL;
_Bool var_21 = (_Bool)0;
unsigned long long int var_22 = 3176076739181201894ULL;
short var_23 = (short)-7850;
unsigned short var_24 = (unsigned short)54942;
signed char arr_0 [20] [20] ;
signed char arr_2 [20] ;
unsigned long long int arr_3 [20] ;
unsigned short arr_6 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)32;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (signed char)65;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = 7679122088561293919ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_6 [i_0] = (unsigned short)16643;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
