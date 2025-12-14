#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 4836006079390990813ULL;
unsigned long long int var_2 = 14743129779373847265ULL;
unsigned int var_3 = 1157598341U;
unsigned long long int var_5 = 18219485068705463731ULL;
signed char var_6 = (signed char)-12;
unsigned int var_8 = 3602592832U;
unsigned int var_9 = 3315688989U;
unsigned int var_11 = 4173226512U;
unsigned long long int var_12 = 9761265463454149357ULL;
unsigned short var_13 = (unsigned short)24205;
unsigned short var_14 = (unsigned short)31929;
unsigned short var_16 = (unsigned short)33367;
int zero = 0;
unsigned short var_17 = (unsigned short)11972;
short var_18 = (short)-21520;
unsigned int var_19 = 1205585073U;
signed char var_20 = (signed char)29;
unsigned int arr_8 [17] [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = 3284975577U;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    hash(&seed, arr_8 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
