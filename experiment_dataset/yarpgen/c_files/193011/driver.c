#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -157816615112448752LL;
int var_2 = -606497947;
int zero = 0;
unsigned int var_20 = 4288100772U;
unsigned char var_21 = (unsigned char)19;
unsigned short var_22 = (unsigned short)39340;
long long int var_23 = -2723552104674958053LL;
short var_24 = (short)-1688;
unsigned char var_25 = (unsigned char)61;
unsigned int var_26 = 3540715462U;
unsigned char arr_2 [24] ;
long long int arr_4 [24] ;
long long int arr_8 [24] [24] ;
unsigned int arr_11 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (unsigned char)213;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = 3383560895272104660LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_8 [i_0] [i_1] = -2762425905702271487LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? 3670913358U : 3405054632U;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
