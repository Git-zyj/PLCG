#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3715427352U;
unsigned char var_6 = (unsigned char)207;
long long int var_8 = 3057733854600470677LL;
unsigned short var_9 = (unsigned short)45466;
unsigned short var_10 = (unsigned short)50023;
unsigned long long int var_11 = 3726004042734022758ULL;
unsigned short var_13 = (unsigned short)11014;
unsigned short var_14 = (unsigned short)14960;
unsigned short var_15 = (unsigned short)37698;
long long int var_17 = 373940733708579267LL;
int zero = 0;
unsigned long long int var_20 = 7446640657591149846ULL;
_Bool var_21 = (_Bool)1;
unsigned long long int var_22 = 4512842254504693660ULL;
int var_23 = -864315124;
long long int arr_0 [21] [21] ;
short arr_2 [21] [21] ;
long long int arr_4 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_0 [i_0] [i_1] = -796683024562451024LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_2 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)-23206 : (short)15;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_4 [i_0] [i_1] = 4057342308705053281LL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
