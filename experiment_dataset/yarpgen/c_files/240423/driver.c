#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)42;
signed char var_1 = (signed char)91;
signed char var_5 = (signed char)112;
unsigned int var_6 = 3218540853U;
unsigned int var_9 = 2020582595U;
signed char var_12 = (signed char)42;
unsigned int var_13 = 266822197U;
unsigned long long int var_15 = 8124689467357455894ULL;
signed char var_16 = (signed char)37;
int zero = 0;
signed char var_19 = (signed char)-8;
unsigned int var_20 = 2840899265U;
_Bool var_21 = (_Bool)0;
signed char arr_0 [16] [16] ;
signed char arr_4 [16] ;
unsigned long long int arr_5 [16] [16] ;
signed char arr_6 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)-82;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = (signed char)-70;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_5 [i_0] [i_1] = 9222404557867198370ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_6 [i_0] = (signed char)60;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
