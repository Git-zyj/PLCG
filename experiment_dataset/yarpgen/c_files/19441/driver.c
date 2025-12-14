#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned char var_4 = (unsigned char)119;
unsigned char var_6 = (unsigned char)155;
unsigned short var_8 = (unsigned short)31765;
unsigned char var_10 = (unsigned char)254;
int zero = 0;
int var_12 = -87641621;
unsigned long long int var_13 = 4067036398445865352ULL;
unsigned char var_14 = (unsigned char)122;
int var_15 = -1471852367;
unsigned char var_16 = (unsigned char)171;
short var_17 = (short)24623;
unsigned long long int var_18 = 12355193985302816215ULL;
int arr_0 [18] [18] ;
unsigned int arr_1 [18] ;
long long int arr_2 [18] ;
unsigned char arr_3 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_0 [i_0] [i_1] = -1812117129;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = 3583831483U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = 6426348669131616659LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (unsigned char)192;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
