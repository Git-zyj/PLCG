#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)98;
unsigned char var_4 = (unsigned char)137;
unsigned char var_5 = (unsigned char)247;
signed char var_9 = (signed char)42;
unsigned char var_13 = (unsigned char)74;
int zero = 0;
unsigned char var_15 = (unsigned char)56;
unsigned int var_16 = 1112711674U;
signed char var_17 = (signed char)119;
unsigned long long int var_18 = 4627555617452158909ULL;
unsigned char var_19 = (unsigned char)142;
_Bool arr_1 [18] ;
unsigned int arr_2 [18] ;
signed char arr_3 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = 2110728203U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (signed char)-87;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
