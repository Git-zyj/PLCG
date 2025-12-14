#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13643268704303721806ULL;
unsigned short var_2 = (unsigned short)25428;
long long int var_5 = -3953938761219526931LL;
long long int var_7 = 5961300885067673726LL;
unsigned long long int var_8 = 12474634024235946227ULL;
signed char var_9 = (signed char)-115;
int zero = 0;
unsigned long long int var_14 = 7851165039095774270ULL;
unsigned int var_15 = 2759837306U;
int var_16 = -1882793126;
unsigned int var_17 = 1315889973U;
unsigned char var_18 = (unsigned char)85;
unsigned short var_19 = (unsigned short)21887;
unsigned char var_20 = (unsigned char)234;
unsigned short arr_0 [12] ;
_Bool arr_1 [12] ;
signed char arr_2 [12] ;
unsigned int arr_3 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (unsigned short)64563;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (signed char)-87;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = 1129894747U;
}

void checksum() {
    hash(&seed, var_14);
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
