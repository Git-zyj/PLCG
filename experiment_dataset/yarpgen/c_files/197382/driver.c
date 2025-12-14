#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 275533907;
short var_2 = (short)17365;
short var_3 = (short)14084;
unsigned int var_5 = 2879920059U;
short var_8 = (short)3610;
int zero = 0;
_Bool var_10 = (_Bool)1;
unsigned long long int var_11 = 17582265570844536191ULL;
unsigned long long int var_12 = 2303404917118832870ULL;
unsigned short var_13 = (unsigned short)35093;
_Bool var_14 = (_Bool)0;
short var_15 = (short)15878;
unsigned char var_16 = (unsigned char)105;
_Bool arr_0 [12] ;
unsigned short arr_1 [12] ;
unsigned long long int arr_5 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (unsigned short)33023 : (unsigned short)61762;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_5 [i_0] = 17818766463493487438ULL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
