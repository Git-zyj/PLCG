#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
int var_1 = 908619132;
long long int var_2 = -8240011982443533583LL;
unsigned int var_3 = 2713717904U;
short var_4 = (short)-30042;
unsigned int var_5 = 656141555U;
long long int var_6 = -6497501404731671978LL;
unsigned int var_8 = 3807753488U;
unsigned short var_9 = (unsigned short)28946;
int var_10 = -950322666;
unsigned short var_11 = (unsigned short)26441;
int zero = 0;
long long int var_12 = -5761674081472174357LL;
unsigned int var_13 = 3378068491U;
short var_14 = (short)-27809;
unsigned short var_15 = (unsigned short)2029;
unsigned int var_16 = 850911925U;
long long int var_17 = 4883447223682959284LL;
long long int arr_0 [12] ;
long long int arr_5 [12] [12] [12] ;
long long int arr_7 [24] ;
_Bool arr_8 [24] ;
unsigned int arr_6 [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = 1177754100100583051LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = -4318256337342782266LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_7 [i_0] = -3682833523335958493LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_8 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 1979279902U;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_6 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
