#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)96;
unsigned long long int var_2 = 11613232129497167651ULL;
unsigned int var_13 = 1000595405U;
unsigned long long int var_14 = 5931754715669468742ULL;
int zero = 0;
signed char var_16 = (signed char)93;
unsigned char var_17 = (unsigned char)58;
unsigned char var_18 = (unsigned char)159;
unsigned int var_19 = 3938338718U;
unsigned short var_20 = (unsigned short)10083;
unsigned short var_21 = (unsigned short)21252;
unsigned int var_22 = 3127152371U;
unsigned short arr_5 [14] [14] [14] ;
unsigned int arr_6 [14] [14] [14] ;
unsigned long long int arr_8 [14] ;
unsigned short arr_9 [19] ;
short arr_11 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (unsigned short)49020;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 1094625422U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_8 [i_0] = 3542997176918283187ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_9 [i_0] = (unsigned short)34363;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_11 [i_0] = (short)4091;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
