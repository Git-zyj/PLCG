#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 4467333156967994086ULL;
short var_5 = (short)-1832;
signed char var_6 = (signed char)69;
unsigned long long int var_9 = 1319203965811037261ULL;
unsigned long long int var_15 = 17046889202868917539ULL;
short var_16 = (short)-27955;
signed char var_17 = (signed char)89;
int zero = 0;
unsigned long long int var_19 = 11189577842673419977ULL;
unsigned long long int var_20 = 5445367818406867491ULL;
unsigned long long int var_21 = 11896302332737735090ULL;
_Bool arr_1 [12] ;
unsigned long long int arr_2 [12] [12] ;
_Bool arr_3 [12] [12] ;
_Bool arr_4 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_2 [i_0] [i_1] = 8520849514271329810ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
