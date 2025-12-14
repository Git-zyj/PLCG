#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -8551627277687637200LL;
int var_4 = 378706930;
long long int var_6 = 76401692013538184LL;
unsigned int var_7 = 650327476U;
unsigned long long int var_10 = 7273648379187646911ULL;
_Bool var_11 = (_Bool)1;
unsigned char var_12 = (unsigned char)95;
int zero = 0;
long long int var_17 = -660927029756612058LL;
unsigned long long int var_18 = 7949084445936071587ULL;
unsigned int var_19 = 917460801U;
unsigned int arr_1 [20] ;
short arr_3 [20] [20] ;
unsigned long long int arr_6 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = 914691774U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_3 [i_0] [i_1] = (short)-4179;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_6 [i_0] = 1211518014189862492ULL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
