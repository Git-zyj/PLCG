#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)65;
unsigned short var_1 = (unsigned short)19284;
unsigned char var_2 = (unsigned char)52;
unsigned short var_3 = (unsigned short)37030;
short var_6 = (short)30576;
unsigned char var_8 = (unsigned char)172;
unsigned short var_9 = (unsigned short)23253;
int zero = 0;
unsigned long long int var_11 = 7318346694021542575ULL;
short var_12 = (short)-14181;
unsigned int var_13 = 3075728142U;
unsigned short var_14 = (unsigned short)46130;
short var_15 = (short)9889;
unsigned short arr_0 [10] ;
short arr_2 [10] [10] ;
unsigned long long int arr_5 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (unsigned short)33674;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_2 [i_0] [i_1] = (short)1071;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? 9131052662065930804ULL : 213691129860038009ULL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
