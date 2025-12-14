#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 2960339417940333491ULL;
short var_5 = (short)-20472;
short var_6 = (short)-150;
unsigned char var_9 = (unsigned char)194;
short var_10 = (short)21609;
int zero = 0;
int var_11 = 666909151;
signed char var_12 = (signed char)55;
short var_13 = (short)8833;
signed char var_14 = (signed char)112;
unsigned long long int var_15 = 12283972595141866042ULL;
_Bool var_16 = (_Bool)1;
unsigned char var_17 = (unsigned char)61;
unsigned long long int var_18 = 10374865066910774086ULL;
int var_19 = 2049333851;
unsigned short arr_1 [20] ;
int arr_10 [16] [16] ;
unsigned short arr_13 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (unsigned short)9905;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_10 [i_0] [i_1] = 1741436078;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_13 [i_0] = (unsigned short)20063;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_13 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
