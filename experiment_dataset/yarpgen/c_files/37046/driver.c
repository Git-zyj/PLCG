#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2038552273258204043LL;
unsigned char var_3 = (unsigned char)122;
unsigned int var_5 = 4144729136U;
signed char var_6 = (signed char)19;
unsigned char var_8 = (unsigned char)127;
int zero = 0;
long long int var_10 = -4479419801423921869LL;
unsigned int var_11 = 3706102819U;
unsigned int var_12 = 1972787414U;
_Bool var_13 = (_Bool)1;
unsigned short var_14 = (unsigned short)34026;
unsigned short arr_0 [18] [18] ;
unsigned int arr_1 [18] ;
signed char arr_2 [18] [18] ;
short arr_3 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)26149;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = 325812476U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)105;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (short)11459 : (short)-18119;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
