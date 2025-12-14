#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -4681475021896901093LL;
unsigned short var_8 = (unsigned short)57410;
unsigned long long int var_15 = 12912620231567413660ULL;
int zero = 0;
unsigned int var_16 = 643449622U;
unsigned long long int var_17 = 7873712151691312341ULL;
unsigned char var_18 = (unsigned char)175;
int var_19 = -1891742478;
unsigned char arr_0 [19] [19] ;
unsigned char arr_2 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)33;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (unsigned char)163;
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
