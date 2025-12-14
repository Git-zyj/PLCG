#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1897539863;
unsigned int var_7 = 3936870622U;
unsigned int var_8 = 2548992738U;
long long int var_9 = 6516829541240041089LL;
unsigned char var_11 = (unsigned char)10;
unsigned char var_12 = (unsigned char)149;
unsigned int var_13 = 3346558541U;
int zero = 0;
unsigned long long int var_14 = 2020055501620276481ULL;
unsigned char var_15 = (unsigned char)126;
unsigned char var_16 = (unsigned char)244;
unsigned int var_17 = 2523476802U;
unsigned int arr_1 [21] ;
unsigned char arr_2 [21] ;
unsigned long long int arr_3 [21] ;
int arr_4 [21] ;
unsigned char arr_5 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = 2810151217U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (unsigned char)89;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = 8812897474463887328ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = -731774524;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_5 [i_0] = (unsigned char)100;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
