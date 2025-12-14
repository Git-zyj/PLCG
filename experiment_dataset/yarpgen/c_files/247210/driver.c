#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2581293751631535140LL;
_Bool var_1 = (_Bool)0;
long long int var_4 = -5033441578515383560LL;
_Bool var_10 = (_Bool)1;
int zero = 0;
_Bool var_14 = (_Bool)0;
unsigned long long int var_15 = 12224196322314316274ULL;
int var_16 = -1092778016;
unsigned long long int var_17 = 4256838882926927786ULL;
unsigned long long int arr_1 [16] [16] ;
unsigned short arr_3 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_1 [i_0] [i_1] = 11477644993825529751ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)14401;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
