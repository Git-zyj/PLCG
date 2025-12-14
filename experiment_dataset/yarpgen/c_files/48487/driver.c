#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-44;
int var_6 = 1721512119;
unsigned char var_10 = (unsigned char)163;
signed char var_11 = (signed char)-102;
int zero = 0;
int var_12 = -1868933436;
unsigned long long int var_13 = 8609968230524690459ULL;
long long int var_14 = 3264266346902159289LL;
unsigned int var_15 = 3826674808U;
unsigned int var_16 = 2532716731U;
_Bool arr_1 [23] ;
unsigned short arr_2 [23] ;
unsigned int arr_5 [23] [23] [23] ;
unsigned int arr_6 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (unsigned short)53831;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 1309119183U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = 3944873628U;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
