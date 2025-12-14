#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2170262379U;
short var_2 = (short)27397;
_Bool var_6 = (_Bool)0;
_Bool var_7 = (_Bool)1;
signed char var_8 = (signed char)17;
_Bool var_10 = (_Bool)0;
int zero = 0;
short var_11 = (short)19987;
_Bool var_12 = (_Bool)1;
unsigned int var_13 = 2936691440U;
int arr_2 [12] [12] ;
unsigned char arr_3 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_2 [i_0] [i_1] = -1081663297;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = (unsigned char)51;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
