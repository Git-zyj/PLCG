#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-49;
unsigned long long int var_1 = 14808150930355253505ULL;
unsigned long long int var_6 = 12470059424205541238ULL;
unsigned char var_7 = (unsigned char)74;
unsigned int var_8 = 4195034707U;
unsigned int var_10 = 2770554804U;
unsigned long long int var_11 = 3238707061770442289ULL;
int zero = 0;
unsigned long long int var_12 = 9219188513313830241ULL;
unsigned short var_13 = (unsigned short)30563;
unsigned int var_14 = 3137845594U;
int var_15 = 1441251728;
int var_16 = -2135833552;
unsigned long long int var_17 = 16363477427820419642ULL;
unsigned long long int var_18 = 11741468896293230171ULL;
unsigned int arr_0 [22] ;
unsigned int arr_3 [22] [22] ;
long long int arr_4 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = 2927203668U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_3 [i_0] [i_1] = 2190912655U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 6752396078522508631LL : -2005445260172562120LL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
