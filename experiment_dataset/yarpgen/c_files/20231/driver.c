#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-1454;
signed char var_1 = (signed char)-11;
unsigned short var_3 = (unsigned short)6927;
unsigned short var_5 = (unsigned short)42286;
unsigned long long int var_11 = 14209527325900481508ULL;
unsigned char var_12 = (unsigned char)83;
unsigned long long int var_13 = 858823389269499172ULL;
unsigned long long int var_15 = 16091998145685493266ULL;
int zero = 0;
long long int var_16 = -4088475780833168144LL;
signed char var_17 = (signed char)44;
int var_18 = 1272885484;
int arr_0 [10] ;
unsigned short arr_1 [10] [10] ;
short arr_3 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = 1974140696;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)42855;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_3 [i_0] [i_1] = (short)-22464;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
