#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8888517954316046417ULL;
_Bool var_1 = (_Bool)1;
unsigned char var_2 = (unsigned char)140;
int var_4 = 1696520108;
unsigned int var_7 = 3915420600U;
int var_8 = 1728977004;
int zero = 0;
unsigned short var_11 = (unsigned short)51770;
unsigned int var_12 = 4078803909U;
int var_13 = 1298592580;
unsigned char var_14 = (unsigned char)129;
unsigned short var_15 = (unsigned short)23512;
long long int arr_1 [23] [23] ;
int arr_2 [23] [23] ;
unsigned long long int arr_5 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_1 [i_0] [i_1] = 5208889600467780456LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_2 [i_0] [i_1] = -266322835;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 9894958080914852010ULL : 5683781744860569647ULL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
