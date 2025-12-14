#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 1356707961562903071ULL;
signed char var_4 = (signed char)-23;
short var_13 = (short)5244;
unsigned int var_15 = 3672805755U;
short var_16 = (short)-6828;
int zero = 0;
_Bool var_20 = (_Bool)1;
unsigned short var_21 = (unsigned short)22921;
unsigned char var_22 = (unsigned char)200;
unsigned char var_23 = (unsigned char)238;
short var_24 = (short)-29145;
unsigned short var_25 = (unsigned short)57130;
signed char arr_0 [15] [15] ;
int arr_5 [14] ;
unsigned long long int arr_6 [14] ;
int arr_2 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)-28;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_5 [i_0] = -464481161;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_6 [i_0] = 604815109220024293ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = -52656465;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
