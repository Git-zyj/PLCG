#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -2122860607;
unsigned char var_3 = (unsigned char)91;
short var_4 = (short)-12358;
_Bool var_6 = (_Bool)1;
unsigned long long int var_7 = 7513344282431178912ULL;
unsigned long long int var_8 = 16144619191622216870ULL;
int zero = 0;
_Bool var_11 = (_Bool)1;
short var_12 = (short)-16659;
int var_13 = 1477528409;
_Bool arr_0 [19] [19] ;
short arr_1 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_1 [i_0] [i_1] = (short)-19268;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
