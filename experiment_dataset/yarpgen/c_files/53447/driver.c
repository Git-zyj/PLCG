#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_6 = (unsigned char)202;
int var_7 = -1971436956;
unsigned char var_10 = (unsigned char)91;
unsigned char var_12 = (unsigned char)53;
unsigned char var_15 = (unsigned char)133;
int zero = 0;
unsigned char var_16 = (unsigned char)180;
int var_17 = 1007769437;
unsigned int arr_0 [24] ;
int arr_1 [24] [24] ;
unsigned char arr_2 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = 2350983698U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = 400642670;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (unsigned char)50;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
