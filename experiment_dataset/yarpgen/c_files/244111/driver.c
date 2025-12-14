#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)39252;
short var_2 = (short)-29942;
unsigned long long int var_3 = 2574566557481634539ULL;
long long int var_5 = -5750541662911458805LL;
signed char var_7 = (signed char)98;
unsigned int var_9 = 1042898864U;
long long int var_12 = 2838175638346012320LL;
long long int var_13 = 5326518379455614874LL;
unsigned int var_14 = 1105667090U;
int zero = 0;
unsigned int var_16 = 1601716121U;
short arr_0 [18] ;
unsigned long long int arr_2 [18] [18] ;
unsigned int arr_3 [18] ;
long long int arr_4 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (short)-149;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_2 [i_0] [i_1] = 12722358079663284351ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = 117077410U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = -4013495390901984134LL;
}

void checksum() {
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
