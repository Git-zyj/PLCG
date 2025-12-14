#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 66789327U;
unsigned long long int var_7 = 8936129972344183638ULL;
long long int var_10 = 3217311639414909362LL;
long long int var_13 = -2570214283102472044LL;
unsigned int var_14 = 765419437U;
unsigned int var_16 = 202592862U;
int zero = 0;
unsigned char var_17 = (unsigned char)197;
long long int var_18 = -1961955513361264195LL;
unsigned long long int var_19 = 9954044519956825973ULL;
unsigned int var_20 = 301372341U;
unsigned short var_21 = (unsigned short)26275;
int var_22 = -1855878112;
unsigned int var_23 = 3886347535U;
signed char arr_1 [21] ;
int arr_3 [21] ;
unsigned long long int arr_5 [21] ;
short arr_6 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (signed char)-78;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = 1359221409;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_5 [i_0] = 2688690515068365586ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_6 [i_0] [i_1] = (short)8061;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
