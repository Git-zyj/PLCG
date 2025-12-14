#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)42995;
signed char var_7 = (signed char)-115;
int var_8 = -990927266;
_Bool var_9 = (_Bool)0;
long long int var_10 = -1455493385488167210LL;
unsigned short var_13 = (unsigned short)18714;
signed char var_16 = (signed char)17;
int zero = 0;
unsigned char var_18 = (unsigned char)41;
unsigned short var_19 = (unsigned short)2852;
signed char var_20 = (signed char)-122;
signed char var_21 = (signed char)55;
_Bool var_22 = (_Bool)0;
int var_23 = 55310212;
unsigned char arr_0 [25] [25] ;
long long int arr_2 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)228;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = -1624954048097661282LL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
