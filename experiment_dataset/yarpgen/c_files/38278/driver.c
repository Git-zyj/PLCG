#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1980978803;
unsigned int var_5 = 100537556U;
_Bool var_8 = (_Bool)1;
signed char var_10 = (signed char)-110;
int var_11 = 1824455747;
int zero = 0;
long long int var_12 = 4429193106196893040LL;
unsigned long long int var_13 = 3592956308149593757ULL;
short var_14 = (short)-5762;
signed char var_15 = (signed char)-70;
unsigned int var_16 = 351697359U;
unsigned char var_17 = (unsigned char)209;
unsigned short var_18 = (unsigned short)1915;
unsigned int var_19 = 3705682064U;
signed char arr_0 [11] [11] ;
int arr_1 [11] ;
int arr_2 [11] ;
long long int arr_3 [10] ;
signed char arr_6 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)-4;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = -1065070042;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = 2003808906;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = -4520213458943197169LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_6 [i_0] = (signed char)67;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
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
