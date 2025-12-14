#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1608130142;
_Bool var_1 = (_Bool)1;
unsigned long long int var_2 = 13251153762572354564ULL;
unsigned short var_4 = (unsigned short)7432;
unsigned int var_6 = 1636384120U;
unsigned long long int var_8 = 2629076286836559195ULL;
unsigned long long int var_10 = 9181432211000983816ULL;
int zero = 0;
unsigned long long int var_11 = 16774332096179494764ULL;
unsigned long long int var_12 = 2817822289852056151ULL;
unsigned int var_13 = 2868165066U;
_Bool var_14 = (_Bool)1;
unsigned short arr_1 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)952;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
