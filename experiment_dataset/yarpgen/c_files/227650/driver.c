#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7325200952052486282ULL;
unsigned int var_1 = 4159168354U;
unsigned char var_2 = (unsigned char)136;
unsigned long long int var_6 = 9155997905300165655ULL;
unsigned int var_9 = 2980884665U;
short var_14 = (short)10210;
int zero = 0;
unsigned long long int var_17 = 16330042080736861923ULL;
unsigned long long int var_18 = 11536247734213106068ULL;
unsigned int arr_5 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 2269743101U : 2022311610U;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
