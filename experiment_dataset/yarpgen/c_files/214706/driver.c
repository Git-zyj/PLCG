#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = -4047942304986675136LL;
unsigned short var_7 = (unsigned short)25664;
unsigned short var_8 = (unsigned short)3013;
unsigned long long int var_9 = 4446197596999079802ULL;
int var_10 = 648713781;
int zero = 0;
unsigned long long int var_12 = 5732137128800903382ULL;
unsigned int var_13 = 3444756770U;
unsigned short var_14 = (unsigned short)28424;
unsigned long long int var_15 = 13320245941212757266ULL;
unsigned char var_16 = (unsigned char)174;
long long int arr_1 [12] ;
unsigned char arr_7 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = -1465403762729858239LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned char)128;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
