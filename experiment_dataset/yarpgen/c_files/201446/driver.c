#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)162;
short var_4 = (short)-23516;
short var_9 = (short)-9774;
short var_11 = (short)31243;
int zero = 0;
unsigned char var_12 = (unsigned char)99;
unsigned char var_13 = (unsigned char)50;
unsigned short var_14 = (unsigned short)23217;
_Bool var_15 = (_Bool)1;
_Bool var_16 = (_Bool)0;
unsigned char var_17 = (unsigned char)75;
int arr_0 [14] [14] ;
unsigned int arr_3 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_0 [i_0] [i_1] = 1114064330;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = 3417139630U;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
