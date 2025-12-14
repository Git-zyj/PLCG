#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -359106421;
unsigned char var_5 = (unsigned char)12;
_Bool var_6 = (_Bool)0;
short var_7 = (short)24467;
long long int var_10 = -3465015180610300744LL;
long long int var_12 = -5073827576574541815LL;
unsigned long long int var_14 = 8133120359443696579ULL;
int zero = 0;
unsigned short var_15 = (unsigned short)2634;
unsigned long long int var_16 = 4753410586434165652ULL;
_Bool var_17 = (_Bool)0;
long long int var_18 = -8362700731616180108LL;
unsigned long long int var_19 = 3760636672672989427ULL;
_Bool var_20 = (_Bool)1;
unsigned short arr_0 [21] ;
unsigned char arr_2 [21] [21] ;
unsigned int arr_3 [21] [21] ;
unsigned long long int arr_4 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (unsigned short)1381;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)194;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_3 [i_0] [i_1] = 1953671808U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = 2545247075588702437ULL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
