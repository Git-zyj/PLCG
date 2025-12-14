#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 743877358;
unsigned int var_4 = 1956295780U;
int var_5 = 886680877;
unsigned int var_6 = 129417319U;
signed char var_10 = (signed char)-58;
unsigned int var_11 = 441478927U;
int var_12 = -256633025;
short var_13 = (short)-23664;
short var_16 = (short)-3919;
int zero = 0;
int var_17 = -627216871;
unsigned int var_18 = 206228268U;
short var_19 = (short)24554;
short var_20 = (short)5181;
signed char arr_3 [23] ;
int arr_4 [23] ;
short arr_5 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = (signed char)-42;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = 1180855342;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = (short)31493;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
