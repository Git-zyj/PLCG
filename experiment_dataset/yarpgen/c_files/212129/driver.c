#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)64762;
unsigned short var_4 = (unsigned short)25510;
unsigned int var_7 = 623203116U;
long long int var_8 = 4485259184377053855LL;
int var_9 = 53691490;
unsigned long long int var_10 = 13285639160571699424ULL;
unsigned long long int var_11 = 691195894093440491ULL;
int var_13 = -120333372;
unsigned long long int var_16 = 3966531087243266672ULL;
int zero = 0;
unsigned int var_19 = 3882021869U;
int var_20 = -92164977;
unsigned char var_21 = (unsigned char)199;
int arr_1 [20] ;
signed char arr_2 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = 1331592352;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)98;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
