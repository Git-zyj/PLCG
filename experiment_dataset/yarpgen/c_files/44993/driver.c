#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)123;
short var_4 = (short)2501;
unsigned int var_5 = 2272570425U;
_Bool var_7 = (_Bool)1;
int var_8 = -1597897720;
short var_9 = (short)-23356;
int zero = 0;
short var_10 = (short)21408;
long long int var_11 = -6661001624729334468LL;
long long int var_12 = -1846723783944134731LL;
int var_13 = -54003220;
unsigned int arr_1 [11] [11] ;
unsigned char arr_3 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_1 [i_0] [i_1] = 3826359150U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)211;
}

void checksum() {
    hash(&seed, var_10);
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
