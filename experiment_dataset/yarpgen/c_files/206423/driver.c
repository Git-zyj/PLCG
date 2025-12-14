#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)211;
signed char var_3 = (signed char)-125;
signed char var_7 = (signed char)-105;
int var_9 = -1468061218;
int zero = 0;
long long int var_11 = 382343476949065909LL;
signed char var_12 = (signed char)59;
signed char var_13 = (signed char)11;
_Bool var_14 = (_Bool)0;
_Bool var_15 = (_Bool)0;
int var_16 = 1197391706;
unsigned short arr_0 [16] ;
signed char arr_1 [16] ;
unsigned short arr_2 [14] ;
unsigned int arr_3 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (unsigned short)63864;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (signed char)-44;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned short)5363 : (unsigned short)1673;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_3 [i_0] [i_1] = 2071407851U;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
