#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)220;
unsigned long long int var_4 = 17961276293785743777ULL;
unsigned long long int var_6 = 17822225728973093833ULL;
unsigned long long int var_7 = 4744472818387513866ULL;
unsigned long long int var_9 = 13483710882303582369ULL;
unsigned long long int var_11 = 2376459791873381437ULL;
int zero = 0;
unsigned char var_12 = (unsigned char)144;
unsigned char var_13 = (unsigned char)85;
unsigned char var_14 = (unsigned char)178;
unsigned long long int var_15 = 57765937165716191ULL;
unsigned char arr_7 [25] [25] ;
unsigned long long int arr_8 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned char)103;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_8 [i_0] = 5172216786369935636ULL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
