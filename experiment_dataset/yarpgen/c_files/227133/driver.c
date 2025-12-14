#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 10502749049097387985ULL;
unsigned long long int var_2 = 12686549698154132837ULL;
unsigned char var_6 = (unsigned char)178;
unsigned long long int var_15 = 14631888752652747351ULL;
unsigned int var_18 = 3227699484U;
int zero = 0;
int var_20 = -959337317;
unsigned char var_21 = (unsigned char)63;
unsigned long long int var_22 = 14087796157105181074ULL;
unsigned int var_23 = 3631429346U;
unsigned long long int arr_0 [18] ;
unsigned long long int arr_3 [18] ;
short arr_4 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = 9598475638349901342ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = 5339452240554012266ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = (short)-5705;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
