#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)15215;
unsigned long long int var_3 = 17216305471554616673ULL;
unsigned int var_5 = 349157684U;
int var_6 = 438693662;
unsigned int var_7 = 443342195U;
unsigned short var_8 = (unsigned short)37501;
_Bool var_12 = (_Bool)1;
unsigned int var_13 = 1937193541U;
unsigned long long int var_17 = 12629329552719537941ULL;
int zero = 0;
_Bool var_18 = (_Bool)1;
signed char var_19 = (signed char)-96;
unsigned short var_20 = (unsigned short)38293;
unsigned int var_21 = 1527375176U;
unsigned long long int var_22 = 10625819716037888614ULL;
signed char var_23 = (signed char)-19;
signed char var_24 = (signed char)-40;
unsigned int arr_1 [16] ;
unsigned int arr_3 [16] [16] [16] ;
unsigned short arr_4 [16] [16] [16] ;
unsigned int arr_5 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = 4152029186U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 503029429U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned short)55652;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = 377778858U;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
