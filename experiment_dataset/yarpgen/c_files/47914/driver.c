#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -401004836;
signed char var_2 = (signed char)-12;
unsigned short var_4 = (unsigned short)29174;
int var_6 = 1245415642;
unsigned int var_9 = 2207811874U;
long long int var_10 = 5686386061622199173LL;
unsigned long long int var_13 = 6344119330222030457ULL;
int zero = 0;
unsigned int var_14 = 876806672U;
unsigned int var_15 = 3977491529U;
unsigned int var_16 = 3388917325U;
signed char var_17 = (signed char)118;
unsigned int var_18 = 3412365826U;
signed char arr_1 [12] ;
long long int arr_2 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (signed char)109;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = 4429774431932701715LL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
