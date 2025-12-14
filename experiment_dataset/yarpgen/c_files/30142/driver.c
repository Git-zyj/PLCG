#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned char var_2 = (unsigned char)95;
unsigned char var_7 = (unsigned char)3;
signed char var_8 = (signed char)-70;
unsigned long long int var_13 = 6443083167761425253ULL;
int zero = 0;
unsigned short var_15 = (unsigned short)53794;
unsigned char var_16 = (unsigned char)33;
unsigned char var_17 = (unsigned char)159;
unsigned short var_18 = (unsigned short)20901;
unsigned int var_19 = 1217369034U;
unsigned char arr_1 [10] ;
unsigned long long int arr_2 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (unsigned char)83;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_2 [i_0] [i_1] = 2809008710227873514ULL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
