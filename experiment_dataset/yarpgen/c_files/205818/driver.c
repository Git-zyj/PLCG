#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1026088883U;
long long int var_4 = -7496569244814908764LL;
unsigned int var_9 = 2989270629U;
signed char var_13 = (signed char)-36;
int zero = 0;
unsigned int var_16 = 2684661182U;
int var_17 = -1613094823;
unsigned char var_18 = (unsigned char)234;
unsigned int var_19 = 3221040521U;
unsigned char var_20 = (unsigned char)13;
unsigned int arr_4 [23] [23] [23] ;
signed char arr_5 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 3275275692U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = (signed char)37;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
