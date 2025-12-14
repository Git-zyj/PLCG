#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3224080385U;
unsigned short var_2 = (unsigned short)27454;
unsigned long long int var_4 = 11520736645605301553ULL;
unsigned long long int var_5 = 16482422007952131664ULL;
unsigned char var_7 = (unsigned char)60;
int zero = 0;
unsigned char var_10 = (unsigned char)180;
int var_11 = 1046542712;
short var_12 = (short)8590;
int var_13 = -2125866905;
unsigned char var_14 = (unsigned char)93;
unsigned int arr_2 [20] ;
signed char arr_7 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = 2960995598U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_7 [i_0] [i_1] = (signed char)10;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
