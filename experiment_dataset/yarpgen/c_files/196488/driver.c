#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1989221371;
_Bool var_4 = (_Bool)0;
unsigned long long int var_5 = 7640926388212040388ULL;
_Bool var_6 = (_Bool)0;
_Bool var_7 = (_Bool)1;
long long int var_8 = -281271966465322289LL;
long long int var_10 = -8730912563859480069LL;
signed char var_11 = (signed char)-21;
int zero = 0;
long long int var_12 = 919675604292337629LL;
long long int var_13 = 8069013893960757476LL;
unsigned long long int var_14 = 4646112618217765622ULL;
unsigned char var_15 = (unsigned char)127;
unsigned short var_16 = (unsigned short)61115;
signed char var_17 = (signed char)59;
long long int arr_1 [12] [12] ;
short arr_2 [12] ;
unsigned short arr_8 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_1 [i_0] [i_1] = -4539938414012574188LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (short)-14719;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_8 [i_0] [i_1] = (unsigned short)39306;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
