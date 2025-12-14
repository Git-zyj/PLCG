#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3192751341711061493ULL;
short var_1 = (short)5095;
long long int var_3 = -6726990868989176869LL;
unsigned short var_4 = (unsigned short)39426;
long long int var_5 = 1291192596219462935LL;
long long int var_6 = 5544200022895211791LL;
short var_7 = (short)7294;
unsigned short var_8 = (unsigned short)28478;
long long int var_9 = -7404028147700939546LL;
unsigned int var_10 = 3618981815U;
int zero = 0;
int var_11 = -2038410266;
_Bool var_12 = (_Bool)1;
long long int var_13 = -4754717638694033472LL;
unsigned short var_14 = (unsigned short)22091;
int var_15 = -1638579436;
unsigned long long int var_16 = 9073972101922602020ULL;
unsigned char var_17 = (unsigned char)121;
unsigned int arr_2 [18] ;
int arr_3 [18] [18] ;
unsigned short arr_4 [18] ;
int arr_6 [18] [18] ;
unsigned int arr_11 [10] [10] ;
unsigned long long int arr_12 [10] [10] ;
unsigned short arr_13 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = 1950086211U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_3 [i_0] [i_1] = 1690863644;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = (unsigned short)60533;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_6 [i_0] [i_1] = (i_0 % 2 == 0) ? 1901359508 : -1844128973;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_11 [i_0] [i_1] = 2465154583U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_12 [i_0] [i_1] = 16398248330923469804ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_13 [i_0] = (unsigned short)6405;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_13 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
