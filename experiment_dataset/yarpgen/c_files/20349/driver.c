#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-19;
unsigned int var_3 = 3763021804U;
short var_7 = (short)-30883;
unsigned char var_8 = (unsigned char)122;
int zero = 0;
unsigned int var_10 = 446084963U;
short var_11 = (short)-12789;
_Bool var_12 = (_Bool)0;
unsigned long long int arr_0 [18] ;
int arr_1 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = 5222557623648079216ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = -487047846;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
