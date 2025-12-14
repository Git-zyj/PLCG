#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 4821881595828215267LL;
long long int var_3 = 2873419620119593268LL;
int var_4 = -1908581006;
signed char var_7 = (signed char)55;
int zero = 0;
unsigned char var_12 = (unsigned char)100;
unsigned int var_13 = 2757699341U;
unsigned int var_14 = 896075590U;
unsigned char var_15 = (unsigned char)233;
unsigned int var_16 = 1885102291U;
unsigned int arr_1 [15] ;
long long int arr_3 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = 714303407U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_3 [i_0] [i_1] = -5831132271811676665LL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
