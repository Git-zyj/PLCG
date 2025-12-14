#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-21559;
unsigned int var_7 = 3525594860U;
unsigned long long int var_8 = 9408151135194918440ULL;
int zero = 0;
long long int var_11 = -7122217590898644572LL;
short var_12 = (short)-3637;
signed char var_13 = (signed char)-127;
short var_14 = (short)7200;
unsigned int var_15 = 1110101803U;
unsigned int var_16 = 3805812759U;
unsigned short var_17 = (unsigned short)44016;
unsigned short arr_0 [10] [10] ;
int arr_1 [10] ;
_Bool arr_3 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)50189;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = -1005427827;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
