#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1022184259;
unsigned int var_3 = 2214913735U;
int var_4 = -1634758797;
short var_6 = (short)19286;
unsigned char var_8 = (unsigned char)174;
unsigned char var_9 = (unsigned char)16;
unsigned short var_10 = (unsigned short)18317;
unsigned int var_13 = 3197695208U;
int zero = 0;
unsigned long long int var_16 = 964110352536915072ULL;
int var_17 = -2113455611;
unsigned short var_18 = (unsigned short)1369;
unsigned int var_19 = 3245240801U;
unsigned int var_20 = 3930775397U;
unsigned long long int var_21 = 15403590136405613923ULL;
unsigned int var_22 = 3445098624U;
unsigned int arr_0 [20] ;
unsigned long long int arr_2 [20] ;
unsigned long long int arr_3 [20] [20] [20] ;
short arr_5 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = 3803879981U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = 9337673506194072518ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 4227697956669150142ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (short)-26291 : (short)10958;
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
