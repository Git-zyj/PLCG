#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)18637;
unsigned long long int var_1 = 3880076321101635889ULL;
long long int var_4 = 5212562420772044125LL;
long long int var_5 = -9010518273967009867LL;
unsigned long long int var_8 = 2697303771944004139ULL;
long long int var_9 = 6168307606758465621LL;
unsigned int var_15 = 2174071994U;
int zero = 0;
long long int var_17 = 3349316798879267950LL;
long long int var_18 = -6401711151558668951LL;
long long int var_19 = -784854595198373990LL;
unsigned int var_20 = 2573667831U;
unsigned char arr_1 [12] ;
unsigned int arr_3 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (unsigned char)43;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = 785469906U;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
