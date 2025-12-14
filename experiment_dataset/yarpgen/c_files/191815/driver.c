#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)26244;
unsigned short var_10 = (unsigned short)45204;
unsigned long long int var_11 = 3036098296851537624ULL;
unsigned char var_13 = (unsigned char)105;
unsigned char var_14 = (unsigned char)128;
int zero = 0;
long long int var_16 = -8855368588615595681LL;
short var_17 = (short)12327;
unsigned long long int var_18 = 13688449008062101433ULL;
short var_19 = (short)-15176;
unsigned long long int arr_1 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = 2604435859813418150ULL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
