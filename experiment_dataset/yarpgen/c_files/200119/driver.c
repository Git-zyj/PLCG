#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)12865;
unsigned char var_4 = (unsigned char)183;
unsigned int var_14 = 51532927U;
int zero = 0;
signed char var_20 = (signed char)-37;
unsigned long long int var_21 = 11365944135828235429ULL;
unsigned int var_22 = 644551473U;
signed char var_23 = (signed char)-99;
short var_24 = (short)1642;
unsigned long long int var_25 = 14247801641263486428ULL;
signed char arr_0 [21] ;
short arr_3 [21] ;
unsigned long long int arr_4 [21] [21] ;
unsigned char arr_7 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (signed char)-113;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = (short)17443;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_4 [i_0] [i_1] = 12858660814830995674ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_7 [i_0] = (unsigned char)187;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
