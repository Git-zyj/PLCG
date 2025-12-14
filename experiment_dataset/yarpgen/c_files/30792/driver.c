#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-12149;
unsigned int var_4 = 87804056U;
unsigned long long int var_7 = 14158408070022064086ULL;
unsigned long long int var_8 = 12269852744399763873ULL;
unsigned short var_9 = (unsigned short)24914;
int zero = 0;
long long int var_12 = 2025977159145876316LL;
long long int var_13 = -289911696553080584LL;
short var_14 = (short)20175;
signed char var_15 = (signed char)-5;
unsigned long long int arr_1 [12] [12] ;
unsigned int arr_2 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_1 [i_0] [i_1] = (i_1 % 2 == 0) ? 12602720583545257126ULL : 6553846481346970392ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_2 [i_0] [i_1] = 2552263391U;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
