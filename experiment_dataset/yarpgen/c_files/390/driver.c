#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)140;
unsigned short var_1 = (unsigned short)35682;
unsigned char var_3 = (unsigned char)152;
_Bool var_4 = (_Bool)0;
unsigned short var_6 = (unsigned short)4875;
unsigned long long int var_8 = 11970051750484388489ULL;
unsigned short var_9 = (unsigned short)56767;
int var_10 = -1876041018;
unsigned short var_11 = (unsigned short)24102;
int zero = 0;
unsigned char var_12 = (unsigned char)97;
unsigned char var_13 = (unsigned char)138;
_Bool var_14 = (_Bool)1;
_Bool var_15 = (_Bool)0;
unsigned short arr_1 [20] ;
unsigned long long int arr_3 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (unsigned short)40393;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = 9936111923040855186ULL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
