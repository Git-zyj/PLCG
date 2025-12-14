#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned char var_2 = (unsigned char)126;
unsigned short var_3 = (unsigned short)19184;
unsigned short var_4 = (unsigned short)30860;
unsigned int var_5 = 1322772721U;
unsigned short var_6 = (unsigned short)678;
unsigned int var_8 = 1359554002U;
int var_9 = 61002049;
int zero = 0;
unsigned char var_10 = (unsigned char)67;
unsigned char var_11 = (unsigned char)211;
int var_12 = -196313917;
unsigned char var_13 = (unsigned char)209;
int var_14 = 1355509465;
int arr_0 [10] [10] ;
int arr_1 [10] ;
unsigned int arr_2 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_0 [i_0] [i_1] = -458260651;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = -1475781274;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = 592487068U;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
