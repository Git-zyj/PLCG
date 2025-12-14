#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 13070069487859388099ULL;
unsigned int var_5 = 4290171143U;
int zero = 0;
unsigned char var_11 = (unsigned char)182;
unsigned int var_12 = 2889073506U;
unsigned char var_13 = (unsigned char)212;
short var_14 = (short)-22084;
unsigned char var_15 = (unsigned char)235;
int var_16 = 1865237886;
unsigned long long int arr_0 [19] ;
unsigned long long int arr_1 [19] [19] ;
short arr_6 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 13221730062320672947ULL : 10886060139328201774ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_1 [i_0] [i_1] = (i_0 % 2 == 0) ? 8639686778596557429ULL : 16210105513667603146ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_6 [i_0] = (short)13464;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
