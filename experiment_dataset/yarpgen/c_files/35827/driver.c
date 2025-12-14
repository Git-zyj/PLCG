#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 2536328648U;
unsigned long long int var_5 = 16749281133675028226ULL;
unsigned int var_9 = 1707997763U;
signed char var_10 = (signed char)89;
unsigned int var_12 = 3986974291U;
unsigned char var_14 = (unsigned char)212;
short var_16 = (short)12704;
int zero = 0;
unsigned char var_17 = (unsigned char)84;
unsigned int var_18 = 993262203U;
short arr_5 [13] [13] [13] ;
short arr_6 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (short)7943;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_6 [i_0] = (short)30739;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
