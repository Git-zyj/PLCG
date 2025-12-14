#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 213127900;
long long int var_5 = 318553704478130713LL;
unsigned short var_11 = (unsigned short)59832;
int zero = 0;
int var_20 = 793795988;
short var_21 = (short)29091;
unsigned int var_22 = 3413200159U;
signed char var_23 = (signed char)-36;
long long int arr_0 [20] [20] ;
unsigned int arr_2 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_0 [i_0] [i_1] = 4055612499214348050LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = 559689824U;
}

void checksum() {
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
