#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3207112802U;
int var_4 = 703131925;
unsigned int var_7 = 1725566612U;
short var_11 = (short)-27768;
int zero = 0;
long long int var_17 = 1407124930029267128LL;
long long int var_18 = -2553564514123501399LL;
unsigned int var_19 = 1838241619U;
int var_20 = -696195934;
unsigned char var_21 = (unsigned char)172;
signed char var_22 = (signed char)32;
short var_23 = (short)11939;
unsigned char arr_0 [23] ;
long long int arr_2 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (unsigned char)16;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = -4231531689712713173LL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
