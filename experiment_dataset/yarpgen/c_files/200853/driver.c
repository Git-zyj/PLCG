#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)74;
signed char var_1 = (signed char)-33;
long long int var_6 = 9121136169749042793LL;
signed char var_7 = (signed char)-50;
_Bool var_9 = (_Bool)1;
_Bool var_12 = (_Bool)1;
unsigned int var_13 = 2586091099U;
int zero = 0;
unsigned short var_15 = (unsigned short)21291;
int var_16 = -1713264697;
unsigned char var_17 = (unsigned char)26;
unsigned short var_18 = (unsigned short)29544;
unsigned int var_19 = 2450469778U;
unsigned char arr_0 [12] [12] ;
unsigned short arr_3 [12] ;
long long int arr_4 [12] [12] [12] ;
unsigned short arr_5 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)85;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = (unsigned short)6006;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 2608349441178930917LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (unsigned short)36581 : (unsigned short)22052;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
