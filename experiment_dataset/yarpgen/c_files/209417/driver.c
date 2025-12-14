#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)43;
short var_2 = (short)15543;
short var_9 = (short)-12598;
signed char var_12 = (signed char)112;
unsigned int var_14 = 627892316U;
int zero = 0;
signed char var_18 = (signed char)-18;
signed char var_19 = (signed char)-83;
unsigned short var_20 = (unsigned short)22147;
unsigned int var_21 = 2739927692U;
signed char var_22 = (signed char)25;
signed char var_23 = (signed char)68;
short arr_0 [10] ;
unsigned int arr_1 [10] ;
signed char arr_5 [16] [16] ;
unsigned short arr_6 [16] [16] ;
unsigned short arr_2 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (short)-24954;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = 3266819420U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_5 [i_0] [i_1] = (signed char)65;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned short)52596;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (unsigned short)18314;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
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
