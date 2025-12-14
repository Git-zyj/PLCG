#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)187;
unsigned long long int var_3 = 8805776280592690925ULL;
unsigned int var_6 = 728767758U;
int var_7 = -368643542;
int var_8 = 2033472043;
long long int var_9 = 6305095544373587021LL;
unsigned int var_12 = 1799213408U;
int zero = 0;
unsigned short var_16 = (unsigned short)13352;
_Bool var_17 = (_Bool)1;
unsigned char var_18 = (unsigned char)39;
long long int var_19 = -5270149488493446403LL;
int var_20 = -758219826;
long long int var_21 = 4809350430859167415LL;
unsigned char arr_0 [21] ;
unsigned int arr_4 [10] ;
unsigned char arr_2 [21] ;
long long int arr_5 [10] ;
unsigned int arr_6 [10] ;
unsigned int arr_7 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (unsigned char)28;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = 1671448842U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (unsigned char)84;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 5692010902071518133LL : -3255273382423538110LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 2435730987U : 2543430650U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_7 [i_0] [i_1] = (i_0 % 2 == 0) ? 1548040613U : 2124747537U;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
