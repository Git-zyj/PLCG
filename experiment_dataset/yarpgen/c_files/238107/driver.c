#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)13594;
long long int var_3 = -4739434745718096654LL;
short var_4 = (short)6443;
unsigned int var_7 = 425292765U;
int zero = 0;
long long int var_11 = -5561460271165042875LL;
short var_12 = (short)-27266;
signed char var_13 = (signed char)19;
unsigned char var_14 = (unsigned char)88;
unsigned int arr_1 [20] ;
signed char arr_2 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = 2408414077U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)-45;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
