#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-27805;
unsigned int var_3 = 814038526U;
unsigned int var_4 = 4206855614U;
unsigned long long int var_5 = 6544023896872216951ULL;
short var_6 = (short)-6930;
unsigned short var_12 = (unsigned short)24206;
unsigned long long int var_13 = 4116631026428066442ULL;
int zero = 0;
unsigned int var_14 = 2305559787U;
_Bool var_15 = (_Bool)0;
unsigned long long int var_16 = 8105686305461190460ULL;
short arr_0 [15] ;
unsigned long long int arr_1 [15] ;
unsigned int arr_2 [15] [15] [15] ;
unsigned long long int arr_3 [15] ;
unsigned long long int arr_4 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (short)18473;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = 11217446002273732874ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = 1411761791U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = 4624827112655300215ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = 1165723631671178565ULL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
