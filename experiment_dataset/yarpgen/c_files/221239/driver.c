#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_8 = 7536760600595890971LL;
unsigned long long int var_10 = 14120318362836215804ULL;
unsigned int var_11 = 734500321U;
unsigned char var_12 = (unsigned char)103;
int var_14 = -2110818846;
signed char var_17 = (signed char)60;
int zero = 0;
int var_20 = -840707777;
int var_21 = -1498914080;
signed char var_22 = (signed char)101;
long long int var_23 = -386270607045114388LL;
unsigned int var_24 = 2388570659U;
unsigned short var_25 = (unsigned short)22685;
unsigned int var_26 = 3429631457U;
signed char arr_0 [10] ;
short arr_1 [10] [10] ;
int arr_2 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (signed char)23;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_1 [i_0] [i_1] = (short)1763;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = 1506615220;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
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
