#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 199798500U;
unsigned long long int var_3 = 16793948136561217358ULL;
unsigned int var_4 = 3219081900U;
long long int var_5 = 650583686283081240LL;
unsigned short var_7 = (unsigned short)43379;
signed char var_9 = (signed char)87;
long long int var_10 = -2656539391264612433LL;
int zero = 0;
short var_11 = (short)-9646;
unsigned char var_12 = (unsigned char)101;
unsigned long long int var_13 = 5084663332214312828ULL;
signed char var_14 = (signed char)123;
signed char arr_3 [13] ;
int arr_4 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (signed char)37 : (signed char)-52;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 1596945849 : 1074474682;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
