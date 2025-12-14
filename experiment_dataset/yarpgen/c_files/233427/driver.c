#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -316872448;
int var_6 = -1220776293;
_Bool var_8 = (_Bool)0;
unsigned int var_11 = 1565571931U;
unsigned long long int var_12 = 2122069335463368462ULL;
unsigned int var_13 = 1884167077U;
int zero = 0;
signed char var_14 = (signed char)-38;
unsigned long long int var_15 = 5875089754697153064ULL;
unsigned char var_16 = (unsigned char)92;
unsigned long long int arr_5 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_5 [i_0] [i_1] = 16411410482852374983ULL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
