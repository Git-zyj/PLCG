#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)125;
unsigned char var_2 = (unsigned char)36;
unsigned char var_10 = (unsigned char)112;
signed char var_12 = (signed char)-7;
int zero = 0;
unsigned char var_15 = (unsigned char)124;
unsigned long long int var_16 = 10045446608340193277ULL;
unsigned long long int var_17 = 16172712528438671786ULL;
unsigned char var_18 = (unsigned char)232;
long long int var_19 = 309329682226033079LL;
unsigned char arr_0 [15] [15] ;
long long int arr_7 [15] [15] [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)88;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? -7005670945837213229LL : 1277089217749100438LL;
}

void checksum() {
    hash(&seed, var_15);
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
