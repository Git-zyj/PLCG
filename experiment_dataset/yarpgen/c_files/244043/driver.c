#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-39;
long long int var_3 = -5418036971588380550LL;
unsigned long long int var_4 = 2170097558920167859ULL;
unsigned char var_8 = (unsigned char)95;
long long int var_9 = 7289415518513225653LL;
unsigned int var_11 = 41742809U;
_Bool var_13 = (_Bool)1;
unsigned short var_14 = (unsigned short)1172;
unsigned short var_16 = (unsigned short)38815;
int zero = 0;
unsigned int var_17 = 2614238030U;
unsigned char var_18 = (unsigned char)192;
unsigned long long int var_19 = 7575572567036265638ULL;
signed char var_20 = (signed char)-96;
unsigned char var_21 = (unsigned char)97;
unsigned char var_22 = (unsigned char)5;
long long int var_23 = 95055850549636346LL;
unsigned char var_24 = (unsigned char)97;
signed char arr_0 [18] ;
unsigned short arr_4 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (signed char)-109;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)58396 : (unsigned short)46930;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
