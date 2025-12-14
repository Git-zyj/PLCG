#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -3689083730022632039LL;
short var_9 = (short)12070;
int var_13 = 1071775156;
unsigned int var_14 = 1191559368U;
int zero = 0;
unsigned char var_17 = (unsigned char)14;
unsigned long long int var_18 = 8604006736072106381ULL;
signed char var_19 = (signed char)-74;
long long int var_20 = -1441820707257827641LL;
short var_21 = (short)-31668;
signed char var_22 = (signed char)-12;
short var_23 = (short)-17856;
long long int var_24 = -555174506567294705LL;
unsigned short var_25 = (unsigned short)40506;
signed char arr_1 [10] ;
unsigned long long int arr_4 [16] ;
unsigned long long int arr_5 [16] ;
signed char arr_8 [22] [22] ;
unsigned long long int arr_3 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (signed char)88;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = 6409833954343327537ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = 14686243397458175318ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_8 [i_0] [i_1] = (signed char)-71;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = 1638456150529595989ULL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
