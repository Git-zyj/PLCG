#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)108;
unsigned int var_2 = 1478472521U;
unsigned char var_3 = (unsigned char)227;
unsigned char var_4 = (unsigned char)249;
unsigned int var_6 = 1451435329U;
unsigned char var_8 = (unsigned char)22;
unsigned char var_9 = (unsigned char)101;
unsigned int var_10 = 821490514U;
int zero = 0;
unsigned char var_11 = (unsigned char)181;
unsigned int var_12 = 2122654463U;
unsigned char var_13 = (unsigned char)18;
unsigned char var_14 = (unsigned char)244;
unsigned int var_15 = 2784846318U;
unsigned char var_16 = (unsigned char)215;
unsigned char arr_0 [21] ;
unsigned char arr_1 [21] ;
unsigned int arr_2 [21] ;
unsigned int arr_3 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (unsigned char)184;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (unsigned char)175;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = 849978325U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_3 [i_0] [i_1] = 79902620U;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
