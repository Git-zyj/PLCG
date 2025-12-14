#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)44611;
unsigned char var_4 = (unsigned char)133;
int var_6 = 187057645;
unsigned long long int var_7 = 17299608648471553046ULL;
_Bool var_10 = (_Bool)1;
int var_14 = -745394118;
int zero = 0;
unsigned long long int var_15 = 2049474436263628528ULL;
long long int var_16 = -5455038969568588732LL;
signed char var_17 = (signed char)-25;
_Bool var_18 = (_Bool)1;
unsigned char var_19 = (unsigned char)194;
unsigned short var_20 = (unsigned short)46288;
unsigned char arr_0 [23] ;
unsigned char arr_4 [23] ;
unsigned int arr_8 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (unsigned char)71;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (unsigned char)129 : (unsigned char)55;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_8 [i_0] = 922500885U;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
