#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -928653274;
unsigned char var_6 = (unsigned char)128;
unsigned char var_8 = (unsigned char)52;
signed char var_9 = (signed char)12;
unsigned short var_10 = (unsigned short)47711;
unsigned long long int var_12 = 8815703227585801064ULL;
int zero = 0;
unsigned int var_13 = 401172680U;
unsigned long long int var_14 = 7364911979989512223ULL;
_Bool var_15 = (_Bool)0;
unsigned short var_16 = (unsigned short)7337;
int var_17 = 28541941;
unsigned long long int arr_0 [23] [23] ;
signed char arr_1 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = 14111326301895604332ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)-123;
}

void checksum() {
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
