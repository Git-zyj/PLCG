#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 17701671261850766571ULL;
_Bool var_5 = (_Bool)1;
short var_8 = (short)-15149;
int zero = 0;
int var_10 = -611049777;
short var_11 = (short)2303;
int var_12 = -1055997002;
unsigned long long int var_13 = 13667182936725635313ULL;
unsigned short var_14 = (unsigned short)19237;
unsigned short arr_0 [17] [17] ;
unsigned long long int arr_1 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)8285;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = 16142048447282145060ULL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
