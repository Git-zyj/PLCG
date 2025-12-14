#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)19;
signed char var_3 = (signed char)113;
int var_4 = -626986020;
unsigned int var_6 = 2983589476U;
unsigned int var_9 = 655606800U;
unsigned int var_15 = 459139649U;
int zero = 0;
unsigned long long int var_16 = 3011413710115288150ULL;
unsigned int var_17 = 3125791966U;
signed char var_18 = (signed char)-65;
signed char var_19 = (signed char)89;
short var_20 = (short)12783;
unsigned int var_21 = 1720070271U;
short var_22 = (short)-18562;
unsigned char arr_1 [10] [10] ;
unsigned long long int arr_3 [10] ;
unsigned long long int arr_4 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)223;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = 13664316060128174597ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = 8391303184426830829ULL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
