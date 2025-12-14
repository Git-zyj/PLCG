#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8866821632978519406ULL;
unsigned short var_1 = (unsigned short)14640;
unsigned int var_3 = 1575410367U;
signed char var_7 = (signed char)-31;
unsigned long long int var_17 = 7397219124993768084ULL;
int zero = 0;
short var_18 = (short)-14602;
unsigned int var_19 = 3247706460U;
unsigned short var_20 = (unsigned short)26073;
unsigned char var_21 = (unsigned char)191;
signed char var_22 = (signed char)-66;
unsigned int var_23 = 780692550U;
signed char var_24 = (signed char)47;
unsigned int var_25 = 4113195981U;
unsigned short var_26 = (unsigned short)14424;
unsigned short var_27 = (unsigned short)59072;
unsigned int arr_8 [20] [20] [20] [20] ;
unsigned short arr_10 [20] ;
unsigned long long int arr_12 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = 428428906U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_10 [i_0] = (unsigned short)23302;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? 3009653782766872640ULL : 13941724280924024004ULL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
