#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_7 = (signed char)73;
short var_9 = (short)-1378;
_Bool var_11 = (_Bool)1;
int zero = 0;
signed char var_15 = (signed char)-81;
signed char var_16 = (signed char)57;
signed char var_17 = (signed char)98;
int var_18 = 2107607057;
signed char var_19 = (signed char)-127;
unsigned int var_20 = 3599370981U;
unsigned short var_21 = (unsigned short)2211;
unsigned short var_22 = (unsigned short)38466;
unsigned int arr_1 [15] ;
short arr_3 [21] ;
short arr_4 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = 1905197234U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = (short)-14775;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_4 [i_0] [i_1] = (short)22301;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
