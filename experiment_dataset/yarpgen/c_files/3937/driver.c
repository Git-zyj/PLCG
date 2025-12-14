#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)58;
unsigned char var_1 = (unsigned char)47;
short var_2 = (short)11705;
unsigned char var_5 = (unsigned char)9;
unsigned char var_10 = (unsigned char)247;
long long int var_16 = -7850040049989173790LL;
int zero = 0;
unsigned int var_17 = 4271546679U;
unsigned int var_18 = 3056333918U;
long long int var_19 = 1573066763360009413LL;
unsigned int var_20 = 310571907U;
unsigned char var_21 = (unsigned char)117;
unsigned char arr_1 [12] ;
unsigned int arr_5 [13] ;
short arr_6 [13] ;
long long int arr_4 [12] ;
short arr_7 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (unsigned char)234;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_5 [i_0] = 4138588730U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_6 [i_0] = (short)12964;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = 104626516555998208LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_7 [i_0] = (short)21296;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
